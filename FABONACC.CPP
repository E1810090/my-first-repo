//Project:-Fibonacci series
//Gunvant Patil FYE263

#include<iostream.h>
#include<conio.h>

class fibonacci
{
 int x,y,z,n;
 public:
 void input ();
 void display();
 void pro();
};

void fibonacci::input()
{
 cout<<"Enter the number of terms required:";
 cin>>n;
}

void fibonacci::display()
{
 x=0;
 y=1;
 cout<<x<<" "<<y<<" ";
}

void fibonacci::pro()
{
 for(int i=1;i<=n-2;i++)
  {
   z=x+y;
   cout<<z<<" ";
   x=y;
   y=z;
  }
}

void main ()
{
 clrscr();
 fibonacci series;
 series.input();
 series.display();
 series.pro();
 getch();
}

/* OUTPUT
Enter the number of terms required:10
0 1 1 2 3 5 8 13 21 34
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


