/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileName.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:47:53 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 15:56:59 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileName.hpp"

fileName::fileName(const std::string& filename, const std::string& to_replace, const std::string& New) : filename(filename),to_replace(to_replace), New(New)
{
	
}

fileName::~fileName()
{
	
}

void fileName::parseAndReplace()
{
    std::ifstream inputFile(filename);

    if (!inputFile)
    {
        std::cout << "Failed to open input file: " << filename << std::endl;
        return;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile)
    {
        std::cout << "Failed to create output file: " << filename << ".replace" << std::endl;
        return;
    }
	if (!to_replace.length() || !New.length())
	{
		std::cout << "Empty args" << std::endl;
		return;
	}

    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t start = 0;
        size_t pos = line.find(to_replace);
        while (pos != std::string::npos)
        {
            // Append the portion of the line before the found position
            outputFile << line.substr(start, pos - start);
            // Append the replacement string
            outputFile << New;
            // Move the start position past the found occurrence
            start = pos + to_replace.length();
            // Find the next occurrence of the search string
            pos = line.find(to_replace, start);
        }
        // Append the remaining portion of the line
        outputFile << line.substr(start);
        outputFile << std::endl;
    }

    inputFile.close();
    outputFile.close();
    std::cout << "File [" << filename << "] processed successfully." << std::endl;
}
