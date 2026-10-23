/* sub_60604AA8
 * address: 0x60604AA8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60604AA8(int a1)
{
  int result; // r0
  __int16 v3; // r1
  int v4; // t1
  __int16 v5; // r1
  int v6; // r2
  _DWORD *v7; // r5
  int v8; // r1
  int v9; // r6
  unsigned int v10; // r3
  int v11; // r3
  int v12; // r7
  int v13; // r7
  unsigned int v14; // r2
  int v15; // r3
  _BYTE *v16; // r4
  unsigned int v17; // t1

  v4 = FIELD_U16(a1, 6120);
  result = a1 + 6120;
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *(_WORD *)result = v5;
  }
  else
  {
    v5 = 0;
  }
  v7 = (_DWORD *)(a1 + 6128);
  v6 = FIELD_U32(a1, 6128);
  if ( v6 == 2 )
  {
    v8 = FIELD_U8(a1, 6134);
    v13 = v8 - 32;
    v14 = 1u >> (32 - v8);
    if ( v8 - 32 >= 0 )
      v14 = 1 << v13;
    v15 = 1 << v8;
    if ( v13 >= 0 )
      v15 = 0;
    if ( !(v15 & FIELD_U32(EventMgr__instance, 16) | v14 & FIELD_U32(EventMgr__instance, 20)) )
    {
      *v7 = 3;
      goto LABEL_19;
    }
  }
  else if ( v6 == 1 )
  {
    if ( !v5 )
    {
      *(_WORD *)result = FIELD_U16(a1, 6132);
      EventMgr_set(EventMgr__instance, FIELD_U8(a1, 6135), 0, 1, 0, 0, 0, 0);
      LOBYTE(result) = FIELD_U8(a1, 6135) + 1;
      FIELD_U8(a1, 6135) = result;
      result = (unsigned __int8)result;
      if ( (unsigned __int8)result > (unsigned int)FIELD_U8(a1, 6136) )
      {
        if ( (FIELD_U8(a1, 20) & 0xF0) != 0 )
        {
          *v7 = 2;
          return 2;
        }
        else
        {
          FIELD_U8(a1, 19) = 1;
          return 1;
        }
      }
    }
  }
  else if ( v6 )
  {
    if ( !v5 )
    {
      *(_WORD *)result = FIELD_U16(a1, 6132);
      v17 = FIELD_U8(a1, 6135);
      v16 = (_BYTE *)(a1 + 6135);
      EventMgr_set(EventMgr__instance, v17, 0, 0, 0, 0, 0, 0);
      LOBYTE(result) = *v16 + 1;
      *v16 = result;
      result = (unsigned __int8)result;
      if ( (unsigned __int8)result > (unsigned int)(unsigned __int8)v16[1] )
        *v7 = 0;
    }
  }
  else
  {
    v8 = FIELD_U8(a1, 6134);
    v9 = v8 - 32;
    v10 = 1u >> (32 - v8);
    if ( v8 - 32 >= 0 )
      v10 = 1 << v9;
    v11 = v10 & FIELD_U32(EventMgr__instance, 20);
    v12 = 1 << v8;
    if ( v9 >= 0 )
      v12 = 0;
    if ( v12 & FIELD_U32(EventMgr__instance, 16) | v11 )
    {
      *v7 = 1;
LABEL_19:
      *(_WORD *)result = FIELD_U16(a1, 6132);
      FIELD_U8(a1, 6135) = v8 + 1;
      return v8 + 1;
    }
  }
  return result;
}
