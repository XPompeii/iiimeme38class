rm -f ./tmp
touch ./tmp
chmod 777 ./tmp
for var in {1..10}
do
	test -e "./$var.HTM" && rm "./$var.HTM"
	touch "./$var.HTM"
	chmod 777 "$var.HTM"
	echo "TEST$var">> ./tmp
done
cat ./tmp | tee {1..10}.HTM
