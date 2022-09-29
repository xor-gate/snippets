#include <stdio.h>
#include <pb_encode.h>
#include "todolist.pb.h"

int main(int argc, char *argv[])
{
	uint8_t buffer[128];
	size_t message_length;
	bool status;

	protoblog_TodoList todo_list = protoblog_TodoList_init_zero;
	pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));

	todo_list.owner_id = 1;

	status = pb_encode(&stream, &protoblog_TodoList_msg, &todo_list);
	message_length = stream.bytes_written;

	printf("written %zu bytes\n", message_length);

	FILE* fp = fopen(argv[1], "w");
	if (fp) {
		fwrite(buffer, 1, message_length, fp);
		fclose(fp);
	}

	return 0;
}
