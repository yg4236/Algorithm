package n10162;


import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a=0, b=0, c=0;
		
		int t = sc.nextInt();
		while(t>=10) {
			if(t>=300) {
				t-=300;
				a++;
			}else if(t>=60){
				t-=60;
				b++;
			}else if(t>=10) {
				t-=10;
				c++;
			}
		}
		System.out.println(t==0?a+" "+b+" "+c:-1);
	}

}
