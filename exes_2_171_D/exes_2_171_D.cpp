#include <iostream>
using namespace std;

int arif[31];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Masukan Panjang Data : ";
		cin >> n;
		if ((n > 0) && (n <= 31))
			break;
		else 
			cout << "\nPanjang Data Minimum 1 dan Maximum 31 Data.\n\n";
	}

	cout << "\n-------------\n";
	cout << "Masukan Data\n";
	cout << "-------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "Data ke <" << (i + 1) << "> ";
		cin >> arif[i];
	}
}

void BinarySearch()
{
	int muhammad;
	int rahmadi;
	int item;
	int mid;
	char c;

	do
	{
		cout << "Masukan Data yang ingin dicari : ";
		cin >> item;

		muhammad = 0;
		rahmadi = n - 1;
		mid = (muhammad + rahmadi) / 2;

		while (muhammad <= rahmadi)
		{
			if (arif[mid] == item)
			{
				cout << "\n" <<item  << " Posisinya di data ke- " << (mid + 1) << endl;
				break;
			}
			else if (item < arif[mid])
			{
				rahmadi = mid - 1;
			}
			else if (item > arif[mid])
			{
				muhammad = mid + 1;
			}
			mid = (muhammad + rahmadi) / 2;

		}
		if (muhammad > rahmadi)
		
			cout << "\nData tidak ditemukan\n";

			cout << "\nLanjut cari? (y/n): ";
			cin >> c;
		
	} while ((c == 'y') || (c == 'Y'));
}

int main()
{
	input();
	BinarySearch();
	return 0;
}

