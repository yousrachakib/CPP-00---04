/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileName.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:47:53 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/12 16:57:08 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileName.hpp"

fileName::fileName(const std::string& filename, const std::string& to_replace, const std::string& replacer) : filename(filename),to_replace(to_replace), replacer(replacer)
{
	
}

fileName::~fileName()
{
	
}
