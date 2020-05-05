#define MAX_STRUCTURE_NAME_SIZE 196
#define MAX_FIELD_NAME_SIZE 196

typedef enum
{
    UINT8,
    UINT32,
    INT32,
    CHAR,
    OBJ_PTR,
    FLOAT,
    DOUBLE,
    OBJ_STRUCT
} data_type_t;

typedef struct _field_info_
{
    char fname [MAX_FIELD_NAME_SIZE];
    unsigned int size;
    unsigned int offset;
    data_type_t dtype;
    char nested_str_name[MAX_STRUCTURE_NAME_SIZE];
} field_info_t;

typedef struct _struct_db_rec_ struct_db_rec_t;

struct _struct_db_rec_
{
    struct_db_rec_t *next;
    char struct_name [MAX_STRUCTURE_NAME_SIZE];
    unsigned int ds_size;
    unsigned int n_fields;
    field_info_t *fields;
};