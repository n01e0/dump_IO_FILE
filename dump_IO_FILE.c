#include <stdio.h>

void dump_FILE(FILE *dest) {
    printf("------------ struct _IO_FILE ----------------\n");

    printf("int _flags = %d\n", dest->_flags);
    printf("char* _IO_read_ptr                  = %p\n", dest->_IO_read_ptr);
    printf("char* _IO_read_end                  = %p\n", dest->_IO_read_end);
    printf("char* _IO_read_base                 = %p\n", dest->_IO_read_base);
    printf("char* _IO_write_base                = %p\n", dest->_IO_write_base);
    printf("char* _IO_write_ptr                 = %p\n", dest->_IO_write_ptr);
    printf("char* _IO_write_end                 = %p\n", dest->_IO_write_end);
    printf("char* _IO_buf_base                  = %p\n", dest->_IO_buf_base);
    printf("char* _IO_buf_end                   = %p\n", dest->_IO_buf_end);
    printf("char* _IO_save_base                 = %p\n", dest->_IO_save_base);
    printf("char* _IO_backup_base               = %p\n", dest->_IO_backup_base);
    printf("char* _IO_save_end                  = %p\n\n", dest->_IO_save_end);
    printf("struct _IO_marker *markers          = %p\n", dest->_markers);
    printf("struct _IO_FILE *_chain             = %p\n", dest->_chain);
    printf("int _fileno                         = %d\n", dest->_fileno);
    printf("int _flags2                         = %d\n", dest->_flags2);
    printf("_IO_off_t _old_offset               = %ld\n", dest->_old_offset);
    printf("unsigned short _cur_column          = %d\n", dest->_cur_column);
    printf("signed char _vtable_offset          = %d\n", dest->_vtable_offset);
    printf("char _shortbuf                      = %p\n", dest->_shortbuf);
    printf("_IO_lock_t *lock                    = %p\n", dest->_lock);

    printf("-----------------end-----------------\n");
}
