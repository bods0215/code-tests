/*
 * Questions (some have multiple right answers):
 *
 * - what is potentially wrong with this code?
 *
 * - what can be added to make it do what we want?
 *
 * - when would you expect to see something like this?
 */

void funcA()
{
	int *a = 0x1000;
	*a = 0;

	while ( ! (*a) );
}
