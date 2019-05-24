a = 2
b = 4
do c=1 to a
  do d=1 to b
    say d
    say -1
  end
  say c
  say -2
end
if c<5 then do
  do d=1 to 2
    say d
    say -1
  end
  if c>d then do
    say c*d
  end
  else do
  p = true
    if p then do
      say c*d
    end
  end
end
