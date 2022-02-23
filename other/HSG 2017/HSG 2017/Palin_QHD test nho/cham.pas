{Huong dan cham:
 chay chuong trinh hoc sinh
 tuong ung cac file palin.in1...palin.in6
 xuat ra palin.ou1 ... palin.ou6
 Sau do chay chuong trinh cham}

const        max = 10000;
        kq : array[1..6] of longint=(7,8,10,11,26,32);
var     s : ansistring;
        d,T : array[0..10000] of longint;
        i,j ,n,m , diem: longint;
        fi , fo : string;
        f : text;
function       doixung(i,j : longint): boolean;
var c, d : longint;
begin
      d :=i; c := j;
      while (c > d) and (s[d]=s[c]) do
        begin inc(d); dec(c); end;
      exit(c<=d);
end;
procedure       xuly;
begin
        d[0] :=0;  //d[i] la so doan it nhat tu 1 den i
      for i :=1 to n do
      begin
        d[i] := max;
        for j :=1 to i do
          if doixung(j,i) then
             if d[j-1] + 1 <D[i] then
                begin
                    d[i] := d[j-1] +1;
                    T[i] := j-1;  // vi tri truoc i la j
                end;
      end;
end;
procedure       cham;
var x, y : longint;
        ok : boolean;
Begin
       diem:=0;
       for i := 1 to 6 do
        begin
         fi := 'palin.in'+ chr(i+48);
         fo := 'palin.ou'+ chr(i+48);
        assign(f,fi);
        reset(f);
        readln(f,n);
        readln(f,s);
        close(f);
        assign(f,fo);
        reset(f);
        readln(f,m);
        x :=1;   ok := true;
        for j := 1 to m do
          begin
                 readln(f,y);
                 if not doixung(x,y) then begin ok := false; break; end;
                 x :=y +1;
          end;
        close(f);
        if ok then begin writeln(' Test ', i ,' Dung'); inc(diem); end;
        end;
end;
begin
        cham;
        writeln(' Tong diem : ', diem);
        readln;
end.
