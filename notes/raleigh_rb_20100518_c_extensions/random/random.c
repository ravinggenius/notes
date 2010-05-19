#include <stdio.h>
#include <ruby.h>

static VALUE random_number(VALUE, class, VALUE an_int_V) {
  int max = FIX2INT(an_int_V);
  return INT2FIX(max);
}

void Init_random_in_c() {
  VALUE helloModule = rb_define_module("HelloModule");
  VALUE helloClass = rb_define_class_under(helloModule, "HelloInC", rb_cObject);

  rb_define_module_function(helloClass, "hello", hello, 0);
}
