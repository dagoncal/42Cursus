/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <dagoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:19:10 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/22 16:38:13 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	//char	dest[] = "Hello World";
	//char	src[] = "World";
	//char	s1[] = "Hello";
	//char	s2[] = " World";
	//char	*str;
	//char	cmp[] = "deHello Worlded";

	//printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
	//printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));
	//printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
	//printf("ft_isdigit('1') = %d\n", ft_isdigit('1'));
	//printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));
	//printf("ft_isalnum('1') = %d\n", ft_isalnum('1'));
	//printf("ft_isalnum('.') = %d\n", ft_isalnum('.'));
	//printf("ft_isascii(0) = %d\n", ft_isascii(0));
	//printf("ft_isascii(127) = %d\n", ft_isascii(127));
	//printf("ft_isascii(128) = %d\n", ft_isascii(128));
	//printf("ft_isprint(32) = %d\n", ft_isprint(32));
	//printf("ft_isprint(126) = %d\n", ft_isprint(126));
	//printf("ft_isprint(31) = %d\n", ft_isprint(31));
	//printf("ft_isprint(127) = %d\n", ft_isprint(127));
	//printf("ft_strlen(dest) = %lu\n", ft_strlen(dest));
	//ft_memset(dest + 11, '.', 6*sizeof(char));
	//printf("ft_memset(dest + 11, '.', 6*sizeof(char)) = %s\n", dest);
	//ft_bzero(dest + 11, 6*sizeof(char));
	//printf("ft_bzero(dest + 11, 6*sizeof(char)) = %s\n", dest);
	//memcpy(dest, src, 4*sizeof(char));
	//printf("ft_memcpy(dest, src, 4*sizeof(char)) = %s\n", dest);
	//ft_memmove(dest, src, 4*sizeof(char));
	//printf("ft_memmove(dest, src, 4*sizeof(char)) = %s\n", dest);
	//printf("ft_strlcpy(dest, src, 3*sizeof(char)) = %lu\n", ft_strlcpy(dest, src, 3*sizeof(char)));
	//printf("ft_strlcpy(dest, src, 3*sizeof(char)) = %s\n", str);
	//printf("ft_strlcat(dest, src, 2*sizeof(char)) = %lu\n", ft_strlcat(dest, src, 2*sizeof(char)));
	//printf("ft_strlcat(dest, src, 2*sizeof(char)) = %s\n", dest);
	//printf("ft_toupper('a') = %c\n", ft_toupper('a'));
	//printf("ft_toupper('A') = %c\n", ft_toupper('A'));
	//printf("ft_toupper('1') = %c\n", ft_toupper('1'));
	//printf("ft_tolower('A') = %c\n", ft_tolower('A'));
	//printf("ft_tolower('a') = %c\n", ft_tolower('a'));
	//printf("ft_tolower('1') = %c\n", ft_tolower('1'));
	//printf("ft_strchr(dest, 'l') = %s\n", ft_strchr(src, 'l'));
	//printf("ft_strchr(dest, 'L') = %s\n", ft_strchr(src, 'L'));
	//printf("ft_strrchr(dest, 'l') = %s\n", ft_strrchr(dest, 'l'));
	//printf("%s\n", dest);
	//printf("ft_strrchr(dest, 'L') = %s\n", ft_strrchr(dest, 'L'));
	//printf("ft_strncmp(src, dest) = %d\n", ft_strncmp(src, dest, 1*sizeof(char)));
	//printf("ft_memchr(dest, 'l', 3) = %s\n", (char *)ft_memchr(dest, 'l', 3));
	//printf("ft_memchr(dest, 'l', 2) = %s\n", (char *)ft_memchr(dest, 'l', 2));
	//printf("ft_memcmp(dest, src, 2*sizeof(char)) = %d\n", ft_memcmp(dest, src, 2*sizeof(char)));
	//printf("ft_strnstr(dest, src, 11*sizeof(char)) = %s\n", ft_strnstr(dest, src, 11*sizeof(char)));
	//printf("ft_strnstr(dest, src, 8*sizeof(char)) = %s\n", ft_strnstr(dest, src, 8*sizeof(char)));
	//printf("ft_atoi(      19874ab-dasd3012893) = %d\n", ft_atoi(" 	  19874ab-dasd3012893"));
	//printf("ft_atoi(            +13123fklsj-2424) = %d\n", ft_atoi("	     +13123fklsj-2424"));
	//printf("ft_atoi(            -23912390-asdnmasd213891) = %d\n", ft_atoi("	       -23912390-asdnmasd213891"));
	//printf("ft_atoi(a         342542) = %d\n", ft_atoi("a	   	342542"));
	//printf("ft_atoi(         a123123) = %d\n", ft_atoi("	  	a123123"));
	//printf("ft_atoi(      -a123144-asdjd) = %d\n", ft_atoi("	    -a123144-asdjd"));
	//printf("ft_atoi(     +a3289049023-sdadkjdjlk) = %d\n", ft_atoi("	    +a3289049023-sdadkjdjlk"));
	//str = (char *)ft_calloc(5 + 1, sizeof(char));
	//strcpy(str, src);
	//printf("(char *)ft_calloc(5, sizeof(char)) = %s\n", str);
	//free(str);
	//printf("ft_strdup(src) = %s\n", ft_strdup(src));
	//printf("ft_substr(dest) = %s\n", ft_substr(dest, 6, 5));
	//printf("ft_strjoin(s1, s2) = %s\n", ft_strjoin(s1, s2));
	//printf("ft_strtrim(cmp, de) = %s\n", ft_strtrim(cmp, "de"));
	return (0);
}
