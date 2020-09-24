/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 10:42:36 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 11:59:21 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    this->count = 0;
    this->marines = nullptr;
}

Squad::~Squad()
{
    int	i;

	i = -1;
	while (++i < this->count)
		delete this->marines[i];
	if (this->count > 0)
		delete [] this->marines;
}

Squad::Squad(const Squad & src)
{
    int	i;

	this->count = src.getCount();
	this->marines = new ISpaceMarine*[this->count];
    i = -1;
	while (++i < this->count)
		this->marines[i] = src.getUnit(i)->clone();
}

Squad & Squad::operator=(const Squad & copy)
{
    int	i;

	i = -1;
	while (++i < this->count)
		delete this->marines[i];
	if (this->count > 0)
		delete [] this->marines;
    this->count = copy.getCount();
	this->marines = new ISpaceMarine*[this->count];
    i = -1;
	while (++i < this->count)
		this->marines[i] = copy.getUnit(i)->clone();
    return (*this);
}

int Squad::getCount() const
{
    return (this->count);
}

ISpaceMarine* Squad::getUnit(int n) const
{
    if (n < this->count && n >= 0)
        return (this->marines[n]);
    else
        return (nullptr);
    
}

int Squad::push(ISpaceMarine* ptr)
{
    int i;

    if (ptr == nullptr)
        return (this->count);
    i = -1;
    while (++i < this->count)
    {
        if (ptr == this->marines[i])
            return (this->count);
    }
    ISpaceMarine** add_marines = new ISpaceMarine*[this->count + 1];
    i = -1;
    while (++i < this->count)
        add_marines[i] = this->marines[i];
    add_marines[i] = ptr;
    if (this->count > 0)
        delete [] this->marines;
    this->marines = add_marines;
    this->count++;
    return(this->count);

}