------------------------------------------------------------------------------------------------------------------------
scanf - Read formatted input
Example::
int num;
scanf("%d", &num);
------------------------------------------------------------------------------------------------------------------------
strlen - Calculate string length
Example::
char str[] = "Hello";
int length = strlen(str);
------------------------------------------------------------------------------------------------------------------------
strcpy - Copy strings
Example::
char source[] = "Hello";
char destination[10];
strcpy(destination, source);
------------------------------------------------------------------------------------------------------------------------
strcat - Concatenate strings
Example::
char str1[] = "Hello";
char str2[] = " World";
strcat(str1, str2);
------------------------------------------------------------------------------------------------------------------------
strcmp - Compare strings
Example::
char str1[] = "apple";
char str2[] = "banana";
int result = strcmp(str1, str2);
------------------------------------------------------------------------------------------------------------------------
atoi - Convert string to integer
Example::
char str[] = "12345";
int num = atoi(str);
------------------------------------------------------------------------------------------------------------------------
atof - Convert string to float
Example::
char str[] = "3.14";
float pi = atof(str);
------------------------------------------------------------------------------------------------------------------------
rand - Generate random numbers
Example::
int randomNum = rand() % 100; // Generate a random number between 0 and 99
------------------------------------------------------------------------------------------------------------------------
srand - Seed the random number generator
Example::
srand(time(NULL)); // Seed the random number generator with the current time
------------------------------------------------------------------------------------------------------------------------
abs - Calculate absolute value
Example::
int num = -5;
int absValue = abs(num);
------------------------------------------------------------------------------------------------------------------------
sqrt - Calculate square root
Example::
double x = 16.0;
double result = sqrt(x);
------------------------------------------------------------------------------------------------------------------------
pow - Calculate power
Example::
double base = 2.0;
double exponent = 3.0;
double result = pow(base, exponent);
------------------------------------------------------------------------------------------------------------------------
ceil - Round up to the nearest integer
Example::
double x = 3.14;
double result = ceil(x);
------------------------------------------------------------------------------------------------------------------------
floor - Round down to the nearest integer
Example::
double x = 3.14;
double result = floor(x);
------------------------------------------------------------------------------------------------------------------------
fabs - Calculate absolute value of a floating-point number
Example::
double x = -3.14;
double result = fabs(x);
------------------------------------------------------------------------------------------------------------------------
getchar - Read a character from standard input
Example::
char ch = getchar();
------------------------------------------------------------------------------------------------------------------------
putchar - Write a character to standard output
Example::
char ch = 'A';
putchar(ch);
------------------------------------------------------------------------------------------------------------------------
gets - Read a string from standard input (unsafe, avoid using)
Example::
char str[50];
gets(str);
------------------------------------------------------------------------------------------------------------------------
fgets - Read a line from a file or stream
Example::
char buffer[50];
FILE *file = fopen("myfile.txt", "r");
fgets(buffer, sizeof(buffer), file);
fclose(file);
------------------------------------------------------------------------------------------------------------------------
fputs - Write a string to a file or stream
Example::
char str[] = "Hello, File!";
FILE *file = fopen("myfile.txt", "w");
fputs(str, file);
fclose(file);
------------------------------------------------------------------------------------------------------------------------
fscanf - Read formatted input from a file or stream
Example::
int num;
FILE *file = fopen("data.txt", "r");
fscanf(file, "%d", &num);
fclose(file);
------------------------------------------------------------------------------------------------------------------------
fprintf - Write formatted output to a file or stream
Example::
int num = 42;
FILE *file = fopen("data.txt", "w");
fprintf(file, "The answer is %d\n", num);
fclose(file);
------------------------------------------------------------------------------------------------------------------------
fseek - Move file pointer to a specific position
Example::
FILE *file = fopen("data.txt", "r");
fseek(file, 0L, SEEK_END); // Move to the end of the file
long size = ftell(file); // Get the file size
fclose(file);
------------------------------------------------------------------------------------------------------------------------
malloc - Allocate dynamic memory
Example::
int *arr = (int *)malloc(5 * sizeof(int));
------------------------------------------------------------------------------------------------------------------------
free - Deallocate dynamic memory
Example::
free(arr);
------------------------------------------------------------------------------------------------------------------------
calloc - Allocate and initialize dynamic memory
Example::
int *arr = (int *)calloc(5, sizeof(int));
------------------------------------------------------------------------------------------------------------------------
realloc - Resize dynamic memory
Example::
arr = (int *)realloc(arr, 10 * sizeof(int));
------------------------------------------------------------------------------------------------------------------------
memcpy - Copy memory
Example::
int source[] = {1, 2, 3, 4, 5};
int destination[5];
memcpy(destination, source, sizeof(source));
------------------------------------------------------------------------------------------------------------------------
memmove - Copy memory with overlapping regions
Example::
int data[] = {1, 2, 3, 4, 5};
memmove(data + 1, data, 4 * sizeof(int));
------------------------------------------------------------------------------------------------------------------------
memset - Set memory to a specific value
Example::
int arr[5];
memset(arr, 0, sizeof(arr)); // Initialize the array with zeros
------------------------------------------------------------------------------------------------------------------------
fclose - Close a file
Example::
FILE *file = fopen("myfile.txt", "r");
fclose(file);
------------------------------------------------------------------------------------------------------------------------
remove - Delete a file
Example::
remove("myfile.txt");
------------------------------------------------------------------------------------------------------------------------
rename - Rename a file
Example::
rename("oldfile.txt", "newfile.txt");
------------------------------------------------------------------------------------------------------------------------
exit - Terminate the program
Example::
exit(0); // Exit the program with a status code of 0 (success)
------------------------------------------------------------------------------------------------------------------------
isdigit - Check if a character is a digit
Example::
char ch = '5';
if (isdigit(ch)) {
    // ch is a digit
}
------------------------------------------------------------------------------------------------------------------------
isalpha - Check if a character is an alphabet character
Example::
char ch = 'A';
if (isalpha(ch)) {
    // ch is an alphabet character
}
------------------------------------------------------------------------------------------------------------------------
isalnum - Check if a character is an alphanumeric character
Example::
char ch = '7';
if (isalnum(ch)) {
    // ch is an alphanumeric character
}
------------------------------------------------------------------------------------------------------------------------
islower - Check if a character is a lowercase letter
Example::
char ch = 'a';
if (islower(ch)) {
    // ch is a lowercase letter
}
------------------------------------------------------------------------------------------------------------------------
isupper - Check if a character is an uppercase letter
Example::
char ch = 'Z';
if (isupper(ch)) {
    // ch is an uppercase letter
}
------------------------------------------------------------------------------------------------------------------------
tolower - Convert a character to lowercase
Example::
char ch = 'A';
char lowerCh = tolower(ch);
------------------------------------------------------------------------------------------------------------------------
toupper - Convert a character to uppercase
Example::
char ch = 'a';
char upperCh = toupper(ch);
------------------------------------------------------------------------------------------------------------------------
getch - Get a character from standard input without waiting for Enter (platform-specific, not standard)
Example::
char ch = getch();
------------------------------------------------------------------------------------------------------------------------
getche - Get a character from standard input without waiting for Enter and echo it (platform-specific, not standard)
Example::
char ch = getche();
------------------------------------------------------------------------------------------------------------------------
strncpy - Copy a specified number of characters from one string to another
Example::
char source[] = "Hello, World!";
char destination[10];
strncpy(destination, source, 5); // Copy the first 5 characters
------------------------------------------------------------------------------------------------------------------------
strncat - Concatenate a specified number of characters from one string to another
Example::
char str1[] = "Hello";
char str2[] = " World!";
strncat(str1, str2, 5); // Concatenate the first 5 characters of str2
------------------------------------------------------------------------------------------------------------------------
strncmp - Compare a specified number of characters from two strings
Example::
char str1[] = "apple";
char str2[] = "banana";
int result = strncmp(str1, str2, 3); // Compare the first 3 characters
------------------------------------------------------------------------------------------------------------------------
strchr - Find the first occurrence of a character in a string
Example::
char str[] = "Hello, World!";
char *ptr = strchr(str, 'o'); // Find the first 'o'
------------------------------------------------------------------------------------------------------------------------
strrchr - Find the last occurrence of a character in a string
Example::
char str[] = "Hello, World!";
char *ptr = strrchr(str, 'o'); // Find the last 'o'
------------------------------------------------------------------------------------------------------------------------
strstr - Find the first occurrence of a substring in a string
Example::
char str[] = "Hello, World!";
char *ptr = strstr(str, "World"); // Find "World"
------------------------------------------------------------------------------------------------------------------------
strtok - Tokenize a string
Example::
char str[] = "apple,banana,cherry";
char *token = strtok(str, ",");
while (token != NULL) {
    // Process each token
    token = strtok(NULL, ",");
}
------------------------------------------------------------------------------------------------------------------------
memcpy - Copy memory block
Example::
int source[] = {1, 2, 3, 4, 5};
int destination[5];
memcpy(destination, source, sizeof(source));
------------------------------------------------------------------------------------------------------------------------
memmove - Move memory block
Example::
int data[] = {1, 2, 3, 4, 5};
memmove(data + 1, data, 4 * sizeof(int));
------------------------------------------------------------------------------------------------------------------------
memset - Set memory block
Example::
int arr[5];
memset(arr, 0, sizeof(arr)); // Initialize the array with zeros
------------------------------------------------------------------------------------------------------------------------
qsort - Sort an array
Example::
int arr[] = {5, 2, 8, 1, 6};
int n = sizeof(arr) / sizeof(arr[0]);
qsort(arr, n, sizeof(int), compareFunction);
------------------------------------------------------------------------------------------------------------------------
time - Get current time
Example::
time_t t;
time(&t);
printf("Current time: %s", ctime(&t));
------------------------------------------------------------------------------------------------------------------------
difftime - Calculate time difference
Example::
time_t start, end;
time(&start);
// Perform some operations
time(&end);
double seconds = difftime(end, start);
------------------------------------------------------------------------------------------------------------------------
localtime - Convert time to local time
Example::
time_t t;
struct tm *localTime;
time(&t);
localTime = localtime(&t);
printf("Local time: %s", asctime(localTime));
------------------------------------------------------------------------------------------------------------------------
asctime - Convert time structure to a string
Example::
struct tm timeinfo;
timeinfo.tm_hour = 12;
timeinfo.tm_min = 30;
timeinfo.tm_sec = 0;
char *timeStr = asctime(&timeinfo);
------------------------------------------------------------------------------------------------------------------------
strftime - Format time as a string
Example::
time_t t;
struct tm *localTime;
char buffer[80];
time(&t);
localTime = localtime(&t);
strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);
------------------------------------------------------------------------------------------------------------------------
open - Open a file or create it
Example::
int fd = open("myfile.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
------------------------------------------------------------------------------------------------------------------------
read - Read data from a file
Example::
int fd = open("myfile.txt", O_RDONLY);
char buffer[100];
ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
------------------------------------------------------------------------------------------------------------------------
write - Write data to a file
Example::
int fd = open("myfile.txt", O_WRONLY);
char data[] = "Hello, File!";
ssize_t bytesWritten = write(fd, data, strlen(data));
------------------------------------------------------------------------------------------------------------------------
close - Close a file descriptor
Example::
close(fd);
------------------------------------------------------------------------------------------------------------------------
lseek - Move file pointer to a specific position (for large files)
Example::
off_t offset = lseek(fd, 100, SEEK_SET); // Move to the 100th byte from the beginning
------------------------------------------------------------------------------------------------------------------------
unlink - Remove a directory entry (delete a file)
Example::
unlink("myfile.txt");
------------------------------------------------------------------------------------------------------------------------
rmdir - Remove a directory
Example::
rmdir("mydir");
------------------------------------------------------------------------------------------------------------------------
mkdir - Create a directory
Example::
mkdir("mydir", 0755); // Create a directory with read, write, and execute permissions for the owner
------------------------------------------------------------------------------------------------------------------------
chdir - Change current working directory
Example::
chdir("/path/to/directory");
------------------------------------------------------------------------------------------------------------------------
getcwd - Get the current working directory
Example::
char buffer[PATH_MAX];
getcwd(buffer, sizeof(buffer));
------------------------------------------------------------------------------------------------------------------------
system - Execute a shell command
Example::
int result = system("ls -l"); // List files in the current directory
------------------------------------------------------------------------------------------------------------------------
perror - Print an error message
Example::
FILE *file = fopen("nonexistent.txt", "r");
if (file == NULL) {
    perror("Error opening file");
}
------------------------------------------------------------------------------------------------------------------------
strerror - Get the error message for an error code
Example::
int error = errno;
printf("Error: %s\n", strerror(error));
------------------------------------------------------------------------------------------------------------------------
getenv - Get the value of an environment variable
Example::
char *path = getenv("PATH");
------------------------------------------------------------------------------------------------------------------------
setenv - Set the value of an environment variable
Example::
setenv("MY_VARIABLE", "my_value", 1); // 1 indicates to overwrite if the variable already exists
------------------------------------------------------------------------------------------------------------------------
unsetenv - Unset an environment variable
Example::
unsetenv("MY_VARIABLE");
------------------------------------------------------------------------------------------------------------------------
getpid - Get the process ID of the current process
Example::
pid_t pid = getpid();
------------------------------------------------------------------------------------------------------------------------
getppid - Get the parent process ID
Example::
pid_t ppid = getppid();
------------------------------------------------------------------------------------------------------------------------
fork - Create a new process (child)
Example::
pid_t childPid = fork();
if (childPid == 0) {
    // Code for the child process
} else if (childPid > 0) {
    // Code for the parent process
} else {
    // Error handling for fork failure
}
------------------------------------------------------------------------------------------------------------------------
wait - Wait for a child process to exit
Example::
int status;
pid_t childPid = wait(&status);
------------------------------------------------------------------------------------------------------------------------
exec - Execute a new program in the current process
Example::
execl("/bin/ls", "ls", "-l", NULL);
------------------------------------------------------------------------------------------------------------------------
pipe - Create a pipe for interprocess communication
Example::
int pipefd[2];
pipe(pipefd);
------------------------------------------------------------------------------------------------------------------------
dup - Duplicate a file descriptor
Example::
int newfd = dup(oldfd);
------------------------------------------------------------------------------------------------------------------------
dup2 - Duplicate a file descriptor to a specific file descriptor number
Example::
dup2(oldfd, newfd);
------------------------------------------------------------------------------------------------------------------------
socket - Create a socket
Example (TCP socket):
int sockfd = socket(AF_INET, SOCK_STREAM, 0);
------------------------------------------------------------------------------------------------------------------------
bind - Bind a socket to a specific address and port
Example::
struct sockaddr_in serverAddr;
serverAddr.sin_family = AF_INET;
serverAddr.sin_addr.s_addr = INADDR_ANY;
serverAddr.sin_port = htons(8080);
bind(sockfd, (struct sockaddr *)&serverAddr, sizeof(serverAddr));
------------------------------------------------------------------------------------------------------------------------
listen - Listen for incoming connections on a socket
Example::
listen(sockfd, 5); // Listen for up to 5 pending connections
------------------------------------------------------------------------------------------------------------------------
accept - Accept an incoming connection on a listening socket
Example::
struct sockaddr_in clientAddr;
socklen_t clientLen = sizeof(clientAddr);
int clientSocket = accept(sockfd, (struct sockaddr *)&clientAddr, &clientLen);
------------------------------------------------------------------------------------------------------------------------
connect - Connect to a remote server
Example::
struct sockaddr_in serverAddr;
serverAddr.sin_family = AF_INET;
serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
serverAddr.sin_port = htons(8080);
connect(sockfd, (struct sockaddr *)&serverAddr, sizeof(serverAddr));
------------------------------------------------------------------------------------------------------------------------
send - Send data over a socket
Example::
char message[] = "Hello, Server!";
send(sockfd, message, strlen(message), 0);
------------------------------------------------------------------------------------------------------------------------
recv - Receive data from a socket
Example::
char buffer[1024];
int bytesReceived = recv(sockfd, buffer, sizeof(buffer), 0);
------------------------------------------------------------------------------------------------------------------------
close - Close a socket
Example::
close(sockfd);
------------------------------------------------------------------------------------------------------------------------
pthread_create - Create a new thread
Example::
pthread_t tid;
pthread_create(&tid, NULL, threadFunction, NULL);
------------------------------------------------------------------------------------------------------------------------
pthread_join - Wait for a thread to exit
Example::
pthread_join(tid, NULL);
------------------------------------------------------------------------------------------------------------------------
pthread_mutex_init - Initialize a mutex
Example::
pthread_mutex_t mutex;
pthread_mutex_init(&mutex, NULL);
------------------------------------------------------------------------------------------------------------------------
pthread_mutex_lock - Lock a mutex
Example::
pthread_mutex_lock(&mutex);
------------------------------------------------------------------------------------------------------------------------
pthread_mutex_unlock - Unlock a mutex
Example::
pthread_mutex_unlock(&mutex);
------------------------------------------------------------------------------------------------------------------------
pthread_cond_init - Initialize a condition variable
Example::
pthread_cond_t cond;
pthread_cond_init(&cond, NULL);
pthread_cond_wait - Wait on a condition variable
Example::
pthread_cond_wait(&cond, &mutex);
------------------------------------------------------------------------------------------------------------------------
pthread_cond_signal - Signal a condition variable
Example::::c pthread_cond_signal(&cond);
------------------------------------------------------------------------------------------------------------------------
pthread_cond_broadcast - Broadcast a condition variable
Example::::c pthread_cond_broadcast(&cond);
------------------------------------------------------------------------------------------------------------------------
pthread_rwlock_init - Initialize a read-write lock
Example::::c pthread_rwlock_t rwlock; pthread_rwlock_init(&rwlock, NULL);
------------------------------------------------------------------------------------------------------------------------
pthread_rwlock_rdlock - Acquire a read lock
Example::::c pthread_rwlock_rdlock(&rwlock);
------------------------------------------------------------------------------------------------------------------------
pthread_rwlock_wrlock - Acquire a write lock
Example::::c pthread_rwlock_wrlock(&rwlock);
------------------------------------------------------------------------------------------------------------------------
pthread_rwlock_unlock - Release a read-write lock
Example::::c pthread_rwlock_unlock(&rwlock);
------------------------------------------------------------------------------------------------------------------------
sem_init - Initialize a semaphore
Example::::c sem_t semaphore; sem_init(&semaphore, 0, 1); // Initialize with initial value 1
------------------------------------------------------------------------------------------------------------------------
sem_wait - Wait on a semaphore
Example::::c sem_wait(&semaphore);
------------------------------------------------------------------------------------------------------------------------
sem_post - Post (signal) a semaphore
Example::::c sem_post(&semaphore);
------------------------------------------------------------------------------------------------------------------------
sem_destroy - Destroy a semaphore
Example::::c sem_destroy(&semaphore);
------------------------------------------------------------------------------------------------------------------------
Set a bit at a specific position (bitwise OR):
unsigned int num = 5; // Binary: 0000 0101
unsigned int mask = 1 << 2; // Set bit 2 (zero-based) to 1
num |= mask; // Result: 0000 1101 (13 in decimal)
------------------------------------------------------------------------------------------------------------------------
Clear a bit at a specific position (bitwise AND with complement):
unsigned int num = 13; // Binary: 0000 1101
unsigned int mask = ~(1 << 3); // Clear bit 3 (zero-based)
num &= mask; // Result: 0000 0101 (5 in decimal)
------------------------------------------------------------------------------------------------------------------------
Toggle a bit at a specific position (bitwise XOR):
unsigned int num = 5; // Binary: 0000 0101
unsigned int mask = 1 << 1; // Toggle bit 1 (zero-based)
num ^= mask; // Result: 0000 0111 (7 in decimal)
------------------------------------------------------------------------------------------------------------------------
Check if a specific bit is set:
unsigned int num = 13; // Binary: 0000 1101
unsigned int mask = 1 << 2; // Check bit 2 (zero-based)
if (num & mask) {
    // Bit is set
}
------------------------------------------------------------------------------------------------------------------------
Check if a specific bit is clear:
unsigned int num = 5; // Binary: 0000 0101
unsigned int mask = 1 << 1; // Check bit 1 (zero-based)
if (!(num & mask)) {
    // Bit is clear
}
------------------------------------------------------------------------------------------------------------------------
Set multiple bits at once:
unsigned int num = 0; // All bits initially clear
unsigned int mask = (1 << 3) | (1 << 5); // Set bits 3 and 5 (zero-based)
num |= mask; // Result: 0010 0100 (36 in decimal)
------------------------------------------------------------------------------------------------------------------------
Clear multiple bits at once:
unsigned int num = 36; // Binary: 0010 0100
unsigned int mask = ~(1 << 2) & ~(1 << 5); // Clear bits 2 and 5 (zero-based)
num &= mask; // Result: 0000 0100 (4 in decimal)
------------------------------------------------------------------------------------------------------------------------
Toggle multiple bits at once:
unsigned int num = 4; // Binary: 0000 0100
unsigned int mask = (1 << 1) | (1 << 3); // Toggle bits 1 and 3 (zero-based)
num ^= mask; // Result: 0000 0001 (1 in decimal)
------------------------------------------------------------------------------------------------------------------------
Get the value of a specific bit:
unsigned int num = 9; // Binary: 0000 1001
unsigned int bitValue = (num >> 3) & 1; // Get the value of bit 3 (zero-based)
------------------------------------------------------------------------------------------------------------------------
Set a bit to 1 without changing the other bits:
unsigned int num = 12; // Binary: 0000 1100
unsigned int bitPosition = 2; // Set bit 2 (zero-based) to 1
num |= (1 << bitPosition); // Result: 0000 1100 (12 in decimal)
------------------------------------------------------------------------------------------------------------------------
Clear a bit to 0 without changing the other bits:
unsigned int num = 12; // Binary: 0000 1100
unsigned int bitPosition = 3; // Clear bit 3 (zero-based)
num &= ~(1 << bitPosition); // Result: 0000 0100 (4 in decimal)
------------------------------------------------------------------------------------------------------------------------
Swap two variables using XOR (no temporary variable needed):
int a = 5;
int b = 7;
a ^= b;
b ^= a;
a ^= b;
// Now a=7 and b=5
Count the number of set bits (1s) in an integer (population count or Hamming weight):
unsigned int num = 13; // Binary: 0000 1101
int count = 0;
while (num) {
    count += num & 1;
    num >>= 1;
}
------------------------------------------------------------------------------------------------------------------------
// count will be 3
Find the least significant set bit (rightmost set bit):
unsigned int num = 28; // Binary: 0001 1100
int position = 0;
while (!(num & (1 << position))) {
    position++;
}
// position will be 2
------------------------------------------------------------------------------------------------------------------------
Check if an integer is a power of 2:
int num = 16;
if (num && !(num & (num - 1))) {
    // num is a power of 2
}
------------------------------------------------------------------------------------------------------------------------
Extract a specific field of bits from an integer:
unsigned int num = 0x3A5; // Binary: 0011 1010 0101
unsigned int mask = 0x1F; // Extract 5 bits (low-order bits)
unsigned int result = num & mask; // Result: 0101 (5 in decimal)
------------------------------------------------------------------------------------------------------------------------
Set all bits in a range to 1:
unsigned int num = 0x3A5; // Binary: 0011 1010 0101
unsigned int startBit = 2;
unsigned int endBit = 6;
unsigned int mask = ((1 << (endBit - startBit + 1)) - 1) << startBit;
num |= mask; // Result: 0011 1111 1101 (509 in decimal)
------------------------------------------------------------------------------------------------------------------------
Clear all bits in a range to 0:
unsigned int num = 0x3A5; // Binary: 0011 1010 0101
unsigned int startBit = 2;
unsigned int endBit = 6;
unsigned int mask = (((1 << (endBit - startBit + 1)) - 1) << startBit) ^ UINT_MAX;
num &= mask; // Result: 0000 0010 0001 (33 in decimal)
------------------------------------------------------------------------------------------------------------------------
Rotate bits left:
unsigned int num = 0x0A5; // Binary: 0000 1010 0101
unsigned int shift = 3;
unsigned int rotated = (num << shift) | (num >> (sizeof(num) * 8 - shift));
// Result: 1010 0101 0000 (26944 in decimal)
------------------------------------------------------------------------------------------------------------------------
Rotate bits right:
unsigned int num = 0x0A5; // Binary: 0000 1010 0101
unsigned int shift = 3;
unsigned int rotated = (num >> shift) | (num << (sizeof(num) * 8 - shift));
// Result: 1010 1001 0000 (16896 in decimal)
------------------------------------------------------------------------------------------------------------------------
Swap adjacent pairs of bits:
unsigned int num = 0x0A5; // Binary: 0000 1010 0101
unsigned int swapped = ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555) << 1);
// Result: 0101 0100 1010 (1482 in decimal)
------------------------------------------------------------------------------------------------------------------------
Reverse bits in an integer:
unsigned int num = 0x0A5; // Binary: 0000 1010 0101
unsigned int reversed = 0;
int numBits = sizeof(num) * 8;
for (int i = 0; i < numBits; i++) {
    reversed |= ((num >> i) & 1) << (numBits - 1 - i);
}
// Result: 1010 0101 0000 (16896 in decimal)
------------------------------------------------------------------------------------------------------------------------
Count trailing zeros (rightmost zeros) in an integer:
unsigned int num = 0x0A5000; // Binary: 0000 1010 0101 0000 0000
int count = 0;
while ((num & 1) == 0) {
    count++;
    num >>= 1;
}
// count will be 5
------------------------------------------------------------------------------------------------------------------------
Count leading zeros (leftmost zeros) in an integer:
unsigned int num = 0x0A5000; // Binary: 0000 1010 0101 0000 0000
int count = 0;
int numBits = sizeof(num) * 8;
while (numBits > 0 && (num & (1 << (numBits - 1))) == 0) {
    count++;
    numBits--;
}
// count will be 11
------------------------------------------------------------------------------------------------------------------------
Swap the value of two bits in an integer:
unsigned int num = 0x0A5; // Binary: 0000 1010 0101
int bit1 = 2;
int bit2 = 5;
unsigned int bit1Value = (num >> bit1) & 1;
unsigned int bit2Value = (num >> bit2) & 1;
num = (num & ~(1 << bit1)) | (bit2Value << bit1);
num = (num & ~(1 << bit2)) | (bit1Value << bit2);
// Result: 0010 0101 (37 in decimal)
------------------------------------------------------------------------------------------------------------------------
Get the highest set bit (most significant set bit):
unsigned int num = 0x3A5; // Binary: 0011 1010 0101
int position = 0;
int numBits = sizeof(num) * 8;
while (numBits > 0) {
    if (num & (1 << (numBits - 1))) {
        position = numBits - 1;
        break;
    }
    numBits--;
}
// position will be 9
------------------------------------------------------------------------------------------------------------------------
Extract and isolate the lowest set bit:
unsigned int num = 0x3A5; // Binary: 0011 1010 0101
unsigned int lowestBit = num & -num; // Extract and isolate the lowest set bit
// lowestBit will be 0x01 (1 in decimal)
------------------------------------------------------------------------------------------------------------------------
Set all bits to the right of the lowest set bit to 1:
unsigned int num = 0x3A5; // Binary: 0011 1010 0101
unsigned int lowestBit = num & -num; // Extract and isolate the lowest set bit
unsigned int result = num | (lowestBit - 1);
// Result: 0011 1010 0111 (951 in decimal)
------------------------------------------------------------------------------------------------------------------------
Reverse bits within bytes, but not across bytes:
unsigned int num = 0x0A5C3B10; // Binary: 0000 1010 0101 1100 0011 1011 0001 0000
unsigned int reversed = 0;
unsigned int mask = 0xFF;
for (int i = 0; i < sizeof(num); i++) {
    reversed = (reversed << 8) | ((num >> (i * 8)) & mask);
}
// Result: 0000 0001 0001 1011 0011 1101 0100 0100 (17743876 in decimal)
------------------------------------------------------------------------------------------------------------------------
Find the position (index) of the only set bit in a power of 2:
unsigned int num = 16; // Binary: 0001 0000
int position = 0;
if (num && !(num & (num - 1))) {
    while (num >>= 1) {
        position++;
    }
}
// position will be 4
------------------------------------------------------------------------------------------------------------------------
Declare a pointer to an integer variable:
int x = 10;
int *ptr = &x;
------------------------------------------------------------------------------------------------------------------------
Access the value pointed to by a pointer:
int x = 10;
int *ptr = &x;
int value = *ptr; // value will be 10
------------------------------------------------------------------------------------------------------------------------
Declare and initialize a pointer in one line:
int x = 10;
int *ptr = &x;
------------------------------------------------------------------------------------------------------------------------
Declare a pointer without initializing it (uninitialized pointer):
int *ptr;
------------------------------------------------------------------------------------------------------------------------
Change the value pointed to by a pointer:
int x = 10;
int *ptr = &x;
*ptr = 20; // x will now be 20
------------------------------------------------------------------------------------------------------------------------
Declare and use a pointer to a character (string):
char *str = "Hello, World!";
------------------------------------------------------------------------------------------------------------------------
Declare an array and a pointer to the first element:
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;
------------------------------------------------------------------------------------------------------------------------
Access elements of an array using a pointer:
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;
int element = ptr[2]; // element will be 3
------------------------------------------------------------------------------------------------------------------------
Increment a pointer to access the next element of an array:
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;
ptr++; // Now ptr points to the second element (2)
------------------------------------------------------------------------------------------------------------------------
Declare and use a pointer to a pointer (double pointer):
int x = 10;
int *ptr1 = &x;
int **ptr2 = &ptr1;
------------------------------------------------------------------------------------------------------------------------
Pass a pointer as a function argument:
void modifyValue(int *ptr) {
    (*ptr)++; // Increment the value pointed to by ptr
}

