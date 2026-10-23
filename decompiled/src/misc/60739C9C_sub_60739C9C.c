/* sub_60739C9C
 * address: 0x60739C9C   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60739C9C(int a1)
{
  unsigned int result; // r0
  _BYTE *v3; // r2
  int v4; // r10
  unsigned __int8 v5; // r8
  int *v6; // r1
  int v7; // r3
  unsigned __int8 *v8; // r7
  int v9; // r10
  unsigned __int8 v10; // r6
  unsigned __int8 v11; // r8
  _WORD *v12; // r4
  unsigned int v13; // t1
  unsigned __int8 v14; // r5
  int v15; // r0
  _BYTE *v16; // [sp+0h] [bp-28h]

  v3 = (_BYTE *)(a1 + 6102);
  result = FIELD_U8(a1, 6102);
  if ( result )
  {
    if ( result == 1 )
    {
      v13 = FIELD_U16(a1, 6100);
      v12 = (_WORD *)(a1 + 6100);
      result = v13;
      if ( v13 )
      {
        *v12 = result - 1;
        result = 2;
        *v3 = 2;
      }
    }
    else if ( result == 2 )
    {
      if ( FIELD_U8(a1, 6108) )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          if ( *(_BYTE *)(sub_6073AFA4(a1, v5) + 7400) && !*(_BYTE *)(sub_6073AFA4(a1, v5) + 7401) )
          {
            if ( v5 >= 5u )
              v4 = 0;
            *(_DWORD *)(a1 + 4 * v4 + 6216) = *(unsigned __int8 *)(sub_6073AFA4(a1, v5) + 7408);
          }
          v4 = ++v5;
        }
        while ( v5 < (unsigned int)FIELD_U8(a1, 6108) );
      }
      if ( FIELD_U8(a1, 6136) )
        v6 = &dword_60CBDFA4;
      else
        v6 = &dword_60CBDF84;
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v6);
    }
  }
  else
  {
    v7 = 0;
    v8 = (unsigned __int8 *)(a1 + 6108);
    v16 = v3;
    if ( FIELD_U8(a1, 6108) )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      do
      {
        if ( *(_BYTE *)(sub_6073AFA4(a1, v11) + 7400) )
        {
          ++v10;
          if ( *(_BYTE *)(sub_6073AFA4(a1, v11) + 7401) )
          {
            v9 = 1;
            FIELD_U8(a1, 6136) = 1;
            *(_BYTE *)(FIELD_U32(a1, 56) + 110) = 0;
          }
        }
        result = *v8;
        ++v11;
      }
      while ( v11 < result );
      v7 = 0;
    }
    else
    {
      result = 0;
      v10 = 0;
      v9 = 0;
    }
    if ( v10 > 1u )
      v7 = 1;
    if ( (v9 & 1) != 0 || (v7 & (v9 ^ 1)) == 1 )
    {
      if ( result )
      {
        v14 = 0;
        do
        {
          if ( !*(_BYTE *)(sub_6073AFA4(a1, v14) + 7400) )
          {
            v15 = sub_6073AFA4(a1, v14);
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v15 + 192))(v15, &dword_60CAE31C);
            *(_BYTE *)(sub_6073AFA4(a1, v14) + 7620) = 1;
          }
          ++v14;
        }
        while ( v14 < (unsigned int)*v8 );
      }
      result = (unsigned __int8)*v16 + 1;
      *v16 = result;
    }
  }
  return result;
}
