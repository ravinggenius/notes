#include <stdio.h>
#include <ruby.h>

void VALUE init() {
  printf("raleigh.rb\n");
  return Qnil;
}

void Init_hello_in_c() {
  VALUE helloModule = rb_define_module("HelloModule");
  VALUE helloClass = rb_define_class_under(helloModule, "HelloInC", rb_cObject);

  rb_define_module_function(helloClass, "hello", hello, 0);
}
