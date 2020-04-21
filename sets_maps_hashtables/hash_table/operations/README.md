You use the *insert* and *erase* member functions to add and remove 
elements:

```cpp
names.insert("Apples");
names.insert("Oranges");
names.insert("Apples"); // Has no effect: "Apples" is already in the set
names.erase("Apples"); 
names.erase("Apples"); // Has no effect: "Apples" is no longer in the set
```

You can visit each of the items in the set by using an iterator:
```cpp
names.insert("Tom");
names.insert("Diana");
names.insert("Harry");
// using an iterator
std::unordered_set<string>::iterator pos;
for (pos = names.begin(); pos != names.end(); pos++) {
         std::cout << *pos << " ";
}

// or you can use the auto keyword
for (auto pos = names.begin(); pos != names.end(); pos++) {
         std::cout << *pos << " ";
}

// the enhanced for loop works as well
for (auto name : names) {
         std::cout << name << " ";
}
```
