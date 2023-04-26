/**
 * swap - swaps two integers
 * 
 * @a: first integer
 * @b: second integer
*/
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
