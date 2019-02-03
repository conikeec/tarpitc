OBJDIR := target

all:
    
	
	rm -rf "$(OBJDIR)"

	if [ ! -d "$(OBJDIR)" ]; then mkdir $(OBJDIR); fi

	gcc -o target/badRead.out src/badRead.c                  
	gcc -o target/bufferTwo.out src/bufferTwo.c                
	gcc -o target/bufferZeroFixed.out src/bufferZeroFixed.c          
	gcc -o target/integerOverflowFixed.out src/integerOverflowFixed.c     
	gcc -o target/integerOverflowFixed.out src/integerOverflowFixed.c               
	gcc -o target/integerOverflowFixed.out src/integerOverflowFixed.c 
	gcc -o target/underflow.out src/underflow.c
	gcc -o target/bufferOne.out src/bufferOne.c                
	gcc -o target/bufferTwoFixedExploit.out src/bufferTwoFixedExploit.c   
	gcc -o target/formatZero.out src/formatZero.c               
	gcc -o target/integerOverflowOne.out src/integerOverflowOne.c       
	gcc -o target/memoryLeakFixed.out src/memoryLeakFixed.c          
	gcc -o target/underflowFixed.out src/underflowFixed.c
	gcc -o target/bufferOneFixed.out src/bufferOneFixed.c           
	gcc -o target/bufferTwoFixed.out src/bufferTwoFixed.c           
	gcc -o target/formatZeroFixed.out src/formatZeroFixed.c          
	gcc -o target/integerOverflowThree.out src/integerOverflowThree.c     
	gcc -o target/memoryOverread.out src/memoryOverread.c 
	gcc -o target/offByOne.out src/offByOne.c          
	gcc -o target/bufferTwoExploit.out src/bufferTwoExploit.c        
	gcc -o target/bufferZero.out src/bufferZero.c               
	gcc -o target/integerExample.out src/integerExample.c           
	gcc -o target/integerOverflowTwo.out src/integerOverflowTwo.c       
	gcc -o target/memoryUninitialized.out src/memoryUninitialized.c      
	gcc -o target/strlenMissingNull.out src/strlenMissingNull.c