#include<bits/stdc++.h>
using namespace std;

void solve(string ss){
	int l = ss.size();
	char curl[l], square[l], moon[l];
	int c=-1, s=-1, m=-1;

	int i=0;
	while(i<l){
		if(ss[i] == '(' || ss[i] == '[' || ss[i] == '{'){
			if(ss[i] == '{'){
				c++;
				curl[c] = '{';
			}
			else if(ss[i] == '['){
				s++;
				square[s] = '[';
			}
			else{
				m++;
				moon[m] = '(';
			}
		}
		else{
			if(ss[i] == '}'){
                                c--;
                                //curl[c] = '{';
                        }
                        else if(ss[i] == ']'){
                                s--;
                                //square[s] = '[';
                        }
                        else{
                                m--;
                        }
		}

		i++;
	}

	if(c==-1 && s==-1 && m==-1){
		cout<<"balanced\n";
	}
	else{
		//cout<<"c = "<<c<<"s = "<<s<<"m = "<<m<<endl; 
		cout << "not balanced\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		string ss ;cin >> ss;
		solve(ss);
	}
}
