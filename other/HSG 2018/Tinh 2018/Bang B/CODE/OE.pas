program OE;
const   fi='OE.INP';
        fo='OE.OUT';
var     f:text;
procedure xuly;
var     i:byte;
        n:longint;
        ok:boolean;
begin   assign(f,fi);
        reset(f);
        ok:=true;
        i:=1;
	readln(f,n);
        while (not eof(f)) and ok do
                begin   read(f,n);
                        i:=(i+1) mod 2;
                        if (n+i) mod 2<>0 then ok:=false;
                end;
        close(f);
        assign(f,fo);rewrite(f);
        if ok then write(f,'D') else write(f,'K');close(f);
end;
BEGIN xuly;
END.
4 19 22 11 30
Khong can dung den bien n
