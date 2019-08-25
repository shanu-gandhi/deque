// author shanu gandhi 25 aug 2019
#include <bits/stdc++.h>
using namespace std;
template <class X> class Deque 
{ 

public :
    Deque() 
    {  
        capacity= 4;
        cursize=0; 
        frontptr = -1; 
        rearptr = -1;
    }
    Deque(int givensize, X x) 
    {
        capacity= 2*givensize;
        cursize=givensize; 
        frontptr = 0; 
        rearptr = givensize-1;
    for(int i =0; i<givensize; i++) { arr[i]=x; }
    
    }
    X front(){
        if(cursize>0)
            return arr[frontptr];
        else
            cout<<"array empty\n";
        return -1;
    }
    X back(){
        if(cursize>0)
            return arr[rearptr];
        else
            cout<<"array empty\n";
        return -1;
    }

    void printall(){
        if((frontptr== rearptr && frontptr==-1)|| cursize==0){
         cout<<"Deque is empty\n";
        cout<<"capacity is "<<capacity<<endl;
             cout<<" frontptr and rearptr is "<<frontptr<<"! "<<rearptr<<endl;
             cout<<"current size is "<<cursize<<endl<<endl; 
        }
        else{
             for(int i =frontptr; i<=rearptr; i++) {
              cout<<arr[i]<<" "; 
            }
             cout<<endl<<"capacity is "<<capacity<<endl;
             cout<<" frontptr and rearptr is "<<frontptr<<"! "<<rearptr<<endl;
             cout<<"current size is "<<cursize<<endl<<endl; 
        }
    } 
    bool isEmpty(){
         if(cursize==0)
             return true;
         return false;
     }
    int dsize(){
        int s=(int)cursize;
        //cout<<"currnt size :"<<cursize<<endl;
        return s;
    }
    void clear(){
        frontptr=-1;
        rearptr=-1;
        cursize=0;
    }
    void push_back(X x){
        if(cursize<capacity){
            if(frontptr==-1){frontptr++;}
            rearptr++;
            arr[rearptr]=x;
            cursize++;
        }
        else if(frontptr==-1 && rearptr==-1 && capacity!=0){
            arr[capacity/2]=x;
            frontptr=capacity/2;
            rearptr=capacity/2;
            cursize++;
        }
        else{
            int newcapacity=capacity*3;
             //cout<<"else:"<<capacity<<" !"<<newcapacity<<endl;
             X *arr2;
             arr2 = new X[newcapacity]; 
            for(int i =0; i<newcapacity; i++) { arr2[i]=0; }
            //cout<<"else2"<<endl;
             for(int i=frontptr;i<=rearptr;i++){
                 arr2[capacity+i]=arr[i];
             }
             frontptr=capacity;
             rearptr=capacity+rearptr;
             arr=arr2;
             capacity=newcapacity;
             
             arr[rearptr+1]=x;
             rearptr++;
             cursize++;
             delete [] arr2;  
                arr2 = NULL; 
            //cout<<"overflow\n";
        }

    }
    void pop_back(){
        if(cursize>=0 && cursize!=2  && cursize!=1 ){
            rearptr=rearptr-1;
            cursize--;
            if(rearptr<frontptr){
                rearptr=-1;
                frontptr=-1;
                cursize=0;
            }
             if(((rearptr- frontptr+1)*3)<capacity){
                int newcapacity=((rearptr- frontptr+1)*3);
                int diff=(rearptr-frontptr);
                X *arr2;
                arr2 = new X[newcapacity]; 
                //for(int i =0; i<newcapacity; i++) { arr2[i]=0; }
                //cout<<"else2"<<endl;
                 int start =(newcapacity/3);
                 for(int i=frontptr, k=0;i<=rearptr;i++,k++){
                     arr2[start+k]=arr[i];
                 }
                 frontptr=start;
                 rearptr=frontptr+diff;
                 arr=arr2;
                 capacity=newcapacity;
                 delete [] arr2;  
                    arr2 = NULL;              
                 //cout<<"front :"<<frontptr<<"rear ;"<<rearptr<<endl;
            }
        }
        else if(cursize==1){
            rearptr=-1;
            frontptr=-1;
            cursize=0;
        }
        else if(cursize==2){
            rearptr=rearptr-1;
            cursize=1;
        }
        else
        {
            cout<<"pop back underflow\n";
        }
    }
     
    void pop_front(){
        if(cursize>0 && cursize!=2 && cursize!=1){
            frontptr=frontptr+1;
            cursize--;
            if(rearptr<frontptr){
                rearptr=-1;
                frontptr=-1;
                cursize=0;
            }

             if(((rearptr- frontptr+1)*3)<capacity){
            int newcapacity=((rearptr- frontptr+1)*3);
            int diff=(rearptr-frontptr);
            X *arr2;
            arr2 = new X[newcapacity]; 
            //for(int i =0; i<newcapacity; i++) { arr2[i]=0; }
            //cout<<"else2"<<endl;
             int start =(newcapacity/3);
             for(int i=frontptr, k=0;i<=rearptr;i++,k++){
                 arr2[start+k]=arr[i];
             }
             frontptr=start;
             rearptr=frontptr+diff;
             arr=arr2;
             capacity=newcapacity;
             delete [] arr2;  
                arr2 = NULL;              
            // cout<<"front :"<<frontptr<<"rear ;"<<rearptr<<endl;
            }

        }
        else if(cursize==2){
                frontptr=frontptr+1;
                cursize=1;
        }
        else if(cursize==1){
                frontptr=-1;
                rearptr=-1;
                cursize=0;
        }
        else{
            cout<<"pop front underflow\n";
        }
    }
    void push_front(int x){
        if(frontptr>0){
            arr[frontptr-1]=x;
            frontptr=frontptr-1;
            cursize++;
        }
        else if(frontptr==-1 && rearptr==-1 && capacity!=0){
            arr[capacity/2]=x;
            frontptr=capacity/2;
            rearptr=capacity/2;
            cursize++;
        }
        else{
             int newcapacity=capacity*3;
             //cout<<"else:"<<capacity<<" !"<<newcapacity<<endl;
             X *arr2;
             arr2 = new X[newcapacity]; 
            for(int i =0; i<newcapacity; i++) { arr2[i]=0; }
            //cout<<"else2"<<endl;
             for(int i=frontptr;i<=rearptr;i++){
                 arr2[capacity+i]=arr[i];
             }
             frontptr=capacity;
             rearptr=capacity+rearptr;
             arr=arr2;
             capacity=newcapacity;
             
             arr[frontptr-1]=x;
             frontptr=frontptr-1;
             cursize++;

             delete [] arr2;  
                arr2 = NULL;              
        }
    }
    void resize(){
        int newcapacity=cursize;
         //cout<<"else:"<<capacity<<" !"<<newcapacity<<endl;
        X *arr2;
        arr2 = new X[newcapacity]; 
        for(int i =0; i<newcapacity; i++) { arr2[i]=0; }
        //cout<<"else2"<<endl;
         for(int i=frontptr, k=0;i<=rearptr;i++,k++){
             arr2[k]=arr[i];
         }
         frontptr=0;
         rearptr=cursize-1;
         arr=arr2;
         capacity=newcapacity;
             delete [] arr2;  
                arr2 = NULL;          
    }
    void resize(int x){
        if(x<cursize){
            rearptr=frontptr+x-1;
            cursize=x;
        }
        if(x>cursize){
            if(x<=capacity){
                //cout<<"here c"<<(capacity-frontptr)<<"x :"<<x<<endl;
                if((capacity-frontptr+1)>=x){
                    //cout<<"here";
                    for(int i=0; i<(cursize-x); i++){
                         arr[rearptr+i+1]=0;
                     }
                     rearptr=rearptr+(x-cursize);
                     cursize=x;
                }
                else{
                    int i,j ;
                    for(i =0 ,j =frontptr;j<=rearptr; i++,j++){
                        arr[i]=arr[j];
                    }
                    for(;j<=capacity; i++,j++){
                        arr[i]=0;
                    }                    
                    frontptr=0;
                    rearptr= x;
                    cursize=x;
                }
            }
            if(x>capacity){
                int newcapacity=3*x;
                 //cout<<"else:"<<capacity<<" !"<<newcapacity<<endl;
                X *arr2;
                arr2 = new X[newcapacity]; 
                for(int i =0; i<newcapacity; i++) { arr2[i]=0; }
                //cout<<"else2"<<endl;
                 for(int i=frontptr, k=(newcapacity/3);i<=rearptr;i++,k++){
                     arr2[k]=arr[i];
                 }
                 frontptr=newcapacity/3;
                 rearptr=frontptr+x-1;
                 arr=arr2;
                 cursize=rearptr-frontptr+1;
                 capacity=newcapacity;
                     delete [] arr2;  
                        arr2 = NULL;
            }
        }
    }
    void resize2(){
        if(((rearptr- frontptr+1)*3)<capacity){
            int newcapacity=((rearptr- frontptr+1)*3);
            int diff=(rearptr-frontptr);
            X *arr2;
            arr2 = new X[newcapacity]; 
            //for(int i =0; i<newcapacity; i++) { arr2[i]=0; }
            //cout<<"else2"<<endl;
             int start =(newcapacity/3);
             for(int i=frontptr, k=0;i<=rearptr;i++,k++){
                 arr2[start+k]=arr[i];
             }
             frontptr=start;
             rearptr=frontptr+diff;
             arr=arr2;
             capacity=newcapacity;
             delete [] arr2;  
                arr2 = NULL;              
            // cout<<"front :"<<frontptr<<"rear ;"<<rearptr<<endl;
        }
    }
    X operator[](int index) 
    { 
        if (index >= (rearptr-frontptr+1)) 
        { 
            cout << "Array index out of bound!!!"; 
            exit(0); 
        } 
        return arr[frontptr+index]; 
    }
    X at(int x){
        //cout<<rearptr-frontptr+1-x<<endl;
        if((rearptr-frontptr+1-x)>0){
            return arr[frontptr+x];
        }
        else{
            cout<<"list small"<<endl;
        }
    }

    int  frontptr; 
    int  rearptr; 
    int  capacity; 
    int  cursize;
    X *arr;

}; 
