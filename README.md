# Trees
____
## Content
1. [Project description](#l1)<br>
2. [Interface description](#l2)<br>
3. [Description of classes](#l3)<br>
3.1. [AVL](#l31)<br>
3.2. [Node](#l32)<br>
4. [Results of the program](#4)<br>
____
<a name="l1"></a> 
## Project description
The object of research is algorithms for sorting and searching AVL trees, as well as algorithms for optimal binary search and sorting by direct inclusion.
The purpose of the course work is to develop an application for comparing and analyzing internal sorting algorithms.
<a name="l2"></a> 
## Interface description
Page interface model of sorting and search algorithms  
![Sorting_and_search_algorithms](/img_for_readme/Interface_1.png)  
The page interface model for working with the AVL tree  
![AVL_tree](/img_for_readme/Interface_2.png)  
1. page for demonstration of sorting and search;
2. a page for demonstrating algorithms for the operation of AVL trees;
3. table with characteristics of search algorithms;
4. graph of the demonstration of the dependence of the time of the search algorithms on the number of elements;
5. table with characteristics of sorting algorithms;
6. graph demonstrating the dependence of the working time of sorting algorithms on the number of elements;
7. array dimension input field;
8. sort and search button;
9. table showing the first 100 items after sorting;
10. the button for adding a value to the AVL tree;
11. value input field to add to the AVL tree;
12. the button for deleting a value from the AVL tree;
13. input field for deleting values from the AVL tree;
14. the button for changing the value in the AVL tree;
15. input field of the original value when changing in the AVL tree;
16. the field for entering the final value when changing in the AVL tree;
17. button for creating a new tree;
18. the output field of the algorithm results;
19. the output field of the AVL tree before making the names;
20. the output field of the AVL tree after making changes.  
<a name="l3"></a> 
## Description of classes
<a name="l31"></a> 
![Classes](/img_for_readme/Classes.png)  
### AVL
#### Class assignment
AVL-tree entity class
#### Class fields
`-root: Node*` – root of the trees;
`-count: int` – the number of elements in the tree at the moment;
`-N: int` - the dimension of the tree.
#### Methods of the class
`+AVL()` – class constructor;
`+AVL(int)` - class constructor;
`+get_count()` - getting the value of the count field;
`+set_N(int)` - change the value of the field N;
`+add(int)` - adding an element to the tree (without obtaining characteristics);
`+add(int, int&, int&)` - adding an element to the tree (with obtaining characteristics);
`+remove(int, string&)` - removing an element from the tree;
`+avl_looking(int, int*, bool&)` - search for the key (with saving the path to it);
`+avl_search(int, double&)` - key search (without saving the path to it);
`+left_to_right(int*, int)` - traversal from left to right;
`+print_tree(TextBox)` - tree output;
`-need_balance(Node*)` - checking the need for balancing;
`-fix_height(Node*)` - restoring the height value;
`-balance(Node*)` - balancing;
`-LL(Node*)` – left turn;
`-RR(Node*)` – right turn;
`-in_order(Node*, int*, int, int&)` - recursive traversal.  
<a name="l32"></a> 
### Node
#### Class assignment
AVL tree node class
#### Class fields
`-value: int` - the value in the node
`-height: int` - height of the node
`-left: Node*` – left subtree
`-right: Node*` – right subtree
`-parent: Node*` – parent element of the node
`-same: int` – the number of elements with a repeating value
#### Methods of the class
`+Node(int)` - class constructor;
`+Node(int, Node*)` - class constructor;
`+get_value()` - getting the value of the value field;
`+set_value(int)` - changing the value of the value field;
`+get_ height()` - getting the value of the height field;
`+set_ height(int)` - changing the value of the height field;
`+get_ left()` - getting the value of the left field;
`+set_ left Node*int)` - changing the value of the left field;
`+get_ right()` - getting the value of the right field;
`+set_right(Node*)` - changing the value of the right field;
`+get_ parent()` - getting the value of the parent field;
`+set_parent(Node*)` - changing the value of the parent field;
`+get_same()` - getting the same field value;
`+set_same(int)` - changing the value of the same field;  
<a name="l4"></a> 
## Results of the program  
![Result_1](/img_for_readme/Result_1.png)  
![Result_2](/img_for_readme/Result_2.png)  
