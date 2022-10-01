#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    //Write your code here
    for(int i=1; i<n; i++)
    {
        int curr=arr[i];
        for(int j=i-1; j>=0; j--)
        {
            if(arr[j]>curr)
            {
                arr[j+1]=arr[j];
                arr[j]=curr;
            }
        }
    }
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
