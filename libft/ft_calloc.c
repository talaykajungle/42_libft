/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:19 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/01 19:29:25 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp[i++] = 0;
	return (tmp);
}

// #include <limits.h> // For SIZE_MAX

// int main() {
//     // Test case 1: Normal allocation
//     size_t num_elements = 50;
//     size_t element_size = sizeof(int);
//     int *array = (int *)ft_calloc(num_elements, element_size);
//     if (array == NULL) {
//         printf("Memory allocation failed for %zu elements of size %zu!\n",
//	num_elements, element_size);
//         return (1);
//     }
//     printf("Allocated array values (should all be 0):\n");
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("array[%zu] = %d\n", i, array[i]);
//     }
//     free(array);

//     // Test case 2: Zero elements
//     array = (int *)ft_calloc(0, element_size);
//     if (array != NULL) {
//         printf("Successfully allocated memory for 0 elements (pointer:
//	%p).\n", (void *)array);
//         free(array);
//     } else {
//         printf("Memory allocation failed as expected for 0 elements.\n");
//     }

//     // Test case 3: Zero size
//     array = (int *)ft_calloc(num_elements, 0);
//     if (array != NULL) {
//         printf("Successfully allocated memory for
//	%zu elements of size 0 (pointer: %p).\n", num_elements, (void *)array);
//         free(array);
//     } else {
//         printf("Memory allocation failed as expected for size 0.\n");
//     }

//     // Test case 4: Large allocation
//     size_t large_num_elements = (size_t)INT_MAX;
	// or a large number like 1e9
//     array = (int *)ft_calloc(large_num_elements, element_size);
//     if (array == NULL) {
//         printf("Memory allocation failed as 
//expected for large allocation.\n");
//     }

//     // Test case 5: Small allocation
//     array = (int *)ft_calloc(1, element_size);
//     if (array != NULL) {
//         printf("Successfully allocated memory for 1 element: %d\n",
//	array[0]);
//         free(array);
//     }

//     // Test case 6: Multiple allocations
//     for (size_t i = 1; i <= 5; i++) {
//         array = (int *)ft_calloc(i, element_size);
//         if (array != NULL) {
//             printf("Successfully allocated memory for %zu elements.\n", i);
//             free(array);
//         } else {
//             printf("Memory allocation failed for %zu elements.\n", i);
//         }
//     }

//     // Test case 7: Check memory initialization
//     size_t check_elements = 5;
//     array = (int *)ft_calloc(check_elements, element_size);
//     if (array != NULL) {
//         for (size_t i = 0; i < check_elements; i++) {
//             if (array[i] != 0) {
//                 printf("Memory not initialized to zero at index %zu\n", i);
//             }
//         }
//         free(array);
//     }

//     // Test case 8: Negative sizes (if applicable)
//    
// This is more of a theoretical test; ft_calloc should handle this gracefully.
//     array = (int *)ft_calloc(-1, element_size);
	// This may cause undefined behavior
//     if (array == NULL) {
//         printf("Memory allocation failed for negative size as expected.\n");
//     }

//     return (0);
// }