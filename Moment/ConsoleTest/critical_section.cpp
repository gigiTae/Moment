//#include <iostream>
//#include <thread>
//
//
//std::atomic<int> g_number = 0;
//
//void Count()
//{
//	for (int i = 0; i < 10000; ++i)
//	{
//		++g_number;
//	}
//}
//
//int main()
//{
//	std::thread t1(&Count);
//	std::thread t2(&Count);
//	std::thread t3(&Count);
//
//
//	t1.join();
//	t2.join();
//	t3.join();
//
//	std::cout << g_number;
//
//	return 0;
//}