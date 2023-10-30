package assigment;
public class MainJob {
    public static void main(String[] args) {
        String str = "abba"; // Given String

        // Creating array of string length
        char[] arr = new char[str.length()];
    
        // Copy character by character into array
        for (int i = 0; i < str.length(); i++) {
          arr[i] = str.charAt(i);
        }

        long result =   

        System.out.println(result);
    
        // Printing the character array
        for (char x : arr) {
          System.out.println(x);
        }

        for (int i = 1; i < arr.length; i++) {
            // System.out.println(i);
            if (arr[i-1] == 'b' && arr[i] == 'b') {

                System.out.println("false");
            } 
            System.out.println(arr[i]);
        
    }
}
}