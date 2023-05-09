/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:29:24 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/09 12:30:54 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **av)
{
    _av = av;
};

void PmergeMe::ft_printBefore()
{
    size_t i = 0;

    std::cout << "Before:  ";
    while (i < _numbers.size())
    {
        std::cout << " " << _numbers[i];
        i++;
    }
    std::cout << std::endl;
};

void PmergeMe::ft_printAfter()
{
    size_t i = 0;

    std::cout << "After:   ";
    while (i < _numbers.size())
    {
        std::cout << " " << _numbers[i];
        i++;
    }
    std::cout << std::endl;

    // i = 0;
    // std::cout << "Array:   ";
    // while (i < lenArr)
    // {
    //     std::cout << " " << arr[i];
    //     i++;
    // }
    // std::cout << std::endl;
};

void PmergeMe::ft_printDura()
{
    std::cout << "Time to process a range of " << get_size() << " elements with std::vector : ";
    std::cout << _durationVec.count() << " microseconds" << std::endl;

    std::cout << "Time to process a range of " << get_size() << " elements with std::array : ";
    std::cout << _durationArr.count() << " microseconds" << std::endl;
};
int PmergeMe::get_size()
{
    return (_numbers.size());
};

void PmergeMe::ft_split(std::string str)
{
    size_t i = 0;
    std::string s;
    int num;
    while (i < str.size())
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
            throw PmergeMe::ErrorException();
        if (str[i] == ' ' || str[i] == '\n')
        {
            if (!s.empty())
            {
                num = std::stoi(s);
                _numbers.push_back(num);
                s.clear();
            }
        }
        else
            s += str[i];
        i++;
    }
    if (!s.empty())
    {
        num = std::stoi(s);
        _numbers.push_back(num);
    }
}

void PmergeMe::parce()
{
    int i = 1;
    while (_av[i])
    {
        ft_split(_av[i]);
        i++;
    }

    if (get_size() > 3000)
        throw PmergeMe::ErrorException();
};

void PmergeMe::programe_sort(int l, int r)
{
    std::chrono::high_resolution_clock::time_point start;
    std::chrono::high_resolution_clock::time_point end;

    size_t i = 0;
    while (i < _numbers.size())
    {
        arr[i] = _numbers[i];
        i++;
    }
    lenArr = i;

    start = std::chrono::high_resolution_clock::now();
    merge_insert_sortVect(l, r);
    end = std::chrono::high_resolution_clock::now();
    _durationVec = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    start = std::chrono::high_resolution_clock::now();
    merge_insert_sortArr(l, r);
    end = std::chrono::high_resolution_clock::now();
    _durationArr = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
};

void PmergeMe::mergeVec(int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    std::vector<int> leftArr(n1), rightArr(n2);
    for (int i = 0; i < n1; i++)
        leftArr[i] = _numbers[l + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = _numbers[mid + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
            _numbers[k++] = leftArr[i++];

        else
            _numbers[k++] = rightArr[j++];
    }
    while (i < n1)
        _numbers[k++] = leftArr[i++];
    while (j < n2)
        _numbers[k++] = rightArr[j++];
};

void PmergeMe::merge_insert_sortVect(int l, int r)
{
    if (r - l + 1 < 4)
    {
        for (int i = l + 1; i <= r; i++)
        {
            int key = _numbers[i];
            int j = i - 1;
            while (j >= l && _numbers[j] > key)
            {
                _numbers[j + 1] = _numbers[j];
                j--;
            }
            _numbers[j + 1] = key;
        }
    }
    else
    {
        int mid = l + (r - l) / 2;
        merge_insert_sortVect(l, mid);
        merge_insert_sortVect(mid + 1, r);
        mergeVec(l, mid, r);
    }
};

void PmergeMe::mergeArr(int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}
void PmergeMe::merge_insert_sortArr(int l, int r)
{
    if (r - l + 1 < 4)
    {
        for (int i = l + 1; i <= r; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= l && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
    else
    {
        int m = l + (r - l) / 2;
        merge_insert_sortArr(l, m);
        merge_insert_sortArr(m + 1, r);
        mergeArr(l, m, r);
    }
};

const char *PmergeMe::ErrorException::what() const throw() { return "Error"; };

PmergeMe::~PmergeMe()
{
}
