import java.util.Scanner;

public class Uppercase {
	public static void main(String[] args) {
		System.out.println("Enter a word with lowr cases");
		Scanner sc=new Scanner(System.in);
		String Str=sc.next();
		String Str1=Str.toUpperCase();
		System.out.println("same string in upper cases"+Str1);
	}

}
