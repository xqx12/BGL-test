/*
 * =====================================================================================
 *
 *       Filename:  example.cpp
 *
 *    Description:  example of boost using
 *
 *        Version:  1.0
 *        Created:  2014年02月03日 14时40分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xiao Qixue (XQX), xiaoqixue_1@163.com
 *   Organization:  Tsinghua University
 *
 * =====================================================================================
 */

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
			in(std::cin), in(), std::cout << (_1 * 3) << " " );
}

