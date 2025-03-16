void insert(int A[], int n){
    int temp , i=n;
    temp = A[n];
    while(i>1 && temp>A[i/2]){
        A[i] = A[i/2] ;
        i = i/2;       
    }
    A[i] = temp;
}

void createHeap(){
    int A[] = {0,10,20,30,25,5,40,35};
    int i;
    for(i=2, i<=7; i++){
        insert(A,i);
    }
}