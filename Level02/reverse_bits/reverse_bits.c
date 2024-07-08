unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char r;

	i = 8;
	r = 0;

	while(i > 0)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
		i--;
	}
	return (r);
}
