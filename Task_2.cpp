#include <iostream>


//====================================
// Task_2
//====================================


class Matrix
{
private:
	int m_size;
	int** m_data;
public:
	Matrix(int &size) : m_size(size)
	{
		if (m_size )
		{
			srand(time(0));
			m_data = new int* [m_size];
			for (size_t r = 0; r < m_size; r++)
			{
				m_data[r] = new int[m_size];
				for (size_t v = 0; v < m_size; v++)
				{
					m_data[r][v] = rand() % 10;
				}
			}

		}
		
	}

	~Matrix()
	{
		for (size_t i = 0; i < m_size; i++)
		{
			delete m_data[i];
		}
	}

	void GetMatrix(int** m_data, int** pa, int i, int j, int m_size)
	{
		int ki, kj, di, dj;
		di = 0;

		for (ki = 0; ki < m_size - 1; ki++)
		{
			if (ki == i)di = 1;
			dj = 0;

			for (kj = 0; kj < m_size - 1; kj++)
			{
				if (kj == j)dj = 1;
				pa[ki][kj] = m_data[ki + di][kj + dj];
			}
		}
	}

	int Determinant(int** m_data, int m_size) {
		int i, j, d, k, m;
		int** pa;
		pa = new int* [m_size];

		for (i = 0; i < m_size; i++)
			pa[i] = new int[m_size];

		j = 0; d = 0;
		k = 1;
		m = m_size - 1;

		if (m_size < 1)
			std::cout << "The determinant cannot be calculated!";

		if (m_size == 1)
		{
			d = m_data[0][0];
			return(d);
		}

		if (m_size == 2)
		{
			d = m_data[0][0] * m_data[1][1] - (m_data[1][0] * m_data[0][1]);
			return(d);
		}

		if (m_size > 2)
		{
			for (i = 0; i < m_size; i++)
			{
				GetMatrix(m_data, pa, i, 0, m_size);
				d = d + k * m_data[i][0] * Determinant(pa, m);
				k = -k;
			}
		}
		return(d);

		for (rsize_t i = 0; i < m_size; i++)
		{
			delete pa[i];
		}
	}

	void print()
	{
		for (size_t r = 0; r < m_size; r++)
		{
			for (size_t v = 0; v < m_size; v++)
			{
				std::cout << m_data[r][v] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl << "Matrix determinant: " << Determinant(m_data, m_size) << std::endl;
	}
};

