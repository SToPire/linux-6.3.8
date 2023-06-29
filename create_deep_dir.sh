#!/bin/bash

deep=100
base_dir="/home/stopire/deep_dir"

# 创建目录层级
for ((i=1; i<=deep; i++))
do
	    base_dir="$base_dir/dir$i"
	        mkdir "$base_dir"
	done

	# 在最底层目录中写入文件
	file_path="$base_dir/file.txt"
	echo "Hello, World!" > "$file_path"

	echo "目录层次已创建，文件已写入到 $file_path"
