#!/usr/bin/env python3
import todolist_pb2 as todolist

todos = todolist.TodoList()
with open("todolist.pbbin", "rb") as fd:
	todos.ParseFromString(fd.read())
print(todos)
