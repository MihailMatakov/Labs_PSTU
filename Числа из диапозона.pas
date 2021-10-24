Program UgadaiChislo; 
var a,k,p,i: integer;
begin
a := random(1,100);
writeln('Угадайте число принадлежашее диапазну от 1 до 100: a');
while (k<8)  do 
 begin 
  writeln('Dведите число');
  readln(i);
  if (i>a) then 
   begin
    writeln('Введите число меньше ');
    k:=k+1;
   end 
  else
   If (i<a) then 
     begin 
      writeln('Введите число больше');
      k:=K+1; 
      end 
  else
   If (i=a) then 
     begin 
      writeln('Число введено правильно');
      writeln('Загаданное число:',a);
      k:=k+7;
     end;
end;
 If k=7 then  
 writeln('Попытки закончились');
 writeln('Загаданное число:',a);
end.