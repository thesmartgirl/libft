int ft_atoi(const char *nptr)
{
  int sign;
  int n;
  int i;

  sign = 1;
  n = 0;
  i = 0;
  while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\v'
			|| nptr[i] == '\f' || nptr[i] == '\r')
		i++;
  if (nptr[i] == '-' || nptr[i] == '+')
  {
  	if (nptr[i] == '-')
  		sign *= -1;
  	i++;
  }
  while (ft_isdigit(nptr[i]))
	{
		n = n * 10 + (nptr[i] - '0');
		i++;
	}
  return sign * n;
}
