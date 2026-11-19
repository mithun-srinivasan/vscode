import java.util.Scanner;
public class leapyrandcentury{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        Boolean isleapyr = (year%4==0 && year%100==0) || year%400 == 0;
        Boolean iscentury = year%100==0;
        System.out.println(year + (isleapyr ? "is a leap year":"it's not a leap year"));
        System.out.println(year + (iscentury ? "is a century":"is not a century"));
        sc.close();
      }
  }

