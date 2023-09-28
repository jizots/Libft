/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsft_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:13:30 by hotph             #+#    #+#             */
/*   Updated: 2023/09/28 18:53:39 by hotph            ###   ########.fr       */
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
# include <stdbool.h>

/*-------define-------*/

/*-------typedef-------*/
typedef struct s_point2d
{
	double	x;
	double	y;
}	t_point2d;

typedef struct s_data2d
{
	t_point2d	p;
	int			color;
}	t_data2d;

typedef struct s_point3d
{
	double	x;
	double	y;
	double	z;
}	t_point3d;

/*-------prototype-------*/
/*######## String ########*/
/*@brife	Add string pointer to old_array of string(array must NULL terminated).*/
char	**add_string_to_array(char *src_add, char **old_array);
char	*base_to_newbase(char *num_oldbase, char *oldbase, char *newbase);
/*@brife	Count rows of matrix. Matrix must NULL terminated*/
size_t	count_row_of_matrix(char **matrix);
/*@brife	Count words splited with ispase3 charctors.*/
size_t	count_word(const char *str);
/*@brife	Verify 'str' ends with 'end' string.*/
bool	ends_with_str(const char *str, const char *end);
/*@brife	Read line(terminated by \n or \0) from file discriptor.*/
/*@return	char* of line alloced. If fail read or reach end of file, return NULL.*/
/*@coution	Do not use when you don't need to read all line. It's cause memory leaks.*/
char	*ft_gnl(int fd);
char	*get_first_line(int fd);
/*if argument is space3, return true.*/
bool	is_space3(const char c);
/*@brief	Return size of charactor of space, defined by isspace(3).*/
size_t	len_isspace3(const char *src);
/*
@brief	Return size of charactor of number(within int size).
Ex. 123 -> 3, -123 -> 4, 0 -> 1
*/
int		num_digit_int(int num);
/*@brife Put reverse stirng to specified file discriptor.*/
int		putstr_reverse_fd(char *s, int fd);
/*@brief Coution: This function has read() function. libft dose not allow.*/
/*
@brief Return map of splited string. Splited by char(can multiple select).
ex. ft_split_multichar("abc de,f", " ,") -> {"abc", "de", "f", NULL}
*/
char	**split_multichar(const char *s, const char *multichar);
/*@brife Verify string is composed only charset charactors.*/
bool	is_string_composedof(const char *str, const char *charset);
bool	is_valid_string(char *str, bool condition(char));
bool	is_valid_matrix(int num_of_row, char *matrix[], bool (*f)(const char *));

/*######## Free ########*/
/*
@brief Free matrix type char**. Require size of row.
@brief Free each row and matrix.
*/
void	free_map(void **map, size_t size_row);
void	free_map_null_terminated(void ***map);
/*@brief Free pointer and set null.*/
void	free_null(void **ptr);

/*######## Math ########*/
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
bool	is_oddnum(int num);

/*######## Color, texture ########*/
int	create_trgb_color(unsigned char t, unsigned char r,
					unsigned char g, unsigned char b);

#endif