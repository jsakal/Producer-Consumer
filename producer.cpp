#include <semaphore.h>
#include <cstddef>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

sem_init(comm, 0, 0);

int main() {

	pthread_create(&tProd, NULL, thread, NULL)

	sem_wait(&comm);

	shm_open("Products", O_CREAT | O_RDWR, 0666);
	ftruncate("Products", 2);
	mmap(int *table, 2, PROT_READ | PROT_WRITE, MAP_SHARED, "Products", 0)
	
	for (int i = 0, i < 2, ++i){
		++(*table);
		std::cout << i+1 " products produced." << std::endl;
	}
	
	munmap(int *table, 2);
	
	sm_unlink("Products");
	
	sem_post(&mutex);

}
