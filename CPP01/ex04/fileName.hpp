/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileName.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:17:16 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/12 17:38:21 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef fileNAme_HPP
#define fileNAme_HPP

#include <string>
#include <iostream>

class fileName
{
	private :
		std::string filename;
		std::string to_replace;
		std::string replacer;
	public :
		fileName(const std::string& filename, const std::string& to_replace, const std::string& replacer);
		~fileName();
		
};



#endif