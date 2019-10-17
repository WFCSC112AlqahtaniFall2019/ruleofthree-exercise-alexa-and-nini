// Created by Nini de la Fe on 10/17/19.

#include <iostream>
#include "IntList.h"
using namespace std;

//Constructor
IntList::IntList ( int size  , int initvalue) {
    cout<<"Constructor called"<<endl;
    if( size > 0){
        list_ = new int[size];
        size_ = size ;
        for( int i = 0; i < size_ ; i ++)
            list_ [i] = initvalue ;
    }
    else {
        list_ = 0;
        size_ = 0;
    }
}
void IntList::print(IntList L2) {
    for (int i = 0; i < size_; ++i) {
        cout << L2.list_[i]<< " ";
    }
    cout<<endl;
}

//1) write a definition for the destructor
IntList::~IntList() {
    cout<<"Destructor called"<<endl;
    delete [ ]list_;
}


//2) fix the copy constructor
IntList :: IntList ( const IntList & L ){
    cout<<"Copy Constructor called"<<endl;
    for (int i=0; i<L.size_;i++) {
        cout<<"for loop ran"<<endl;
        list_ = new int[L.size_];
        *list_ = *(L.list_);
        //   list_ = L.list_ ;
        size_ = L.size_;
    }
}

//3) rewrite the copy assignment operator using an optimized method
IntList& IntList:: operator =( const IntList & rhs ){
    cout<<"Assignment op called"<<endl;
    IntList temp(rhs);
    if (this != &rhs){
        delete list_;
        list_= new int [rhs.size_];
        *list_=*(rhs.list_);
    }

    return *this;
}


/* swap(*this,rhs);

    if( list_ )
        delete [] list_ ;
    size_ = rhs . size_ ;
    if( rhs . size_ > 0){
        list_ = new int [ rhs . size_ ];
        for ( int i = 0; i < rhs . size_ ; i ++)
            list_ [ i ] = rhs . list_ [ i ];
    }
    else
        list_ = 0;
*/

/*
IntList void swap (IntList& L1, IntList& L2){
    int temp= *L1;
    *L1=*L2;

    swap(L1,L2);
}*/