package Basics;
import java.util.*;

public class LeapYear {
	public static void main(String[] args)
	{
		int x;
		Scanner sc=new Scanner(System.in);
		x=sc.nextInt();
		if((x%4==0 && x%100!=0) || x%400==0)
			System.out.println("Leap Year "+x);
		else
		{
			System.out.println("Not a Leap Year "+x);
		}
		sc.close();
	}

}
