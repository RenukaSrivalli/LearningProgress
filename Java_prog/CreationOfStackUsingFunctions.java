import java.util.Stack;
class A
{
static void stackpush(Stack<Integer> stack)
{
for(int i=0;i<10;i++)
{
stack.push(i);
}
System.out.println(stack);
}
static void stackpop(Stack<Integer> stack)
{
Integer y=(Integer)stack.pop();
System.out.println(y);
}

}
class CreationOfStackUsingFunctions
{
public static void main(String args[])
{
Stack<Integer> stack=new Stack<>();
A obj=new A();
A.stackpush(stack);
A.stackpop(stack);
System.out.println(stack);

}
}