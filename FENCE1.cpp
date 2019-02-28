//#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

//float round1(float var) 
//{ 
//    char str[40];
//    sprintf(str, "%.2f", var); 
//    sscanf(str, "%f", &var);  
//    return var;  
//}

int main() 
{ 
	int l;
	float ans,pi=3.14159;
  	while(1==1)
  	{
  		cin>>l;
  		if(l==0)
  			return 0;
  		ans=(l*l)/(2*pi);
//  		some_stream << std::fixed << std::setprecision( 2 );
//  		some_stream << ans << endl;
//		cout<<std::floor((ans * 100) + .5) / 100<<endl;
//  		cout<<round1(ans)<<endl;
		cout<<std::fixed<<std::setprecision(2)<<ans<<endl;
	}
}
