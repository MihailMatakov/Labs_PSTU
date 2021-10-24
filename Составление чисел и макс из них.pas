Program chisla;
var x:integer; 
  a, b, c:integer; 
  t, f:integer;
begin
a:=0;b:=0;c:=0;t:=0;
f :=0;
writeln( 'Введите трёхзначное число. Причем цифры в нём повторятся не должны');
readln (x);
 while ((x < 100) or (x > 999)) do 
  begin
	 writeln('Введённое число не трёхзначное, Введите число заново');
	 readln( x);
	end;
	a:= x mod 10;
	x:= x div 10;
	b:= x mod 10;
	c:= x div 10;
	while (f = 0) do 
   begin
		if ((a = b) or (b = c) or (a = c)) then 
      begin
			 writeln('Цифры повторяются. Введите число заново');
			 readln(x);
			 while ((x < 100) or (x > 999)) do 
        begin
		     writeln('Введённое число не трёхзначное, повторите ввод');
	       readln( x);
	      end;
	      a:= x mod 10;
	      x:= x div 10;
	      b:= x mod 10;
	      c:= x div 10;
       end
		   else  f:= 1; 
      end;
 writeln('Все составленые числа');
 writeln( a, b, c);
 t:= c;
 c:= b;
 b:= t;
 writeln( a, b, c);
 t:= a;
 a:= b;
 b:= t;
 writeln( a, b, c);
 t:= a;
 a:= c;
 c:= t;
 writeln( a, b, c); 
 t:= c;
 c:= b;
 b:= t;
 writeln( a, b, c);
 t:= a;
 a:= b;
 b:= t;
 writeln( a, b, c);
 write('Самое большое число:');
		if ((a > b) and (a > c)) then 
  begin
			if (b > c) then
				writeln (a,b,c)
			else
       writeln (a,c,b);	
	end
	else
	begin
			if ((b > a) and (b > c)) then 
  begin
		if (a > c) then
			writeln (b,a,c)
			else
			writeln (b,c,a);
	end
	else
    if ((c > b) and (c > a))then 
  begin
		if (b > a) then
		writeln (c,b,a)
		else
		writeln (c,a,b);
	end
	end;
end.