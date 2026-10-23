/* sub_60553CCC
 * address: 0x60553CCC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60553CCC(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int result; // r0
  unsigned int v7; // r5
  int v8; // r6
  unsigned int v9; // r0
  int v10; // r10
  int v11; // r0
  __int16 v12; // r2
  char v13; // r1
  int v14; // r0
  int *v15; // r10
  int v16; // t1
  _BYTE *v17; // [sp+0h] [bp-48h]

  result = 70240;
  v7 = a3;
  v8 = a2;
  FIELD_U32(a1, 70240) = a2;
  if ( a3 <= a4 )
  {
    v17 = (_BYTE *)(a1 + 70216);
    while ( 1 )
    {
      v9 = 0;
      if ( v7 < 3 )
        v9 = v7;
      v10 = a1 + 4 * v9;
      FIELD_U32(v10, 70220) = 0;
      if ( v8 >= 0 && v8 < FIELD_U32(a1, 70244) )
        break;
      result = FIELD_U32(v10, 17812);
      v13 = FIELD_U8(result, 64) & 0xFE;
LABEL_38:
      FIELD_U8(result, 64) = v13;
      ++v7;
      ++v8;
      if ( v7 > a4 )
        return result;
    }
    if ( FIELD_U8(a1, 32296) )
    {
      v11 = 1;
      if ( v8 < 1 )
      {
        v12 = 0;
LABEL_37:
        v14 = 4740 * v12 + a1 + 27560;
        FIELD_U32(v10, 70220) = v14;
        v16 = FIELD_U32(v10, 17812);
        v15 = (int *)(v10 + 17812);
        sub_605555F0(v14, v16);
        result = *v15;
        v13 = *(_BYTE *)(*v15 + 64) | 1;
        goto LABEL_38;
      }
    }
    else
    {
      v11 = 0;
    }
    if ( FIELD_U8(a1, 37036) )
    {
      v12 = 1;
      if ( v11 >= v8 )
        goto LABEL_37;
      ++v11;
    }
    if ( FIELD_U8(a1, 41776) )
    {
      v12 = 2;
      if ( v11 >= v8 )
        goto LABEL_37;
      ++v11;
    }
    if ( FIELD_U8(a1, 46516) )
    {
      v12 = 3;
      if ( v11 >= v8 )
        goto LABEL_37;
      ++v11;
    }
    if ( FIELD_U8(a1, 51256) )
    {
      v12 = 4;
      if ( v11 >= v8 )
        goto LABEL_37;
      ++v11;
    }
    if ( FIELD_U8(a1, 55996) )
    {
      v12 = 5;
      if ( v11 >= v8 )
        goto LABEL_37;
      ++v11;
    }
    if ( FIELD_U8(a1, 60736) )
    {
      v12 = 6;
      if ( v11 >= v8 )
        goto LABEL_37;
      ++v11;
    }
    if ( FIELD_U8(a1, 65476) )
    {
      v12 = 7;
      if ( v11 >= v8 )
        goto LABEL_37;
      ++v11;
    }
    v12 = (unsigned __int8)*v17;
    if ( *v17 )
      v12 = 8;
    if ( v11 < v8 )
      v12 = 0;
    goto LABEL_37;
  }
  return result;
}
