Why Pointer are not prefered in Industry?

1- Dangling Reference

int *p1=new int;
*p1=10;

int *p2=p1;

cout<<*p2;//10

delete p2;


cout<<*p1;//exception
............................................

2- Garbage (memory leakage)

int *p1= new int;
*p1=10;


p1= new int;
*p1=20;

p1= new int;
*p1=30;







