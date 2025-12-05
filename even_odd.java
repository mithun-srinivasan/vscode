import java.util.Scanner;

class even_odd{
public static void main(String Args[])
{
Scanner sc=new Scanner(System.in);
int num;
System.out.println("Enter The Number");
num=sc.nextInt();
if(num%2==0) System.out.println(""+num+" is even");
else System.out.println(""+num+" is odd");
}
}