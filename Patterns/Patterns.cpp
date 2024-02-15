#include <iostream>
#include<conio.h>

using namespace std;

void pattern10 (int row, int col, int n){

  for (int row = 1; row <= 2 * n - 1; row++) {
    if (row <= n) { 
      for (int col = 1; col <= row; col++) {
        cout << "*";
      }
      cout<<endl;
    } else{  
      for (int col = 1; col <= 2 * n - row; col++) {
        cout << "*";
      }
      cout<<endl;
    }
  }
}
void pattern11 (int row, int col, int n){
    int start=1;
    for(row=0; row<n; row++){
        if(row%2==0)
            start=1;
        else
            start=0;

        for(col=0; col<=row; col++){
            cout << start ;

            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12 (int row,int col,int n){
    for(int row=1; row<=n; row++){
        for(int col=1;col<=2*n && col<=row ; col++){
            cout<<col;
        }
        for(int col=1; col<=2*n-2*row ; col++){
            cout<<" ";
        }
        for(int col=row; col>=1 ; col--){
            cout<<col;
        }

        
        cout<<endl;
    }
}
void pattern13 (int row, int col, int n){
    int count=0;
    for(int row=1; row<=n; row++){
        for(col=1; col<=row ; col++){
            cout<<++count;
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern14 (int row, int col, int n){
    char ch='A';
    for(int row=1; row<=n; row++){
        for(col=1; col<=row ; col++){
            cout<<ch++;
            cout<<" ";
        }
        cout<<endl;
        ch='A';
    }
}
void pattern15 (int row, int col, int n){
    char ch='A';
    for(int row=1; row<=n; row++){
        for(col=n; col>=row; col--){
            cout<<ch++;
        }
        cout<<endl;
        ch='A';
    }
}
void pattern16 (int row, int col, int n){
    char ch='A';
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}
void pattern17 (int row, int col, int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }

        char ch='A';
        for(int col=0; col<2*row+1; col++){
            cout<<ch;
            if(col<(2*row+1)/2)
                ch++;
            else
               ch--;
        }

        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18 (int row,int col, int n){

    //char ch='A';
    for(int row=0; row<n; row++){
        for(char ch =('A'+n-1);ch>=('A'+n-1)-row;--ch){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern19 (int row, int col, int n){
    int sp=0;
    for(int row=0; row<n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<"*";
        }

        for(int col=1; col<=sp; col++){
            cout<<" ";
        }

        for(int col=1; col<=n-row; col++){
            cout<<"*";
        }
        cout<<endl;
        sp+=2;
    }

    sp=2*n-2;
    for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            cout<<"*";
        }
        for(int col=0; col<sp; col++){
            cout<<" ";
        }
        for(int col=0; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
        sp-=2;
    }
}
void pattern20 (int row, int col, int n){
    int sp=(2*n)-2;
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        for(int col=0; col<=sp; col++){
            cout<<" ";
        }
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
        sp-=2;
    }
    sp=0;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        for(int col=0; col<=sp; col++){
            cout<<" ";
        }
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
        sp+=2;
    }
}
void pattern21(int row,int col, int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(row==1 || col==1 || row==n || col==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
}
void pattern22(int row, int col, int n){
    for(int row=0; row<2*n - 1; row++){
        for(int col=0; col<2*n - 1; col++){
            int top=row;
            int left=col;
            int right=((2*n)-2)-col;
            int bottom=((2*n)-2)-row;
            cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}

int main()
{
  int row,col,n;
  n=3;
  //pattern10(row,col,n);
  //pattern11(row,col,n);
  //pattern12(row,col,n);
  //pattern13(row,col,n);
  //pattern14(row,col,n);
  //pattern15(row,col,n);
  //pattern16(row,col,n);
  //pattern17(row,col,n);
  //pattern18(row,col,n);
  //pattern19(row,col,n);
  //pattern20(row,col,n);
  //pattern21(row,col,n);
  //pattern22(row,col,n);
  return 0;
}