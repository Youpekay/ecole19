/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:35:03 by agraton           #+#    #+#             */
/*   Updated: 2020/09/15 17:47:57 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int			ft_iterative_factorial(int nb);
int			ft_recursive_factorial(int nb);
int			ft_iterative_power(int nb, int power);
int			ft_recursive_power(int nb, int power);
int			ft_fibonacci(int index);
int			ft_sqrt(int nb);
//int			ft_is_prime(int nb);
//int			ft_find_next_prime(int nb);

int			main(void)
{
	char	*coor;
	printf("\e[31m               O--------------------O\n               |    TESTING C05:    |\n               O--------------------O\e[0m\n");

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\e[30mThis main.c is brought to you by agraton :)\e[0m\n");

	printf("ex00: ft_iterative_factorial\n");
	coor = (ft_iterative_factorial(1) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s1! = %d | 1\n\e[0m", coor, ft_iterative_factorial(1));
	coor = (ft_iterative_factorial(2) == 2) ? "\e[32m" : "\e[31m" ;
	printf("%s2! = %d | 2\n\e[0m", coor, ft_iterative_factorial(2));
	coor = (ft_iterative_factorial(4) == 24) ? "\e[32m" : "\e[31m" ;
	printf("%s4! = %d | 24\n\e[0m", coor, ft_iterative_factorial(4));
	coor = (ft_iterative_factorial(0) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s0! = %d | 1\n\e[0m", coor, ft_iterative_factorial(0));
	coor = (ft_iterative_factorial(-1) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s-1! = %d | 0\n\e[0m", coor, ft_iterative_factorial(-1));
	coor = (ft_iterative_factorial(12) == 479001600) ? "\e[32m" : "\e[31m" ;
	printf("%s12! = %d | 479001600\n\e[0m", coor, ft_iterative_factorial(12));
	printf("\e[32m13! = %d | UNDEFINED\n\e[0m", ft_iterative_factorial(13));
	printf("Remember to check the fuction is iterative.");

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

	printf("ex01: ft_recursive_factorial\n");
	coor = (ft_recursive_factorial(1) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s1! = %d | 1\n\e[0m", coor, ft_recursive_factorial(1));
	coor = (ft_recursive_factorial(2) == 2) ? "\e[32m" : "\e[31m" ;
	printf("%s2! = %d | 2\n\e[0m", coor, ft_recursive_factorial(2));
	coor = (ft_recursive_factorial(4) == 24) ? "\e[32m" : "\e[31m" ;
	printf("%s4! = %d | 24\n\e[0m", coor, ft_recursive_factorial(4));
	coor = (ft_recursive_factorial(0) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s0! = %d | 1\n\e[0m", coor, ft_recursive_factorial(0));
	coor = (ft_recursive_factorial(-1) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s-1! = %d | 0\n\e[0m", coor, ft_recursive_factorial(-1));
	coor = (ft_recursive_factorial(12) == 479001600) ? "\e[32m" : "\e[31m" ;
	printf("%s12! = %d | 479001600\n\e[0m", coor, ft_recursive_factorial(12));
	printf("\e[32m13! = %d | UNDEFINED\n\e[0m", ft_recursive_factorial(13));
	printf("Remember to check the fuction is recursive.");

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

	printf("ex02: ft_iterative_power\n");
	coor = (ft_iterative_power(5, 4) == 625) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ 4 = %d | 625\n\e[0m", coor, ft_iterative_power(5, 4));
	coor = (ft_iterative_power(5, 1) == 5) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ 1 = %d | 5\n\e[0m", coor, ft_iterative_power(5, 1));
	coor = (ft_iterative_power(5, 0) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ 0 = %d | 1\n\e[0m", coor, ft_iterative_power(5, 0));
	coor = (ft_iterative_power(5, -1) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ -1 = %d | 0\n\e[0m", coor, ft_iterative_power(5, -1));
	printf("Remember to check the fuction is iterative.");

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

	printf("ex03: ft_recursive_power\n");
	coor = (ft_recursive_power(5, 4) == 625) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ 4 = %d | 625\n\e[0m", coor, ft_recursive_power(5, 4));
	coor = (ft_recursive_power(5, 1) == 5) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ 1 = %d | 5\n\e[0m", coor, ft_recursive_power(5, 1));
	coor = (ft_recursive_power(5, 0) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ 0 = %d | 1\n\e[0m", coor, ft_recursive_power(5, 0));
	coor = (ft_recursive_power(5, -1) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s5 ^ -1 = %d | 0\n\e[0m", coor, ft_recursive_power(5, -1));
	printf("Remember to check the fuction is recursive.");

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

	printf("ex04: ft_fibonacci\n");
	coor = (ft_fibonacci(-1) == -1) ? "\e[32m" : "\e[31m" ;
	printf("%s-1 => %d | -1\n\e[0m", coor, ft_fibonacci(-1));
	coor = (ft_fibonacci(0) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s 0 => %d | 0\n\e[0m", coor, ft_fibonacci(0));
	coor = (ft_fibonacci(5) == 5) ? "\e[32m" : "\e[31m" ;
	printf("%s 5 => %d | 5\n\e[0m", coor, ft_fibonacci(5));
	coor = (ft_fibonacci(12) == 144) ? "\e[32m" : "\e[31m" ;
	printf("%s12 => %d | 144\n\e[0m", coor, ft_fibonacci(12));
	coor = (ft_fibonacci(20) == 6765) ? "\e[32m" : "\e[31m" ;
	printf("%s20 => %d | 6765\e[0m", coor, ft_fibonacci(20));
	
	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");	

	printf("ex05: ft_sqrt\n");
	coor = (ft_sqrt(-1) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s\\/'-1 = %d | 0\n\e[0m", coor, ft_sqrt(-1));
	coor = (ft_sqrt(0) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s\\/'0 = %d | 0\n\e[0m", coor, ft_sqrt(0));
	coor = (ft_sqrt(5) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s\\/'5 = %d | 0\n\e[0m", coor, ft_sqrt(5));
	coor = (ft_sqrt(9) == 3) ? "\e[32m" : "\e[31m" ;
	printf("%s\\/'9 = %d | 3\n\e[0m", coor, ft_sqrt(9));
	coor = (ft_sqrt(144) == 12) ? "\e[32m" : "\e[31m" ;
	printf("%s\\/'144 = %d | 12\n\e[0m", coor, ft_sqrt(144));
	coor = (ft_sqrt(2147395600) == 46340) ? "\e[32m" : "\e[31m" ;
	printf("%s\\/'2147395600 = %d | 46340\e[0m", coor, ft_sqrt(2147395600));
    /*
	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

	printf("ex06: ft_is_prime\n");
	coor = (ft_is_prime(-1) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s-1 => %d | 0\n\e[0m", coor, ft_is_prime(-1));
	coor = (ft_is_prime(0) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s 0 => %d | 0\n\e[0m", coor, ft_is_prime(0));
	coor = (ft_is_prime(1) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s 1 => %d | 0\n\e[0m", coor, ft_is_prime(1));
	coor = (ft_is_prime(2) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s 2 => %d | 1\n\e[0m", coor, ft_is_prime(2));
	coor = (ft_is_prime(3) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s 3 => %d | 1\n\e[0m", coor, ft_is_prime(3));
	coor = (ft_is_prime(289) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s 289 => %d | 0\n\e[0m", coor, ft_is_prime(289));
	coor = (ft_is_prime(2000000005) == 0) ? "\e[32m" : "\e[31m" ;
	printf("%s 2000000005 => %d | 0\n\e[0m", coor, ft_is_prime(2000000005));
	coor = (ft_is_prime(2147483629) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s 2147483629 => %d | 1\e[0m", coor, ft_is_prime(2147483629));
	coor = (ft_is_prime(2147483647) == 1) ? "\e[32m" : "\e[31m" ;
	printf("%s 2147483647 => %d | 1\e[0m", coor, ft_is_prime(2147483647));

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

	printf("ex07: ft_find_next_prime\n");
	coor = (ft_find_next_prime(-1) == 2) ? "\e[32m" : "\e[31m" ;
	printf("%s-1 => %d | 2\n\e[0m", coor, ft_find_next_prime(-1));
	coor = (ft_find_next_prime(0) == 2) ? "\e[32m" : "\e[31m" ;
	printf("%s0 => %d | 2\n\e[0m", coor, ft_find_next_prime(0));
	coor = (ft_find_next_prime(5) == 5) ? "\e[32m" : "\e[31m" ;
	printf("%s5 => %d | 5\n\e[0m", coor, ft_find_next_prime(5));
	coor = (ft_find_next_prime(18) == 19) ? "\e[32m" : "\e[31m" ;
	printf("%s18 => %d | 19\n\e[0m", coor, ft_find_next_prime(18));
	coor = (ft_find_next_prime(2147483588) == 2147483629) ? "\e[32m" : "\e[31m" ;
	printf("%s2147483588 => %d | 2147483629\n\e[0m", coor, ft_find_next_prime(2147483588));
	coor = (ft_find_next_prime(2147483645) == 2147483647) ? "\e[32m" : "\e[31m" ;
	printf("%s2147483645 => %d | 2147483647\n\e[0m", coor, ft_find_next_prime(2147483645));

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

	printf("ex08: ft_ten_queens_puzzle\n");
	printf("\e[36mThere should be a total of 724 possibilities.\nI'm not checking them.\e[0m");

	printf("\n\nO-----------------------------------------------------------------------------------------------O\n\n");

*/
	return (0);
}
