#question 3 m6:homework 3
        
        LSL X10, X20, #3		//X10 = (a << 3) = 8*a shifting left
	    ADD X10, X10, X19		//X10 = add of d[a]
	    SUB X9, X20, X21		//x9 = (a - b)
	    CBNZ X9, Else			//if(X9 != 0) go to Else
	    LSR X11, X21, #1		//x11 = b/2 shifting right
	    SUB X11, X20, X11		# (a - b/2) = x11
	    BR Done				    //going to done
Else:	LSL X11, X20, #2		//X11 = (a << 2) = 4*a
	    ADD X11, X11, X21		//x11 = (4a + b)
Done:	STUR X11, [X10, #0]		//d[a] = X11