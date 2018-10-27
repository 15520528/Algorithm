/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Class.h
 * Author: Nam
 *
 * Created on August 8, 2018, 9:17 AM
 */

#ifndef CLASS_H
#define CLASS_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* CLASS_H */
 class A{
    protected:
    int  x;
    virtual void func(){
        
    }
};
class B: public A{
    void func(){
        x=1;
    }
};
