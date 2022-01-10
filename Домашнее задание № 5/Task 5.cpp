namespace MyHomework
{
	extern bool task_5(int* arr, const size_t n)
	{
		int LeftSum = 0, RightSum = 0;
		for (size_t i = 0; i < n; i++)
		{
			LeftSum += arr[i];
			for (size_t j = i + 1; j < n; j++)
			{
				RightSum += arr[j];
			}
			if (LeftSum == RightSum)
			{
				return true;
			}
			else if (i == n - 1)
			{
				return false;
			}
			else
			{
				RightSum = 0;
			}
		}
	}
}