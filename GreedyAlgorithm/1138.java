package n1138;

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr=new int[n+1];
		List<Integer> ans = new ArrayList<>();
		
		for(int i=1;i<=n;i++) {
			arr[i]=sc.nextInt();
		}
		for(int i=n;i>=1;i--)
		{
			ans.add(arr[i],i);
		}
		for(int k:ans) {
			System.out.print(k+" ");
		}
	}
}
