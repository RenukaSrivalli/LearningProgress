import java.util.Scanner;
class Vowel
{
public static void main(String args[])
{
int  i=1;
while(i)
{
Scanner input=new Scanner(System.in);
System.out.println("Enter a letter");
string letter=input.nextLine();
switch(letter)
{
case   'a':System.out.println("a is vowel");
	break;
case 'e':System.out.println("e is vowel");
	break;
case 'i':System.out.println("i is vowel");
	break;
case 'o':System.out.println("o is vowel");
	break;
case 'u':System.out.println("u is vowel");
	break;

default:System.out.println("Not a vowel");
}
}
}
}
