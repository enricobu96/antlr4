pull a
pull b
pull c

if (a==b & b==c) then
do
  say 1
end

if ((a==b & a!=c) | (a==c & a!=b) | (c==b & a!=c)) then
do
  say 2
end
else
do
  say 3
end

