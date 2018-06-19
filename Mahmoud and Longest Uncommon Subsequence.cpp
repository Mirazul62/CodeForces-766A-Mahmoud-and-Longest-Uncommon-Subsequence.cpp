#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    long long int l1,l2,i,j=0,k,count;
    string s,p;
    cin>>s;
    cin>>p;
    l1=s.length();
    l2=p.length();
    if(l1<=l2)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]==p[j])
            {
                for(k=i,j=0; s[k] && p[j]; k++,j++)
                    if(s[k]!=p[j])
                        break;
                if(!p[j])
                {
                    cout<<"-1";
                    return 0;
                }

            }
            cout<<max(l1,l2);
            break;

        }
    }
    else
    {
        for(i=0;p[i]!='\0';i++)
        {
            if(p[i]==s[j])
            {
                for(k=i,j=0;p[k] &&s[j];k++,j++)
                {
                    if(p[k]!=s[j])
                        break;
                    if(!s[j])
                    {
                        cout<<"-1";
                        return 0;
                    }
                }
            }
            cout<<max(l1,l2);
            break;
        }
    }

}
