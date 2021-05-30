while true
do
	q= echo "100" | "radamsa"
	w= echo "100" | "radamsa"
	./a.out $q $w
	X=$?
	echo "RES: "$X
	test $X -gt 0 && break
done
