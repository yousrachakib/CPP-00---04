/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileName.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:17:16 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/14 18:37:31 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef fileNAme_HPP
#define fileNAme_HPP

#include <fstream>
#include <iostream>

class fileName
{
	private :
		std::string filename;
		std::string to_replace;
		std::string New;
	public :
		fileName(const std::string& filename, const std::string& to_replace, const std::string& New);
		~fileName();
		void parseAndReplace();
};



#endif