#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsMyDynamicArray
{
protected:
	int _Size = 0;
	T* _TempArray;
	
public:
	T* OriginalArray;
	clsMyDynamicArray(T Size = 0)
	{
		if (_Size < 0)
			_Size = 0;
		_Size = Size;
		OriginalArray = new T[_Size];
	}
	~clsMyDynamicArray()
	{
		delete[] OriginalArray;
	}
	bool SetItem(T index, T Item)
	{
		if (index < 0 || index >= _Size)
		{
			return false;
		}
		else
		{
			OriginalArray[index] = Item;
			return true;
		}
		
	}
	
	void PrintList()
	{
		for (int i = 0; i <= _Size - 1; i++)
			cout << OriginalArray[i] << " ";
		cout << "\n";
	}
	int Size()
	{
		return _Size;
	}
	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;
		if (NewSize == _Size) return;
		if(NewSize < _Size)
			_Size = NewSize;

		_TempArray = new T[NewSize];

		for (int i = 0; i < _Size; i++)
			_TempArray[i] = OriginalArray[i];

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		
	}
	bool IsEmpty()
	{
		return (_Size == 0);
	}
	T GetItem(int Item)
	{
		return OriginalArray[Item];
	}
	void Reverse()
	{
		_TempArray = new T[_Size];
		int Counter = 0;
		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[Counter] = OriginalArray[i];
			Counter++;
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	
	}
	bool DeleteItemAt(int index)
	{
		if (index < 0 || index >= _Size) return false;
		_TempArray = new T[_Size];
		_Size--;
		for (int i = 0; i < index; i++)
			_TempArray[i] = OriginalArray[i];

		for (int i = index + 1; i < _Size + 1; i++)
			_TempArray[i - 1] = OriginalArray[i];

		/*for (int i = index; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i + 1];
		}*/
		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}
	bool DeleteFirstItem()
	{
		return DeleteItemAt(0);
	}
	bool DeleteLastItem()
	{
		return DeleteItemAt(_Size - 1);
	}
	int Find(T Item)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Item)
				return i;
		}
		return -1;
	}
	bool DeleteItem(T Item)
	{
		int index = Find(Item);
		if (index == -1) return false;
		else
		{
			DeleteItemAt(index);
			return true;
		}
		
	}
	bool InsertAt(T index, T Value)
	{
		if (index < 0 || index > _Size) return false;

		_Size++;
		_TempArray = new T[_Size];
		for (int i = 0; i < index; i++)
			_TempArray[i] = OriginalArray[i];

		_TempArray[index] = Value;
		for (int i = index; i < _Size - 1; i++)
			_TempArray[i + 1] = OriginalArray[i];
		delete [] OriginalArray;
		OriginalArray = _TempArray;
		/*Resize(_Size + 1);
		for (int i = _Size - 1; i > index; i--)
			OriginalArray[i] = OriginalArray[i - 1];
		OriginalArray[index] = Value;*/
		return true;
		
	}
	void InsertAtBeginning(T Value)
	{
		InsertAt(0, Value);

	}
	bool InsertBefore(T index, T Value)
	{
		if(index < 1) 
			return InsertAt(0, Value);
		else
			return InsertAt(index, Value);
		
	}
	bool InsertAfter(T index, T Value)
	{
		if (index >= _Size)
			return InsertAt(_Size, Value);
		else
			return InsertAt(index + 1, Value);
	}
	void InsertAtEnd(T Value)
	{
		InsertAt(_Size, Value);
	}
};