# Objectives for Topic: Sets, Maps and Hash Tables

* Introduction to the set and map data types
* To implement the set and map classes of the C++ standard library
* To implement a hash table and understand the efficiency of its operations

(Sets)[./sets]
(Maps)[./maps]
(Hash Table)[./hash_table]

# Topic Summary

## Describe the set data type and its implementation in the C++ library.
*A set is an unordered collection of distinct elements.
*Sets don’t have duplicates. Adding a duplicate of an element that is already present is ignored.
*Unordered sets are usually more efficient than ordered sets.
*An iterator of an unordered_set visits elements in seemingly random order.
*An iterator of an ordered set visits elements in increasing order.

## Describe the map data type and its implementation in the C++ library.
*A map keeps associations between key and value objects.
*A map iterator yields key/value pairs. If the map is ordered, they are visited in increasing key order.
*A multiset (or bag) is similar to a set, but elements can occur multiple times.
*A multimap can have multiple values associated with the same key.

## Understand the implementation of a hash table and the efficiencies of its operations.
*A hash function computes an integer value from an object.
*A good hash function minimizes collisions—identical hash codes for different objects.
*A hash table uses the hash code to determine where to store each element.
*A hash table can be implemented as an array of buckets—sequences of nodes that hold elements with the same hash code.
*If there are no or only a few collisions, then adding, locating, and removing hash table elements takes constant or
O(1) time.
*Overload hash<T>::operator() by combining the hash codes for the data members.
*A class’s hash function must be compatible with its equality operator.
