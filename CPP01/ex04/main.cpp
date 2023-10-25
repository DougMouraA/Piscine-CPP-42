/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:31:36 by douglas           #+#    #+#             */
/*   Updated: 2023/10/19 17:34:13 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int error(std::string s1, std::string s2)
{
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error: empty string" << std::endl;
        return 1;
    }
    if (s1 == s2)
    {
        std::cout << "Error: strings are the same" << std::endl;
        return 1;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::ifstream inputFile(argv[1]);
        std::string file = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string fileOut = file + ".replace";

        if (error(s1, s2) == 1)
            return 1;
        
        std::ofstream outputFile(fileOut.c_str());
        if (inputFile.is_open() && outputFile.is_open())
        {
            std::string partOne;
            std::string partTwo;
            int lastI = -1;
            std::string line;
            while (std::getline(inputFile, line))
            {
                int i = line.find(s1);
                while (i != int(std::string::npos) && i != lastI)
                {
                    partOne = line.substr(0, i);
                    partTwo = line.substr(i + s1.length(), line.length());
                    line = partOne + s2 + partTwo;
                    lastI = i;
                    i = line.find(s1, i + s2.length());
                }
                outputFile << line << std::endl;
            }
            outputFile.close();
        }
        else 
        {
            std::cout << "Error: Can't open the file" << std::endl;
            return 1;
        }
    }
    else
        std::cout << "Usage: ./replace <filename> <string to replace> <string to replace with>" << std::endl;
}