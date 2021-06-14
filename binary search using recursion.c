#include<stdio.h>
int binary(int a[],int n,int m,int f,int l){
		int mid,c = 0;
		if(f<=l){
			mid = (f+l)/2;
			if(m == a[mid]){
				c = 1;
			}else if(m<a[mid]){
				return binary(a,n,m,f,mid-1);
			}else{
				return binary(a,n,m,mid+1,l);
			}
		}
		return c;
	}
void main(){
	int n,i,a[10],m,c,f,l;
	printf("\nEnter the size of an array: ");
	scanf("%d",&n);
	printf("\nEnter the element of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the element to be search: ");
	scanf("%d",&m);
	f=0,l=n-1;
	c = binary(a,n,m,f,l);
	if(c==0){
		printf("Number is not found.");
	}else{
		printf("Number is found.");
	}
	
	
}
