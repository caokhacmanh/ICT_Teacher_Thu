program WORM;
const   fi='WORM.INP';
        fo='WORM.OUT';
        sau=['1'..'9'];
var     f:text;
procedure xuly;
var     dem:integer;
        ch:char;
begin   assign(f,fi);
        reset(f);
        dem:=0;
        while not eof(f) do
                begin   read(f,ch);
                        if ch in sau then inc(dem);
                end;
        close(f);assign(f,fo);rewrite(f);
        write(f,dem);close(f);
end;
BEGIN xuly;
END.
hkju8ji5
