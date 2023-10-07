#include<iostream>
using namespace std;
void swap(int array[],int i,int j){
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}
int partion(int array[],int l,int r){
    int pov=array[l];
    int i=l+1;
    int j=r;
    while (i<j){
        while(array[i]<=pov&&i<=r){
                i++;
            }
        while (array[j]>pov&&j>=l){
            j--;
        }
        if (i<j){
                swap(array,i,j);
                }
        else{
                swap(array,l,j);
        }
    }
    return j;
}
void QuickShort(int array[],int l,int r){
    if (l<r)
    {
        int pov=partion(array,l,r);
        QuickShort(array,l,pov-1);
        QuickShort(array,pov+1,r);
    }
}
int main(){
    int array[]={7,4,3,9,5,9,6,9,6};
    QuickShort(array,0,9);
    for(int i=0;i<9;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}
