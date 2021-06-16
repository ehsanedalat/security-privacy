while true
do
	radamsa -o tc-%n -n 1000 ./testCases/sample-*
	q=1
	w=2
	while true
	do
		E=$(head -n 1 tc-$q)
		R=$(head -n 1 tc-$w)
		./stack_overflow_with_sanitizer.out $E $R
		X=$?
		q=$((q+1))
		w=$((w+1))
		echo "RES: "$X
		test $X -gt 0 && break
		test $q -gt 1000 && break
	done
	test $X -gt 0 && break
done
