/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsft_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotanaka <sotanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:13:30 by hotph             #+#    #+#             */
/*   Updated: 2023/09/13 18:57:00 by sotanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSFT_UTILS_H
# define LIBSFT_UTILS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

/*-------include header-------*/
# include "libsft.h"
# include <math.h>

/*-------prototype-------*/
/*String*/
/*@brife Put reverse stirng to specified file discriptor.*/
void	putstr_reverse_fd(char *s, int fd);
/*
@brief Return size of charactor of number(within int size).
Ex. 123 -> 3, -123 -> 4, 0 -> 1
*/
int		num_digit_int(int num);
/*@brief Return size of charactor of space, defined by isspace(3).*/
size_t	len_isspace3(const char *src);
/*if argument is space3, return true.*/
bool	is_space3(const char c);
/*@brief Coution: This function has read() function. libft dose not allow.*/
char	*get_first_line(int fd);
/*
@brief Return map of splited string. Splited by char(can multiple select).
ex. ft_split_multichar("abc de,f", " ,") -> {"abc", "de", "f", NULL}
*/
char	**split_multichar(const char *s, const char *multichar);
/*@brife Count words splited with ispase3 charctors.*/
size_t	count_word(const char *str);
/*@brife Verify string is composed only charset charactors.*/
bool	is_string_composedof(const char *str, const char *charset);

/*Free*/
/*@brief Free pointer and set null.*/
void	free_null(void **ptr);
/*
@brief Free matrix type char**. Require size of row.
@brief Free each row and matrix.
*/
void	free_map(void **map, size_t size_row);
void	free_map_null_terminated(void **map);
bool	is_valid_matrix(int num_of_row, char *matrix[], void *f(const char *));
char	*base_to_newbase(char *num_oldbase, char *oldbase, char *newbase);

/*math*/
/*@brife Calculate power exponents of num.*/
/*@param num is base number. exponent is exponents.*/
int		power_num(int num, int exponents);
double	get_radian(double theta);
/*@brief Coution: This function has sqrt(). libft dose not allow.*/
/*@brief Get distance of two points.*/
/*@param x1y1 Meaning, x-y coordinate of one point.*/
double	distance_of_point(double x1, double y1, double x2, double y2);
/*
Coution: This function has sqrt(). libft dose not allow.
Variables name dose not have deep meaning.
*/
double	hypotenus_of_pytgrs(double adjacent, double opposite);

#endif