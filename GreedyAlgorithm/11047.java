package n11047;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int count=0;
		
		int[] money = new int[n];
		
		for(int i=0;i<n;i++)
		{
			money[i]=sc.nextInt();
		}
		
		while(k!=0) {
			for(int i=n-1;i>=0;i--) {
				if(k-money[i]>=0) {
					count++;
					k-=money[i];
					break;
				}
			}
		}
		System.out.println(count);
	}
}