int x = 10;
modifyValue(&x);
------------------------------------------------------------------------------------------------------------------------
Return a pointer from a function:
int *createArray(int size) {
    int *arr = malloc(size * sizeof(int));
    // Initialize and populate arr
    return arr;
}
------------------------------------------------------------------------------------------------------------------------
Free memory allocated with malloc using a pointer:
int *arr = malloc(5 * sizeof(int));
// Use arr
free(arr);
------------------------------------------------------------------------------------------------------------------------
Declare a function pointer:
int add(int a, int b) {
    return a + b;
}

int (*funcPtr)(int, int) = add;
------------------------------------------------------------------------------------------------------------------------
Call a function through a function pointer:
int result = funcPtr(2, 3); // result will be 5
------------------------------------------------------------------------------------------------------------------------
Use an array of function pointers:
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int (*funcArray[2])(int, int) = {add, subtract};
------------------------------------------------------------------------------------------------------------------------
Call a function from an array of function pointers:
int result = funcArray[0](2, 3); // result will be 5 (calling "add")
------------------------------------------------------------------------------------------------------------------------
Declare a pointer to a function that takes no arguments and returns void:
void (*funcPtr)(void);
------------------------------------------------------------------------------------------------------------------------
Declare a pointer to a function that takes an integer argument and returns a float:
float (*funcPtr)(int);
------------------------------------------------------------------------------------------------------------------------
Declare a function that takes a pointer to a function as an argument:

