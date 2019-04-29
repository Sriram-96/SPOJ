#include <iostream>

using namespace std;

int main(void)
{
    int tc;
    int flag=1;
    long long num1,num2,ans,count;
    char op;

    cin>>tc;
   
     while(tc--)
    {
        flag=1;
        count=0;
        while(flag) //flag checks if '=' is encountered
        {
        count++;
        if(count==1) //count determines if the expression is starting or we are in  middle of the expression to be solved
        {
        //get the expression
        cin>>num1;
        }
        else
        num1=ans;
        
        op=' '; //as expression contains many spaces this is where we avoid spaces
        while(op == ' ')
            cin>>op;
        if(op=='=')
        {
            cout<<ans<<"\n";
            flag=0;
        }
        else
            cin>>num2;
        
        switch(op)
        {
            case  '+' : ans=num1+num2;
                    break;
            case  '-' : ans=num1-num2;
                    break;
            case  '*' : ans=num1*num2;
                    break;
            case  '/' : ans=num1/num2;
                    break;
            default : break;
        }
        
        
        }//while
    }
        return 0;
        
}   
