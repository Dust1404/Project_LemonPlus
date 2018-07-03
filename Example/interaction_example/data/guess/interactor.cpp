#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

int n, nguess, fullscore;
std::vector<int> nums;
std::ofstream score, err;

std::vector<int> get_ans(int);

template <typename T>
inline void assert(const T &condition, const std::string &message)
{
    if (!condition)
    {
        err << message << std::endl;
        score << 0 << std::endl;
        exit(0);
    }
}

int guess(int index, int val)
{
	nguess++;
	assert(0 <= index && index < n, "`index` must in [0, n)!");

	if (val < nums[index])
	{
		return -1;
	}
	else if (val > nums[index])
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char **argv)
{
	std::ifstream datin("guess.in");
	fullscore = atoi(argv[1]);
	score.open(argv[2]);
	err.open(argv[3]);

	datin >> n;
	nums.resize(n);
	for (int i = 0; i < n; i++)
	{
		datin >> nums[i];
	}
	
	std::vector<int>	x = get_ans(n);
	assert(x.size() == n, "Size is not equal to n");
	
	bool	wrongAnswer = false;
	for(int i = 0; i < n; i++)
		if(x[i] != nums[i] && !wrongAnswer) {
			wrongAnswer = true;
			err << "First differ on the " + std::to_string(i) + "-th number!" << std::endl;
			score << 0 << std::endl;
		}
	
	if(!wrongAnswer) {
		score << std::max(std::min(100.0, (950.0 - ((double)nguess / n - 100.0)) / 950.0 * 100.0), 0.0) / 100.0 * fullscore << std::endl;
		err << "nguess = " + std::to_string(nguess) << std::endl;
	}
	
	return 0;
}
