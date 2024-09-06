#pragma once

#include <vector>
#include <list>
#include <iostream>
#include <deque>
#include <stdlib.h>

class PmergeMe
{
	private:
		std::vector<int>	_vec;
		std::deque<int>		_deq;


	public:
		PmergeMe();
		PmergeMe(char **av);
		PmergeMe(const PmergeMe &obj);
		PmergeMe &operator=(const PmergeMe &obj);
		~PmergeMe();

		void	fillContainers(char **av);
		void	sortContainers();

		void	deqSort();
		void	vecSort();
		
		//*VECTORS
		void	printVector();
		void	insertVec(int low, int high);
		void	mergeVec(int low, int mid, int high);
		void	mergeInsertionVec(int low, int high, int insertionThreshold);
		//*DEQUE
		void	printDeque();
		void	insertDeq(int low, int high);
		void	mergeDeq(int left, int mid, int right);
		void	mergeInsertionDeq(int left, int right, int insertionThreshold);
};