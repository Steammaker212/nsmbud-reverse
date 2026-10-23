/* sub_604D3074
 * address: 0x604D3074   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D3074(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int *v9; // r1
  StateMgr *v10; // r0
  int v12; // r1
  int a5[4]; // [sp+0h] [bp-10h] BYREF

  LOWORD(a5[0]) = 0;
  v2 = a1[153927];
  if ( v2 == 2 )
  {
    v5 = a1[153924] + 1;
    if ( v5 <= 9 )
    {
      while ( 1 )
      {
        v6 = v5;
        if ( (unsigned int)v5 >= 0xA )
          v6 = 0;
        if ( LOBYTE(a1[13161 * v6 + 22323]) )
          break;
        if ( ++v5 >= 10 )
          goto LABEL_27;
      }
      if ( v5 >= 0 )
        BYTE1(a5[0]) = 1;
    }
LABEL_27:
    LOBYTE(a5[0]) = 1;
  }
  else
  {
    if ( v2 == 1 )
    {
      v3 = a1[153922];
      if ( v3 >= 1 )
      {
        while ( v3 >= 1 )
        {
          v4 = --v3;
          if ( (unsigned int)v3 >= 0xA )
            v4 = 0;
          if ( LOBYTE(a1[13161 * v4 + 22323]) )
          {
            LOBYTE(a5[0]) = 1;
            goto LABEL_24;
          }
        }
      }
      goto LABEL_24;
    }
    v7 = a1[153922];
    if ( v7 >= 0 )
    {
      if ( (unsigned int)v7 >= 0xA )
        v7 = 0;
      if ( a1[13161 * v7 + 35466] )
        LOBYTE(a5[0]) = 1;
    }
    v8 = a1[153924];
    if ( v8 >= 0 )
    {
      if ( (unsigned int)v8 >= 0xA )
        v8 = 0;
      if ( a1[13161 * v8 + 35466] )
LABEL_24:
        BYTE1(a5[0]) = 1;
    }
  }
  sub_604D37E4(a1, a5);
  if ( a1[153931] || a1[153932] )
  {
    v9 = &dword_60CA34D8;
    v10 = (StateMgr *)(a1 + 6);
  }
  else
  {
    v12 = a1[1207];
    a5[1] = 1;
    v10 = (StateMgr *)(a1 + 6);
    if ( v12 == 1 )
      v9 = &dword_60CA3258;
    else
      v9 = &dword_60CA34F8;
  }
  return StateMgr__changeState(v10, (StateBase *)v9);
}
