import java.util.Scanner;
class Arithmeticoperators{

    public static void main(String Args[]){
        Scanner sc=new Scanner(System.in);
        int a,b,sum,sub,mul,mod;
        int div;
        System.out.println("Enter first number:");
        a=sc.nextInt();
        System.out.println("Enter second number:");
        b=sc.nextInt();
        sum=a+b;
        System.out.println("Sum is:"+sum);
        sub=a-b;
        System.out.println("Subtraction is:"+sub);
        mul=a*b;
        System.out.println("Multiplication is:"+mul);
        div=a/b;
        System.out.println("Division is:"+div);
        mod=a%b;
        System.out.println("Modulus is:"+mod);
    }
}