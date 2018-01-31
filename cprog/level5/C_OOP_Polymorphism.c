#include <math.h>
#include <stdlib.h>
////////////////////////////////////////////////////////
// shape.h
typedef struct _shape_vtable_t {
  double (*get_area)();
  double (*get_perimenter)();
  void (*destroy)();
} shape_vtable_t;

typedef struct _shape_t {
  shape_vtable_t *vtable;
} shape_t;

unsigned int shape_get_area(const void *shape);
unsigned int shape_get_perimeter(const void *shape);
void shape_destroy(const void *shape);

////////////////////////////////////////////////////////
// right_triangle.h

typedef struct _right_triangle_t {
  shape_t shape;
  double side1;
  double side2;
} right_triangle_t;

right_triangle_t *right_triangle_create(double side1, double side2);

////////////////////////////////////////////////////////
// right_triangle.c
// TODO: Implement your right_triangle_t here
static double get_area(const right_triangle_t *rtriangle){
  return rtriangle->side1 * rtriangle->side2 / 2;
}

static double get_perimeter(const right_triangle_t *rtriangle){
  return rtriangle->side1 + rtriangle->side2 + sqrt(pow(rtriangle->side1,2) + pow(rtriangle->side2,2));
}

static void destroy(const right_triangle_t *rtriangle){
  free(rtriangle);
}

static shape_vtable_t right_triangle_vtable = {
  get_area,
  get_perimeter,
  destroy
};

right_triangle_t *right_triangle_create(double side1, double side2){
  right_triangle_t *rtriangle = malloc(sizeof(right_triangle_t));
  rtriangle->shape.vtable = &right_triangle_vtable;
  rtriangle->side1 = side1;
  rtriangle->side2 = side2;
  return rtriangle;
}
