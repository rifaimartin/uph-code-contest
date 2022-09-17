import org.bouncycastle.jce.provider.BouncyCastleProvider;
import javax.crypto.Cipher;
import java.io.*;
import java.security.*;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.X509EncodedKeySpec;
import java.util.Base64;
import static org.apache.commons.codec.binary.Base64.encodeBase64String
import groovy.json.JsonBuilder
import groovy.json.JsonSlurper

def invoke(msg)    {
      Security.addProvider(new BouncyCastleProvider());
	
      def privateKey = msg.get("tokopediaPrivateKey");
      String body = msg.get("body");
	
	msg.put("privateKeyOrigin", privateKey)
	    
      // Base64 decode 
      byte[] pkcs8EncodedBytes = Base64.getDecoder().decode(privateKey.replace("-----BEGINRSAPRIVATEKEY-----", "").replace("-----ENDRSAPRIVATEKEY-----", ""));

      // extract the private key
      PKCS8EncodedKeySpec keySpec = new PKCS8EncodedKeySpec(pkcs8EncodedBytes);
	KeyFactory kf = KeyFactory.getInstance("RSA");
      PrivateKey privKey = kf.generatePrivate(keySpec);
	msg.put("privKeyGenerate", privKey)

   	// Signature Process
    	Signature signature = Signature.getInstance("SHA256withRSA", "BC");
    	signature.initSign(privKey);
   	byte[] message = body.getBytes();
    	signature.update(message);

	def signatureEncode = encodeBase64String(signature.sign())

	msg.put("tokopedia.signature", signatureEncode);
	return true;        
}


004086824112,000246521769,007880674421,003164141720,001136365558,006106215157,001133336666,001157575757,000000003811,004538453517,001157575757,001430544858,001122112201,001136363636,000000002854,004681250074,001136365558,001199999999,000181413260,006491182430,007609615034,002680048911,001157575757,000000002854,001136365558,000000003768,001100220022,083833333333,001100220022,987654321,123455432,003941521587,001100110011,001100000000