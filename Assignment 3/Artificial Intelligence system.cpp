#include <iostream>
#include <cmath>

using namespace std;

class DataProcessor 
{
public:
	virtual void processData(double data[], int size) = 0;
};

class ML : public DataProcessor {
public:
	void processData(double data[], int size)
	{
		double sum = 0, sumSq = 0, mean, variance;

		for (int i = 0; i < size; i++) 
		{
			sum += data[i];
		}
		mean = sum / size;

		for (int i = 0; i < size; i++) 
		{
			sumSq += (data[i] - mean) * (data[i] - mean);
		}
		variance = sumSq / size;

		cout << "ML Module: Calculating mean and variance of the data.\n";
		cout << "Mean: " << mean << ", Variance: " << variance << endl;
	}
};

class NLP : public DataProcessor 
{
public:
	void processData(double data[], int size)
	{
		double sum = 0;

		for (int i = 0; i < size; i++) 
		{
			sum += data[i];
		}

		cout << "NLP Module: Calculating normalized frequencies of the data.\n";
		cout << "Frequencies: ";
		for (int i = 0; i < size; i++) 
		{
			cout << data[i] / sum << " ";
		}
		cout << endl;
	}
};

class AIAssistant : public ML, public NLP 
{
public:
	void processData(double data[], int size) 
	{
		ML::processData(data, size);
		NLP::processData(data, size);

		double sumSq = 0;
		for (int i = 0; i < size; i++) 
		{
			sumSq += data[i] * data[i];
		}
		double rms = sqrt(sumSq / size);

		cout << "AI Assistant Module: Calculating RMS of the data.\n";
		cout << "RMS: " << rms << endl;
	}
};

int main() 
{
	const int size = 5;
	double data[size] = { 1.5, 2.0, 3.5, 4.0, 5.5 };

	AIAssistant assistant;

	cout << "Processing data using AIAssistant:\n";
	assistant.processData(data, size);

	system("pause");
	return 0;
}
