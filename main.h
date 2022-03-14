#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>                                                                                                                                                                     
                                                                                                                                                                                              
int printf(const char *format, ...);                                                                                                                                                   
int fprintf(FILE *stream, const char *format, ...);                                                                                                                                    
int dprintf(int fd, const char *format, ...);                                                                                                                                          
int sprintf(char *str, const char *format, ...);                                                                                                                                       
int snprintf(char *str, size_t size, const char *format, ...);                                                                                                                         
                                                                                                                                                                                              
#include <stdarg.h>                                                                                                                                                                    
                                                                                                                                                                                              
int vprintf(const char *format, va_list ap);                                                                                                                                           
int vfprintf(FILE *stream, const char *format, va_list ap);                                                                                                                            
int vdprintf(int fd, const char *format, va_list ap);                                                                                                                                  
int vsprintf(char *str, const char *format, va_list ap);                                                                                                                               
int vsnprintf(char *str, size_t size, const char *format, va_list ap); 
#endif