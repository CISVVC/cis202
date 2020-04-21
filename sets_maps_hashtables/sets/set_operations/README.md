You use the *insert* and *erase* member functions to add and remove 
elements:

```cpp
names.insert("Apples");
names.insert("Oranges");
names.insert("Apples"); // Has no effect: "Apples" is already in the set
names.erase("Apples"); 
names.erase("Apples"); // Has no effect: "Apples" is no longer in the set
```
