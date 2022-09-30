all: nanopb python serialize todolist.pbbin deserialize

python: todolist_pb2.py
todolist_pb2.py: todolist.proto
	protoc -I=. --python_out=. ./$^

nanopb: todolist.pb.h todolist.pb.c
todolist.pb.h todolist.pb.c: todolist.proto
	nanopb_generator.py $^

serialize: serialize.c todolist.pb.c nanopb-0.4.6/pb_encode.c nanopb-0.4.6/pb_common.c
	cc -I nanopb-0.4.6 -o $@ $?
	chmod +x ./serialize

todolist.pbbin: serialize todolist.proto
	./$< $@

deserialize: todolist.pbbin
	./$@.py
