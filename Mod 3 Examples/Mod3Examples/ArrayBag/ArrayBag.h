//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Header file for an array-based implementation of the ADT bag.
 @file ArrayBag.h */

#ifndef _ARRAY_BAG
#define _ARRAY_BAG

#include "BagInterface.h"

template<class ItemType>
class ArrayBag : public BagInterface<ItemType>
{
private:
	static const int DEFAULT_CAPACITY = 20; // Changed size from 6 to 20 to test new methods
	ItemType items[DEFAULT_CAPACITY];      // Array of bag items
   int itemCount;                         // Current count of bag items 
   int maxItems;                          // Max capacity of the bag
   
   // Returns either the index of the element in the array items that
   // contains the given target or -1, if the array does not contain 
   // the target.
   int getIndexOf(const ItemType& target) const;   

public:
	ArrayBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType& newEntry);
	bool remove(const ItemType& anEntry);
	void clear();
	bool contains(const ItemType& anEntry) const;
	int getFrequencyOf(const ItemType& anEntry) const;
   vector<ItemType> toVector() const;
	//Lab 3-1
	/* Design and specify a method union for the ArrayBag that returns as a new bag the union 
	of the bag receiving the call to the method and the bag that is the method's parameter. 
	*/
	ArrayBag<ItemType> bagUnion(const ArrayBag& input) const; 
	ArrayBag<ItemType> intersect(const ArrayBag& input) const; 
	ArrayBag<ItemType> difference(const ArrayBag& input) const; 
}; // end ArrayBag

#include "ArrayBag.cpp"
#endif
