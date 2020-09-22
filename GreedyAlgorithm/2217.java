package n2217;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int w=0;
		Integer[] weight = new Integer[n];
		for(int i=0; i<n;i++)
			weight[i]=sc.nextInt();
		Arrays.sort(weight, Collections.reverseOrder());
		
		for(int k=1;k<=n;k++)
			w=Math.max(w, weight[k-1]*k);
		System.out.println(w);
		
	}
}
