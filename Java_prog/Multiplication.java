import java.util.Scanner;
class Multiplication
{
 public static void main(String args[])
{
int i,j;
Scanner sc=new Scanner(System.in);
System.out.println("Enter row size of matrix 1");
int r1=sc.nextInt();
System.out.println("Enter column size of matrix 1");
int c1=sc.nextInt();
int mat1[][]=new int[r1][c1];
System.out.println("Enter elements of matrix1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
mat1[i][j]=sc.nextInt();
}
}
System.out.println("Enter row size of matrix 2");
int r2=sc.nextInt();
System.out.println("Enter column size of matrix 2");
int c2=sc.nextInt();
int mat2[][]=new int[r2][c2];

System.out.println("Enter elements of matrix2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
mat2[i][j]=sc.nextInt();
}
}
int res[][]=new int[r1][c2];
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
res[i][j]=0;
for(int k=0;k<c1;k++)
{
res[i][j]=res[i][j]+mat1[i][k]*mat2[k][j];
}
}
}
System.out.println("Matrix Multiplication");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{

System.out.print(res[i][j]+" ");
}
System.out.println("");
}
}
}