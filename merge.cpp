#include<iostream>
using namespace std;
mergesort(){
	if(head==null){
		return;
    node*m=middle();
    node*ha=head;
    node*hb=next;
    ha=mergesort(ha);
    hb=mergesort(hb);
    node*nh=merge(ha,hb);
    return nh;
	}
    merge(head a,head b){
    	node*nh;
    	if(head a->data<head b->data){
    		nh=head a;
    		merge(head a->next,head b->next);
		}
		else{
			nh=head b;
			merge(head a,head b->next)
		}
		return nh;
		if(ha=null){
			return hb;
		}
		if(nb=null && )
	}
   }
	
