
public class StringMethodsDemo {
    public static void main(String[] args) {

        String word = "Java";
        int len = word.length();
        System.out.println(word + " has " + len + " characters");

        String sentence = "Programming";
        System.out.println("Upper case: " + sentence.toUpperCase());
        System.out.println("Lower case: " + sentence.toLowerCase());

        String myName = "Rahul";
        char thirdLetter = myName.charAt(2); // index starts at 0
        System.out.println("The 3rd letter in " + myName + " is " + thirdLetter);

        int firstG = sentence.indexOf("g");
        int lastG = sentence.lastIndexOf("g");
        System.out.println("First 'g' is at index " + firstG);
        System.out.println("Last 'g' is at index " + lastG);

        String fromIndex3 = sentence.substring(3);
        String middlePart = sentence.substring(3, 7);
        System.out.println("From index 3 to end: " + fromIndex3);
        System.out.println("From index 3 to 7: " + middlePart);

        boolean sameWord = word.equals("Java");
        System.out.println("Does \"Java\" equal word? " + sameWord);
    }
}