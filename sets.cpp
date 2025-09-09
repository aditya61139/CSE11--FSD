#include<iostream>
#include<vector>
using namespace std;
void traverse(vector<int>&C)
{
    for(auto i : C)
    {
        cout<<i<<" ";
    }
}
void merge(vector<int>&A,int m,vector<int>&B,int n) 
{
    int i=0,j=0;
    vector<int>C;
    while(i<m&&j<n)
    {
        if(A[i]<=B[j])
        {
            C.push_back(A[i]);
            i++;
        }
        else
        {
            C.push_back(B[j]);
            j++;
        }
    }
    while(i<m)
    {
        C.push_back(A[i]);
        i++;
    }
    while(j<n)
    {
        C.push_back(B[j]);
        j++;
    }
    traverse(C);
}
int main()
{
    
    int m,n;
    cout<<"Enter the size of Array 1 : ";
    cin >> m;
    cout<<"Enter values of Array 1 : \n";
    vector<int>A(m);
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the size of Array 2 : ";
    cin>>n;
    cout<<"Enter values of Array 2 : \n";
    vector<int>B(n);
    for(int i=0;i<n;i++)
    {   
        cin>>B[i];
    }
    merge(A,m,B,n);
    return 0;
}