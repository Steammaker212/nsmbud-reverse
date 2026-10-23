/* sub_6039DC14
 * address: 0x6039DC14   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039DC14(int a1, float *a2, int *a3)
{
  int v6; // r0
  int v7; // r2
  int v8; // r1
  unsigned int v10; // r2
  int v11; // r1
  int v12; // r1
  int v13; // r2
  float v14; // s0
  int v15; // r0
  unsigned int v16; // r3
  _DWORD *v17; // r2
  int v18; // r1

  v6 = sub_60378E30(a1 + 6444);
  if ( FIELD_U8(a1, 6396) || FIELD_U8(a1, 6401) )
  {
    *a2 = FIELD_F32(v6, 16);
    a2[1] = FIELD_F32(v6, 20);
    *a3 = 0;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      v7 = FIELD_U32(a1, 12984);
      if ( v7 >= 31 )
        *a3 = v7;
    }
    FIELD_U8(a1, 6396) = 0;
  }
  else if ( FIELD_U32(a1, 6436) == 1 && FIELD_U8(a1, 6440) )
  {
    v10 = FIELD_U32(a1, 6452);
    v11 = FIELD_U32(a1, 6432);
    if ( v10 >= 2 )
      v10 = 0;
    if ( FIELD_U8(a1, 6526) )
      v12 = FIELD_U32(v11, 12);
    else
      v12 = *(_DWORD *)(v11 + 8 * v10 + 4);
    *a2 = FIELD_F32(v6, 16);
    a2[1] = FIELD_F32(v6, 20);
    *a3 = (unsigned __int16)v12;
  }
  else
  {
    v13 = v6;
    v14 = FIELD_F32(v6, 20);
    v15 = FIELD_U32(v6, 16);
    v16 = FIELD_U32(a1, 6452);
    v8 = 0;
    if ( v16 >= 2 )
      v16 = 0;
    v17 = (_DWORD *)(v13 + 8 * v16);
    if ( *v17 == 6 )
    {
      v18 = 49;
      v14 = v14 + 16.0;
    }
    else
    {
      if ( *v17 != 2 )
        return v8;
      v18 = (unsigned __int16)v17[1];
    }
    *(_DWORD *)a2 = v15;
    a2[1] = v14;
    *a3 = v18;
  }
  return 1;
}
