#include <stdlib.h>
#include <stdio.h>


int lchild(int x){
  return 2 * x + 1;
}

int rchild(int x){
  return 2 * x + 2;
}

int parent(int x){
  int y = x/2;
  printf("%i\n\n", y);
  return y;
}


int main (int argc, char *argv[]){
  int heapItems = 0;
  int heapSize = 16;
  int minHeap[heapSize];
  
  int upHeap(int x){ //TODO build upHeap
    if(x == 1) {
      return 0; // if we are at the root, stop
    }
    
    if(minHeap[parent(x)] <= minHeap[x]) {
      return 0; //already satisfy heap-invariant for min-heap
    }
      
    // swap x and parent(x)
    int temp = minHeap[x];
    minHeap[x] = minHeap[parent(x)];
    minHeap[parent(x)] = temp;
    
    upHeap(parent(x));
  
    return 0;
  }
  
  int add(int value){
    if( heapItems == 0) { // We're empty
      minHeap[1] = value;
      ++heapItems;
      return 0;
    }
    if( (heapItems + 1) == heapSize ) { // We're full
      //TODO grow array
    }
  
    // default case, add to end and upheap
    ++heapItems;
    minHeap[heapItems] = value;
    upHeap(heapItems);
    return 0;
  }
  
  add(33);
  add(27);

  printf("[");
  int i = 1;
  for(; i <= heapItems; ++i) {
    printf("%d, ", minHeap[i]);
  }
  printf("]\n\n");

  exit(0);
}