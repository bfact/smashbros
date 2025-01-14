//
//  Heap.cpp
//  SmashBros
//
//  Created by Sean Wenzel on 2/15/16.
//  Copyright © 2016 Sean Wenzel. All rights reserved.
//

#include "Heap.h"
/*
Heap::Heap()
{
    queue = new std::priority_queue<VertexPair*, std::vector<VertexPair*>, VertexPair::Compare >();
}

VertexPair* Heap::GetMin() {
    return queue->top();
}
void Heap::insert(VertexPair* newPair) {
    if (newPair->a->valid != true || newPair->b->valid != true) {
        return;
    }
    queue->push(newPair);
}

void Heap::DeleteMin() {
    queue->pop();
}

int Heap::size() {
    return (int)queue->size();
} */

/*
Heap::Heap(vector<VertexPair*>* vector) : heapVector(vector)
{
    Heapify();
}

Heap::Heap()
{
    heapVector = new vector<VertexPair*>();
}

void Heap::Heapify()
{
    int length = (int) heapVector->size();
    for(int i=length-1; i>=0; --i)
    {
        BubbleDown(i);
    }
}

void Heap::BubbleDown(int index)
{
    int length = (int) heapVector->size();
    int leftChildIndex = 2*index + 1;
    int rightChildIndex = 2*index + 2;
    
    if(leftChildIndex >= length)
        return; //index is a leaf
    
    int minIndex = index;
    
    if(*((*heapVector)[index]) > *((*heapVector)[leftChildIndex]))
    {
        minIndex = leftChildIndex;
    }
    
    if((rightChildIndex < length) && (*((*heapVector)[minIndex]) > *((*heapVector)[rightChildIndex])))
    {
        minIndex = rightChildIndex;
    }
    
    if(minIndex != index)
    {
        //need to swap
        VertexPair* temp = (*heapVector)[index];
        (*heapVector)[index] = (*heapVector)[minIndex];
        (*heapVector)[minIndex] = temp;
        BubbleDown(minIndex);
    }
}

void Heap::BubbleUp(int index)
{
    if(index == 0)
        return;
    
    int parentIndex = (index-1)/2;
    
    if(*((*heapVector)[parentIndex]) > *((*heapVector)[index]))
    {
        VertexPair* temp = (*heapVector)[parentIndex];
        (*heapVector)[parentIndex] = (*heapVector)[index];
        (*heapVector)[index] = temp;
        BubbleUp(parentIndex);
    }
}

void Heap::insert(VertexPair* newPair)
{
    //std::cerr << "Adding pair" << std::endl;
    if (newPair->a->valid != true || newPair->b->valid != true) {
        return;
    }
    
    int length = (int) heapVector->size();
    //(*heapVector)[length] = newPair;
    heapVector->push_back(newPair);
    
    BubbleUp(length);
}

VertexPair* Heap::GetMin()
{
    Heapify();
    return (*heapVector)[0];
}

void Heap::DeleteMin()
{
    int length = (int) heapVector->size();
    
    if(length == 0)
    {
        return;
    }
    
    (*heapVector)[0] = (*heapVector)[length-1];
    heapVector->pop_back();
    
    BubbleDown(0);
}

int Heap::size() {
    return (int) heapVector->size();
}

VertexPair* Heap::at(int index) {
    return heapVector->at(index);
}

void Heap::updateHeap(VertexPair* collapsedPair, Vertex* midVert) {
    // Convert to a set to remove duplicates
    std::unordered_set<VertexPair*> s;
    unsigned int size = heapVector->size();
    for( unsigned int i = 0; i < size; ++i ) {
        
 
        
        if (((*heapVector)[i]->a != (*heapVector)[i]->b) && ((*heapVector)[i]->a->valid == true) && ((*heapVector)[i]->b->valid == true)) {
            s.insert( (*heapVector)[i] );
        }
        
        
    }
    heapVector->assign( s.begin(), s.end() );
    //Heapify();
} */