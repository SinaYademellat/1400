#include <iostream>

using namespace std;

class Solution 
{
private:
	struct Token
	{
		string code  = "";
		string value = "";
		Token()
		{
			this->code = "-1";
			this->value= "-1";
		}
	};

	bool isItFirstChar(char c)
	{
		if ( (c >= 'a' && c <= 'z') || (c == '_') )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isL_D(char c)
	{

		if ((c >= 'a' && c <= 'z') || (c == '_') || (c>='0' && c<='9'))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

public:
	Token Scanner(string input_)
	{
		Token out_Token;

		if (input_.length()==0)
		{
			cout << "\n Error => size = 0  :( \n";
			return out_Token;//Error_Token;
		}
		else
		{
			if (!isItFirstChar(input_[0]))
			{
				cout << "\n Error => FirstChar :( \n";
				return out_Token;//Error_Token;
			}
			out_Token.code = "ID";
			out_Token.value = input_[0];
			for (long long i = 1; i < input_.length(); i++)
			{
				if (input_[i]==' ')
				{
					input_[i] = '_';
				}

				if (isL_D(input_[i]))
				{
					out_Token.value += input_[i];
				}
				else
				{
					cout << "just L _ D :)\n";
					break;
				}
			}

			return out_Token;
		}
	}
	void Test(string str)
	{
		Token out_T= this->Scanner(str);
		cout << "~~~~ output ~~~~ ";
		cout << "\n[ " << out_T.code << " , " << out_T.value << " ]\n";
		cout << "~~~~ ~~~~~~ ~~~~ ";
	}
};

int main()
{
	Solution A;
	A.Test("s");
}

