package n5585;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int k = sc.nextInt();
		int count=0;
		int give=1000-k;
		int[] money = new int[6];
		
		money[0]=500;
		money[1]=100;
		money[2]=50;
		money[3]=10;
		money[4]=5;
		money[5]=1;
		
		while(give!=0) {
			for(int i=0;i<6;i++) {
				if(give-money[i]>=0) {
					count++;
					give-=money[i];
					break;
				}
			}
		}
		System.out.println(count);
	}
}
