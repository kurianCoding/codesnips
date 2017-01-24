docker rm -f cppDev
docker run --name cppDev \
	-ti \
	-v $HOME/code/cpp/code:/home/code \
	--env-file $HOME/code/cpp/conf/cpp.env \
	 $1 /bin/bash
