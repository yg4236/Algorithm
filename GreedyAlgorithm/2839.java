package n2839;

import java.util.Scanner;

public class Sol {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n,n1;
		n=sc.nextInt();
		n1=n/5;
		while(n1 != -1)
		{
			if((n-(n1*5))%3==0)
			{
				System.out.println(((n-(n1*5))/3)+n1);
				break;
			}
			else
			{
				n1=n1-1;
			}
		}
		if(n1==-1) System.out.println(-1);
		sc.close();
	}

}
