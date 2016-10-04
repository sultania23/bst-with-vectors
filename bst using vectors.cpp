#include<bits/stdc++.h>
#include<vector>
using namespace std;
long long int c;
struct bst
{
    long long int d;
    long long int left;
    long long int right;
};
void createnode(vector<struct bst> &v1,long long int data)
{
    struct bst b1 = {data,-1,-1};
    v1.push_back(b1);
}
void setleft(vector <struct bst> &v1,long long int c_index,long long int data)
{
    long long int leftindex = v1.size();
    v1[c_index].left = leftindex;
    struct bst b1 = {data,-1,-1};
    v1.push_back(b1);
}
void setright(vector<struct bst> &v1,long long int c_index,long long int data)
{
    long long int rightindex = v1.size();
    v1[c_index].right = rightindex;
    struct bst b1 = {data,-1,-1};
    v1.push_back(b1);
}
void insertnode(vector<struct bst> &v1,long long int data)
{
    if(v1.size()==0)
    {
        createnode(v1,data);
        return;
    }
    long long int c_index=0;
    while(c_index<v1.size())
    {
       if(data<v1[c_index].d)
       {
           c++;
           if(v1[c_index].left == -1)
           {
               setleft(v1,c_index,data);
               break;
           }
           else
            c_index= v1[c_index].left;
       }
       else
       {
           c++;
           if(v1[c_index].right==-1)
           {
               setright(v1,c_index,data);
               break;
           }
           else
            c_index = v1[c_index].right;
       }
    }
}
//void io(vector <struct bst> &v1, unsigned int index)
//{
  //  if(v1[index].left!=-1)
    //    io(v1,v1[index].left);
    //cout<<v1[index].d<<endl;
    //if(v1[index].right!=-1)
      //  io(v1,v1[index].right);
//}
int main()
{
    vector<struct bst> v1;
    long long int n,x;
    scanf("%lld",&n);
    c=0;
    while(n--)
    {
        scanf("%lld",&x);
        insertnode(v1,x);
        printf("%lld\n",c);
    }
   //io(v1,0);
   return 0;
}
