import java.util.Scanner;

class add {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a, b, sum;
        System.out.println("enter a");
        a = sc.nextInt();
        System.out.println("enter b");
        b = sc.nextInt();
        sum = a + b;
        System.out.println("the addition of " + a + " and " + b + " is " + sum);
        sc.close();
    }
}