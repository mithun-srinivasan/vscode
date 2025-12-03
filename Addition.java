import java.util.Scanner;
class Addition{

    public static void main(String Args[]){
        Scanner sc=new Scanner(System.in);
        int a,b,sum;
        System.out.println("Enter first number:");
        a=sc.nextInt();
        System.out.println("Enter second number:");
        b=sc.nextInt();
        sum=a+b;
        System.out.println("Sum is:"+sum);
    }
}