
import java.io.*;
import java.util.Scanner;

class File_Handling {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        File f = new File("FH_Demo.txt");
        try {

            if (f.createNewFile()) {
                System.out.print("File Created Successfully : " + f.getName());
            } else {
                System.out.print("File already exists");
            }
        } catch (IOException e) {
            System.out.print("\nError : " + e.getMessage());
        }
        try (FileWriter w = new FileWriter("FH_Demo.txt", true)) {
            String s;
            System.out.print("\nEnter your Name : ");
            s = sc.nextLine();
            w.write(s + ", Welcome to File Handling in Java\n");
            System.out.print("\nSuccess");
        } catch (IOException e) {
            System.out.print("Error : " + e.getMessage());
        }
        try (BufferedReader br = new BufferedReader(new FileReader("FH_Demo.txt"))) {
            String ch;
            while ((ch = br.readLine()) != null) {
                System.out.println(ch);
            }
        } catch (IOException e) {
            System.out.print("Error : " + e.getMessage());
        }
        try {

            if (f.exists()) {
                System.out.print("\nFile Exists");
            } else {
                System.out.print("\nFile Not Exists");
            }
            if (f.delete()) {
                System.out.println("\nFile Deleted Successfully :" + f.getName());
            } else {
                System.out.println("File not Deleted");
            }
        } catch (Exception e) {
            System.out.print("Error : " + e.getMessage());
        }
    }
}
