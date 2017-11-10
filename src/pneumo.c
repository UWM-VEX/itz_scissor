void pneumoSet(int open, int closed, int up int down)
{
  if (open)
  digitalWrite(5, HIGH);
  else if (closed)
  digitalWrite(5, LOW);
  else if (up)
  digitalWrite(6, HIGH);
  else (down)
  digitalWrite(6, LOW);
}
