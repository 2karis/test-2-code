$x = 10; 
sub fun1  
{  
   return $x;  
} 
sub fun2  
{  
   local $x = 20;  
   return fun1();  
} 
print fun2()."\n"; 
print fun1()."\n"; 
