//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** ADT bag: Link-based implementation.
    @file LinkedBag.h 
    Listing 4-3 */
#ifndef _LINKED_BAG
#define _LINKED_BAG

#include "BagInterface.h"
#include "Node.h"

template<class ItemType>
class LinkedBag : public BagInterface<ItemType>
{
private:
   Node<ItemType>* headPtr; // Pointer to first node
   int itemCount;           // Current count of bag items
   
   // Returns either a pointer to the node containing a given entry
   // or the null pointer if the entry is not in the bag.
   Node<ItemType>* getPointerTo(const ItemType& target) const;
   
public:
   LinkedBag();
   LinkedBag(const LinkedBag<ItemType>& aBag); // Copy constructor
   virtual ~LinkedBag();                       // Destructor should be virtual
   int getCurrentSize() const;
   bool isEmpty() const;
   bool add(const ItemType& newEntry);
   bool remove(const ItemType& anEntry);
   void clear();
   bool contains(const ItemType& anEntry) const;
   int getFrequencyOf(const ItemType& anEntry) const;
   vector<ItemType> toVector() const;
	LinkedBag<ItemType>bagUnion(const LinkedBag& input) const; // Lab 4-1
	LinkedBag<ItemType> intersect(const LinkedBag& input) const;  //Lab 4-2
	LinkedBag<ItemType> trueIntersect(const LinkedBag& input) const;
	LinkedBag<ItemType> difference(const LinkedBag& input) const; // Lab 4-3
	LinkedBag<ItemType> trueDifference(const LinkedBag& input) const;
}; // end LinkedBag

#include "LinkedBag.cpp"
#endif