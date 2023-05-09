/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:29:20 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/09 12:27:37 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <chrono>

class PmergeMe
{
private:
    char **_av;
    std::vector<int> _numbers;
    int arr[3000];
    size_t lenArr;
    std::chrono::microseconds _durationVec;

    std::chrono::microseconds _durationArr;

public:
    PmergeMe();
    PmergeMe(char **av);
    void parce();
    void ft_split(std::string str);
    void merge_insert_sortVect(int l, int r);
    void merge_insert_sortArr(int l, int r);
    void mergeVec(int l, int mid, int r);
    void mergeArr(int l, int m, int r);
    void ft_printBefore();
    void ft_printAfter();
    void ft_printDura();
    int get_size();
    void programe_sort(int l, int r);

    class ErrorException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    ~PmergeMe();
};
