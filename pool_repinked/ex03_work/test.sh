i=1
while [ $i -le 4 ]; do
	echo -e "test $i\n" > "test$i.sh"
	i=$((i + 1))
done
