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
	def publicKey = msg.get("dukcapilFrPublicKey");
	String nik = msg.get("nik");
	String username = msg.get("username");
	String password = msg.get("password");

	msg.put("publicKeyOrigin", publicKey)
	    
	// Base64 decode 
	byte[] pkcs8EncodedBytes = Base64.getDecoder().decode(publicKey.replace("-----BEGIN PUBLIC KEY-----", "").replace("-----END PUBLIC KEY-----", "").replace(" ","").trim());

	// extract the public key
	PKCS8EncodedKeySpec keySpec = new PKCS8EncodedKeySpec(pkcs8EncodedBytes);
	KeyFactory kf = KeyFactory.getInstance("RSA");
	PublicKey pubKey = kf.generatePublic(keySpec);
	msg.put("pubKeyGenerate", pubKey)

	// Signature Process
	Cipher nikSign = Cipher.getInstance("RSA");
	nikSign.init(Cipher.ENCRYPT_MODE, pubKey);
	Cipher usernameSign = Cipher.getInstance("RSA");
	usernameSign.init(Cipher.ENCRYPT_MODE, pubKey);
	Cipher passwordSign = Cipher.getInstance("RSA");
	passwordSign.init(Cipher.ENCRYPT_MODE, pubKey);

	byte[] nikByte = nik.getBytes();
	byte[] usernameByte = username.getBytes();
	byte[] passwordByte = password.getBytes();

	//nikSign.update(nikByte);
	//usernameSign.update(usernameByte);
	//passwordSign.update(passwordByte);

	def nikEncode = encodeBase64String(nikSign.doFinal(nikByte));
	def usernameEncode = encodeBase64String(usernameSign.doFinal(usernameByte));
	def passwordEncode = encodeBase64String(passwordSign.doFinal(passwordByte));

	msg.put("nikSign", nikEncode);
	msg.put("usernameSign", usernameEncode);
	msg.put("passwordSign", passwordEncode);
	return true;        
}