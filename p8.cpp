#inlcude<iostream>
int main()
{
    int a[8][8],b[8][8];
    cout<<"enter the rows and colums of frist matrix"<<endl;
    cin>>r1>>c1;
    cout<<"enter the rows and colums of second matrix matrix"<<endl;
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"the operation cannot be sucessful";
        return 0;
    }
    else {
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin<<a[i][j];
        }
    }
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin<<b[i][j];
        }
    }
   
      for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            int mul[i][j]=0;
            for(int k =0;k<c1;k++)
            {
                    mul[i][j] + =a[i][j]*b[i][j];
            }
        }
    }
   
   
   
    }

}