void operate(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    // Use the result
}
------------------------------------------------------------------------------------------------------------------------
Declare a typedef for a function pointer:

typedef int (*MathFunction)(int, int);

int add(int a, int b) {
    return a + b;
}

MathFunction funcPtr = add;
------------------------------------------------------------------------------------------------------------------------
Use a pointer to access a structure member:

struct Point {
    int x;
    int y;
};

struct Point p;
p.x = 5;
struct Point *ptr = &p;
int xValue = ptr->x; // xValue will be 5
------------------------------------------------------------------------------------------------------------------------
Pass a pointer to a structure to a function:

struct Point {
    int x;
    int y;
};

void printPoint(struct Point *ptr) {
    printf("(%d, %d)\n", ptr->x, ptr->y);
}

struct Point p;
p.x = 5;
p.y = 10;
printPoint(&p);
------------------------------------------------------------------------------------------------------------------------
Use a pointer to a function inside a structure:

typedef int (*MathOperation)(int, int);

struct Calculator {
    MathOperation operation;
};

int add(int a, int b) {
    return a + b;
}

struct Calculator calc;
calc.operation = add;
int result = calc.operation(3, 4); // result will be 7
------------------------------------------------------------------------------------------------------------------------
Declare an array of function pointers inside a structure:

typedef int (*MathOperation)(int, int);

