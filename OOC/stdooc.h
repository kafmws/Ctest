#ifndef _STD_C_OOC_H_
#define _STD_C_OOC_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//#define A(t) A##t##A
//#define AtA hahahha
//
//A(t) //hahahha

// shallow copy
#define F_OBJECT_COPY(CLASS) \
static CLASS * _##CLASS##ObjectCopy(CLASS *o) {\
	CLASS *p = malloc(sizeof(*p));\
	memcpy(p, o, sizeof(*p));\
	return p;\
}

#define MACRO_VF(CLASS) \
	CLASS *(*copyOf)(CLASS *);

#define EXTENDS(CLASS, BASE)\
typedef struct CLASS CLASS;\
struct CLASS{\
	struct CLASS##VT{ MACRO_VF(CLASS) MACRO_##CLASS##_VF } *vtp;\
	MACRO_##CLASS##_ATTRS\
};\
\
F_OBJECT_COPY(CLASS)
//static CLASS * _##CLASS##ObjectCopy(CLASS *o);

#define OOC(CLASS) EXTENDS(CLASS, Object)
#define CLASS(CLAZZ) OOC(CLAZZ)

// Class 'Object' do not extends any other class
#define MACRO_Object_VF
	// no other base class
	// virtual function virtually in macro 'MACRO_VF()'

#define MACRO_Object_ATTRS
	// no other base class
	// no attributes

OOC(Object)

// also known as 'Object * Object_copyOf(Object *o)'
static Object *copyOf(Object *o) {
	return (o->vtp->copyOf)(o);
}

//static struct ObjectVT _object_VT_ = { .copyOf = _ObjectObjectCopy };
//static Object _object_ = {&_object_VT_};

#define IMPLEMENT(CLASS, INTERFACE)

static char *newString(char *s){
	if(s == NULL) return NULL;
	size_t len = strlen(s);
	char *str = malloc((len + 1) * sizeof(char));
	sprintf(str, "%s", s);
	return str;
}

#endif
