#include <iostream>
using namespace std;

int sudir[38];                        //array to be searched
int n;								//number of element in the array
int i;                              //index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 38))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 38 elements.\n\n";
	}

	// Accept array element
	cout << "\n--------------------\n";
	cout << "Enter array element\n";
	cout << "\n--------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> sudir[i];
	}
}

void  BinarySearch()
{
	char ch;
	do
	{
		// Accept the number to be searched
		cout << "\nEnter element want you to search: "; 
		int item;
		cin >> item;

		// Apply binary search
		int muhammad = 0;
		int sudirman = n - 1;
		int mid = (muhammad + sudirman)/ 2; // Index of middle element
		int ctr = 1; // Number of comparisons

		while ((item != sudir[mid]) && (muhammad <= sudirman))
		{
			if (item > sudir[mid])
				muhammad = mid + 1;
			else
				sudirman = mid - 1;

			mid = (muhammad + sudirman) / 2;
			ctr++;
		}

		if (item == sudir[mid])
			cout << "\n" << item << " Found in Array " << (mid + 1) << endl;
		else
			cout << "\n" << item << " Not Found \n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}


int main()
{
	input();
	BinarySearch();
}
