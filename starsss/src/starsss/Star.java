package starsss;

import java.util.Scanner;

public class Star {
	public static void main(String[] args) {
		
		System.out.println("enter size of array");
		Scanner obj=new Scanner(System.in);
		int limit=obj.nextInt();
		System.out.println("enter the values in array");
		int[] a=getarray(limit,obj);
		System.out.println("\n"+"new array");
		int[] b=oddout(limit,obj,a);
		display(limit,b);
		//display1(b);
	}
	public static int[] getarray(int limit1,Scanner obj) {
		int a[] = new int[limit1];
		for(int i=0;i<limit1;i++) {
			a[i]=obj.nextInt();
					
		}
		return a;
	}	public static int[] oddout(int limit1,Scanner obj,int [] a) {
		int b1[] = new int[limit1];
		for(int i=0;i<limit1;i++) {
			 if(i<a.length) {
			if(a[i]%2!=0) {b1[i]=a[i];
				i=i+3;
		}
			 }if(i < a.length) {
			b1[i]=a[i];
		}
		}
		return b1;
	}
	
	public static void display(int limit1,int[] b) {
		int c[] = new int[limit1];
		for(int i=0;i<b.length;i++) {
			if(b[i]!=0) {b[i]=c[i];}
			System.out.print("\t"+c[i]);
					
		}
	
	}
	
	public static void display1(int[] b) {
	
		for(int i=1;i<=b.length;i++) {for(int j=0;j<=i;j++) {
			if(j%2==0) {System.out.print("\t"+b[j]);
				
			}if(j%2==1){System.out.print("\n"+b[j]);
				
			}
		}
			
					
		}
	
	}

	

}
