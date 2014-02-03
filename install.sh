#!/bin/bash
#Filename: install.sh
#Last modified: 2014-02-03 14:31
# Author: Qixue Xiao <xiaoqixue_1@163.com>
#Description: No Build about Boost , just a set of header files. 

export BOOST_ROOT=/home/xqx/projects/git/BGL/boost_1_55_0




cd BOOST_ROOT

./bootstrap.sh --prefix=installed

./b2 install


