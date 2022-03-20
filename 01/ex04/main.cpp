#include <iostream>
#include <string>
#include <fstream>

int str_replace(std::string file_name, std::string search, std::string replace)
{
	std::ifstream file;
	std::ofstream output;
	std::string line;
	size_t pos;
	if (search.empty())
		return 1;
	file.open(file_name.c_str());
	if (!file)
		return 1;
	output.open((file_name + ".replace").c_str());
	if (!output)
	{
		file.close();
		return 1;
	}
	while (getline(file, line))
	{
		while((pos = line.find(search)) != std::string::npos)
		{
			output << line.substr(0, pos) << replace;
			line = line.substr(pos + search.size());
		}
		output << line << std::endl;
	}
	file.close();
	output.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	return (str_replace(argv[1], argv[2], argv[3]));
}