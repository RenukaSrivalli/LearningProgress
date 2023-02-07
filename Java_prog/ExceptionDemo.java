class Hi
{
        void fun()
        {
                System.out.println("learning github");
        }
}
class ExceptionDemo
{
        public static void main(String args[])
        {
                try
                {
				Hi obj=new Hi();
                        obj.fun();
                }
                catch(Exception e)
                {
                        System.out.println("Exception occured");
                }
        }
}
