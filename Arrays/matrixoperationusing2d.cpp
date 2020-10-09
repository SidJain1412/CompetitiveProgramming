//Operations on matrix using 2-D array
//standred run should look like this
/* For First Matrix :
 enter row :2

 enter column :2
Enter element a11 : 1
Enter element a12 : 2
Enter element a21 : 3
Enter element a22 : 4

 For Second Matrix :
 enter row :2

 enter column :2
Enter element a11 : 1
Enter element a12 : 2
Enter element a21 : 3
Enter element a22 : 4


 Matrix is: 
1  2  
3  4  


 Matrix is: 
1  2  
3  4  

Matrix of Sum of two matrix is: 


 Matrix is: 
2  4  
6  8  

Matrix of Substraction of two matrix is: 


 Matrix is: 
0  0  
0  0  

Matrix of Multiplication of two matrix is: 


 Matrix is: 
7  10  
15  22  

Transpose of matrix is: 


 Matrix is: 
1  3  
2  4
*/ 

#include <iostream>

using namespace std;

class Matrix{
    int row;
    int column;
    int m[5][5];
    public:
    Matrix(){
      column=row=0;
      int m[0][0];
    };
    Matrix(int,int);
    Matrix(Matrix &x);
    void displaydata(Matrix);
    void add(Matrix,Matrix);
    void sub(Matrix,Matrix);
    void mul(Matrix, Matrix);
    void trns(Matrix);
    ~Matrix(){

    }
};


Matrix::Matrix(int tempr,int tempc)
{
    row=tempr;
    column=tempc;
    for(int i = 0; i < row; ++i)
       for(int j = 0; j < column; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> m[i][j];
       }
}

Matrix::Matrix(Matrix &x){
  row=x.row;
  column=x.column;
  for(int i = 0; i < row; ++i)
       for(int j = 0; j < column; ++j)
       {
           m[i][j] = x.m[i][j];
       }
}

void Matrix::displaydata(Matrix x)
{
  cout << endl << "\n Matrix is: " << endl;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < column; ++j)
        {
            cout << m[i][j] << "  ";
            if(j == column - 1)
                cout << endl;
        }
}

void Matrix::add(Matrix x, Matrix y)
{
  if(x.row==y.row && x.column==y.column)
  {
  int i,j;
  row=x.row;
  column=y.column;
    for(i = 0; i < row; ++i)
        for(j = 0; j < column; ++j)
            m[i][j] = x.m[i][j] + y.m[i][j];

  }
  else{
    cout<<"\n Matrix are not homogeneous ";
  }    
}

void Matrix::sub(Matrix x, Matrix y)
{
  if(x.row==y.row && x.column==y.column)
  {
  int i,j;
  row=x.row;
  column=y.column;
    for(i = 0; i < row; ++i)
        for(j = 0; j < column; ++j)
            m[i][j] = x.m[i][j] - y.m[i][j];

  }
  else{
    cout<<"\n Matrix are not homogeneous ";
  }    
}

void Matrix::mul(Matrix x, Matrix y)
{
  if(x.column==y.row){
  column=y.column;
  row=x.row;
  int i,j,k;
  for (i = 0; i < x.row; i++)
      {
        for (j = 0; j < y.column; j++)
          {
            m[i][j]=0;  //just a minute sir
            for (k = 0; k < x.column; k++)
              {
                m[i][j] += x.m[i][k] * y.m[k][j];
              }
          }
        }
  }    
  else{
    cout<<"\n Matrix Multiplication couldn't be done  ";
  }    
}

void Matrix::trns(Matrix x)
{
  row=x.column;
  column=x.row;
  for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         m[j][i] = x.m[i][j];
      }
}


int main(){
  int r1,r2,c1,c2;
    cout<<"\n For First Matrix :";
    cout<<"\n enter row :";
    cin>>r1;
    cout<<"\n enter column :";
    cin>>c1;
    Matrix m1(r1,c1);

    cout<<"\n For Second Matrix :";
    cout<<"\n enter row :";
    cin>>r2;
    cout<<"\n enter column :";
    cin>>c2;
    Matrix m2(r2,c2);

    m1.displaydata(m1);
    m2.displaydata(m2);

    Matrix m4;
    m4.add(m1, m2);
    cout << endl << "Matrix of Sum of two matrix is: " << endl;
    m4.displaydata(m4);

    Matrix m5;
    m5.sub(m1, m2);
    cout << endl << "Matrix of Substraction of two matrix is: " << endl;
    m5.displaydata(m5);

    Matrix m6;
    m6.mul(m1, m2);
    cout << endl << "Matrix of Multiplication of two matrix is: " << endl;
    m6.displaydata(m5);

    Matrix m7;
    m7.trns(m1);
    cout << endl << "Transpose of matrix is: " << endl;
    m7.displaydata(m6);
}





