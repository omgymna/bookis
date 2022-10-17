//second part of question 3 m6:homework3
	
    ADDI X9, XZR, #0		# i = 0
	ADD X13, XZR, X19		//X13=address of d[0]
Loop:
	LSL X10, X20, #5		//X10 = (a << 5) = 32*a
	ADD X10, X10, X19		//X10 = add. of d[4a]
	LDUR X10, [X10, #0]		//X10 = d[4*a]      loading
	ADD X10, X10, X22		//X10 = d[4*a] + c
	LSR X11, X21, #1		//X11 = b/2     shifting right
	LSL X11, X11, #3		//X10 = ((b/2) << 3) = 8*(b/2) shifting left
	ADD X11, X11, X19		//X10 = address d[b/2]
	STUR X10, [X11, #0]		//d[b/2] = d[4*a] + c       storing
	ADDI X9, X9, #1			//i = i + 1
	ADDI X13, X13, #8		//X13 = addres of d[i]
	LDUR X10, [X13, #0]		//X10 = d[i]
	SUBS X11, X10, X22 		//use sub to compare
	B.GT Loop			//if(d[i] > c) go to loop again if it is more than c