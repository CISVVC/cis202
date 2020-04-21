# Sets

Remember arrays, vectors and linked lists are data structures that preserve the order of the elements that are added to
them.  Data structures are often used to store data that can be efficiently searched.  The order in which the data items 
are stored will often determine the efficiency of the search method.  There is a trade off between the "speed" of
finding an item and the space that is required for the storage of the items and the methods which are used for
searching, sorting, modifying and deleting the items.

Arrays, vectors, and linked lists have one characteristic in common: These data structures keep the elements in the same
order in which you inserted them. However, in many applications, you don’t really care about the order of the elements
in a collection. You can then make a very useful tradeoff: Instead of keeping elements in order, you can find them
quickly.

Sometimes it is necessary to preserve the order for a use case, and other times it isn't.


A set is an unordered collection of distinct elements.

In mathematics and computer science, an unordered collection of distinct items is called a set. As a typical example,
consider a print server: a computer that has access to multiple printers. The server may keep a collection of objects
representing available printers. The order of the objects doesn’t really matter.


The fundamental operations on a set are
* Adding an element.
* Removing an element.
* Finding an element.
* Traversing all elements.

[Operations](./set_operations)

[Spellcheck Example](./example_code/spell_check)
[Special Topic: Hash Code Example](./example_code/hash_code)