struct Calculator {
    MathOperation operations[2];
};

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

struct Calculator calc;
calc.operations[0] = add;
calc.operations[1] = subtract;
int result1 = calc.operations[0](3, 4); // result1 will be 7 (calling "add")
int result2 = calc.operations[1](3, 4); // result2 will be -1 (calling "subtract")
------------------------------------------------------------------------------------------------------------------------
Use a pointer to a function as a callback:

typedef void (*Callback)(void);

void performTask(Callback callback) {
    // Perform some task
    callback(); // Call the callback function
}

void myCallback() {
    printf("Callback function called!\n");
}

performTask(myCallback);
------------------------------------------------------------------------------------------------------------------------
Pass an array to a function using a pointer:

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arr[] = {1, 2, 3, 4, 5};
printArray(arr, 5);
------------------------------------------------------------------------------------------------------------------------
Pass a multidimensional array to a function using a pointer:

void printMatrix(int (*matrix)[3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
printMatrix(matrix, 3, 3);
------------------------------------------------------------------------------------------------------------------------
Use a pointer to navigate through an array:

int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr;
for (int i = 0; i < 5; i++) {
    printf("%d ", *ptr);
    ptr++;
}
------------------------------------------------------------------------------------------------------------------------
Pass a variable number of arguments to a function using a pointer:

#include <stdarg.h>

double average(int count, ...) {
    va_list args;
    va_start(args, count);

    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        double num = va_arg(args, double);
        sum += num;
    }

    va_end(args);

    return sum / count;
}

double avg = average(5, 1.0, 2.0, 3.0, 4.0, 5.0); // avg will be 3.0
------------------------------------------------------------------------------------------------------------------------
Pass a pointer to an array of function pointers:

typedef int (*MathOperation)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void performOperations(MathOperation *operations, int size) {
    for (int i = 0; i < size; i++) {
        int result = operations[i](3, 4);
        printf("Result: %d\n", result);
    }
}

MathOperation operations[] = {add, subtract};
performOperations(operations, 2);
------------------------------------------------------------------------------------------------------------------------
Pass a pointer to a constant variable to prevent modification:

int x = 10;
const int *ptr = &x;
// *ptr = 20; // Error: Cannot modify a constant variable through ptr
------------------------------------------------------------------------------------------------------------------------
Use a pointer to a constant variable to access but not modify the value:

int x = 10;
const int *ptr = &x;
int value = *ptr; // Access the value (value will be 10)
------------------------------------------------------------------------------------------------------------------------
Declare a constant pointer to an integer:

int x = 10;
int *const ptr = &x;
// ptr = &y; // Error: Cannot change the pointer itself
------------------------------------------------------------------------------------------------------------------------
Declare a constant pointer to a constant integer:

int x = 10;
const int *const ptr = &x;
// *ptr = 20; // Error: Cannot modify a constant variable through ptr
// ptr = &y; // Error: Cannot change the pointer itself
------------------------------------------------------------------------------------------------------------------------
Use sizeof with pointers to determine the size of data types:

int x = 10;
double y = 3.14;
int *ptr1 = &x;
double *ptr2 = &y;
size_t size1 = sizeof(*ptr1); // Size of int
size_t size2 = sizeof(*ptr2); // Size of double
------------------------------------------------------------------------------------------------------------------------
Declare an array of pointers:

int x = 10;
int y = 20;
int z = 30;
int *ptrArray[] = {&x, &y, &z};
------------------------------------------------------------------------------------------------------------------------
Use pointers to create a dynamic array:

int *dynamicArray = malloc(5 * sizeof(int));
// Initialize and use dynamicArray
free(dynamicArray); // Free the memory when done
------------------------------------------------------------------------------------------------------------------------
Declare a function that takes an array of integers and returns a pointer:

int *processArray(int arr[], int size) {
    int *result = malloc(size * sizeof(int));
    // Perform operations on arr and store the result in result
    return result;
}

int arr[] = {1, 2, 3, 4, 5};
int *result = processArray(arr, 5);
// Use the result
free(result); // Don't forget to free the allocated memory
------------------------------------------------------------------------------------------------------------------------
Declare a pointer to a structure and access its members:

struct Point {
    int x;
    int y;
};

struct Point p = {3, 4};
struct Point *ptr = &p;
int xValue = ptr->x; // xValue will be 3