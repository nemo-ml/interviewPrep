/*
Working of virtual functions (concept of VTABLE and VPTR)
As discussed here, if a class contains a virtual function then compiler itself does two things.

If object of that class is created then a virtual pointer (VPTR) is inserted as a data member of 
the class to point to VTABLE of that class. For each new object created, a new virtual pointer is 
inserted as a data member of that class. 

Irrespective of object is created or not, class contains as a member a static array of function 
pointers called VTABLE. Cells of this table store the address of each virtual function contained 
in that class.
*/

