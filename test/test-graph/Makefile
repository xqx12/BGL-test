all:
	g++ -I/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/include -L/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/lib test-graph.cpp -o test-graph.elf

test:
	echo "test-----"
	./test-graph.elf
	echo "test-----"

test1:
	g++ -I/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/include -L/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/lib create-graph.cpp -o create-graph.elf
	@echo "-------test-create-graph----"
	./create-graph.elf

test2:
	g++ -I/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/include -L/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/lib create-graph2.cpp -o create-graph2.elf
	@echo "-------test-create-graph2----"
	./create-graph2.elf
	@echo ""
	@echo "-------test-create-graph2----"

test3:
	g++ -I/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/include -L/home/xqx/projects/git/BGL-test/boost_1_55_0/installed/lib create-graph3.cpp -o create-graph3.elf
	@echo "-------test-create-graph3----"
	./create-graph3.elf

clean:
	rm -rf *.o
	rm *.elf -rf 


