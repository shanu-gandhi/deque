#include <bits/stdc++.h>
#include "Deque.h"
using namespace std;
int main()
{
	Deque q= Deque();
	//q.printall();
    // if(q.isEmpty()) cout<<"que empt"<<endl;
    // else cout<<"not empty";
    int x=q.dsize();
    cout<<"size function:"<<x<<endl;
    
      q.push_back(9);q.printall();
      q.push_back(8);q.printall();
      q.push_back(7);q.printall();
      q.push_back(6);
      //q.push_back(5);
     //q.printall();
     //q.pop_back();
     //q.pop_back();
     //q.pop_back();
     //q.pop_back();
    
    q.printall();
    // x=q.dsize();
    // cout<<"size function:"<<x<<endl;
    //q.pop_front();
    q.push_back(1);q.printall();
    q.push_back(2);q.printall();
    q.push_front(3);q.printall();
    q.push_front(4);
    q.printall();
    // q.clear();
    // cout<<"after clear"<<endl;
    //q.printall();
    //q.push_front(3);
    q.pop_back();q.printall();
    q.pop_back();q.printall();
    q.pop_back();q.printall();
    q.pop_back();q.printall();
    q.pop_back();q.printall();
    q.pop_back();q.printall();
    q.pop_back();q.printall();
    q.pop_back();
    q.printall();
    q.push_front(4);q.printall();
    q.push_front(9);
    //x=q.dsize();
    q.printall();
    q.push_front(7);
    q.printall();
    //cout<<"size function:"<<x<<endl;
    // if(q.isEmpty()) cout<<"que empt"<<endl;
    // else cout<<"not empty";
      //  cout<<q.front()<<endl;
    //cout<<q.back()<<endl;
     //cout<<"is empty :"<<q.isEmpty()<<endl;
     //cout<<"size :"<<q.size()<<endl;
    // cout<<"clear :"<<q.clear()<<endl;
    // q.printall();
//q.resize2();
//q.printall();
    q.push_front(14);q.printall();
    q.push_front(19);
    //x=q.dsize();
    q.printall();
    //cout<<"size function:"<<x<<endl;
    q.push_front(18);
    //x=q.dsize();
    q.printall();
    q.push_front(13);
    q.printall();

    
 //    q.at(0);
 //    cout<<"1st :"<<endl;
	// q.at(1);
    x=q[0];
     cout<<"1st :"<<x<<endl;
     x=q[1];
     cout<<"2st :"<<x<<endl;
     x=q[2];
     cout<<"1st :"<<x<<endl;
     // x=q[7];
     // cout<<"7th :"<<x<<endl;
     x=q[5];
     cout<<"5th :"<<x<<endl;
 //    q.at(2);
 //    cout<<"3st :"<<endl;
 //    q.at(3);
 //    cout<<"4st :"<<endl;
 //    q.at(3);
 //    cout<<"5st :"<<endl;
    // cout<<"3st :"<<q.at(2)<<endl;
    // cout<<"4st :"<<q.at(3)<<endl;
    // cout<<"5st :"<<q.at(4)<<endl;
    return 0;
}
