/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:38:08 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:39:24 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
    private:

        std::string type;
        int hp;

    public:

        Enemy();
        Enemy(int hp, std::string const & type);
        virtual ~Enemy();
        Enemy(const Enemy &copy);
        Enemy& operator=(const Enemy &copy);
        std::string const getType() const;
        int getHP() const;
        virtual void takeDamage(int dmg);
};

#endif