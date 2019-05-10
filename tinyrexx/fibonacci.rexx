p=1
s=1
pull n

if (n == 0 | n==1) then
  do
    say 1
  end

if (n == 2) then
  do
    say 1
    say 1
  end

else
  do
    say 1
    say 1
    do i=3 to n
      f=p+s
      say f
      s=p
      p=f
    end
  end

