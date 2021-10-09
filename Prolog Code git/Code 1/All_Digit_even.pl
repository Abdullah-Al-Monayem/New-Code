all_even(Number):-  
	Number<10,
	even(Number).
all_even(Number):-  
	Number>=10,
	Digit is mod(Number,10),
	NewNumber is Number // 10,
	even(Digit),
	all_even(NewNumber).