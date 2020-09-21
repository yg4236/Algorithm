package n11399;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
	
	Scanner sc = new Scanner(System.in);
	
	int n;
	n=sc.nextInt();
	
	int[] time = new int[n];
	for(int i=0; i<n;i++) {
		time[i] =sc.nextInt();
	}
	int min=0;
	Arrays.sort(time);
	int sum = 0;
	for(int i=0;i<time.length;i++) {
		min+=time[i];
		sum+=min;
	}
	System.out.println(sum);
	}
}
