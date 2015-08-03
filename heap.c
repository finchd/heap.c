#include <math.h>

int heapItems = 0;
int heapSize = 2;
int minHeap[heapSize];

int lchild(int x){
  return 2 * x + 1;
}

int rchild(int x){
  return 2 * x + 2;
}

int parent(int x){
  return floor(x / 2);
}

int upHeap(int x){ //TODO build upHeap
  return 0;
}

int main (int argc, char *argv[]){
  heapItems = 0;
  heapSize = 2;

  exit(0);
}

int add(int value){
  if( heapItems == 0) { // We're empty
    minHeap[1] = value;
    return 0;
  }
  if( (heapItems + 1) == heapSize ) { // We're full
    //TODO
    return 0;
  }

  // default case, add to end and upheap
  ++heapItems;
  minHeap[heapItems] = value;
  upHeap(heapItems);
  return 0;
}