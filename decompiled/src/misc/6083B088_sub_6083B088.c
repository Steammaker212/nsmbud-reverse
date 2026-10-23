/* sub_6083B088
 * address: 0x6083B088   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083B088(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // r10
  int v6; // r4
  __int64 v7; // r6
  _DWORD *v8; // r4
  int v9; // r9
  int i; // r5
  int v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0

  v5 = *(_DWORD **)(a1 + 40);
  if ( a3 )
  {
    v5[12] = a3;
    v6 = a4 - a1 + v5[2];
    v7 = dword_60CC73F4(*a3) + v6;
  }
  else
  {
    v8 = (_DWORD *)v5[8];
    sub_60836538((int)v8, a2, *(_DWORD **)(a1 + 40));
    v5[12] = v8;
    v7 = dword_60CC73F4(*v8);
  }
  v9 = FIELD_U32(a1, 28);
  if ( v9 >= 1 )
  {
    for ( i = 0; i != v9; ++i )
    {
      v11 = *(_DWORD *)(FIELD_U32(a1, 32) + dword_60BF9D80[0] + (i << 6));
      if ( v11 )
      {
        v12 = sub_6083D5FC(*(_DWORD *)(FIELD_U32(a1, 32) + dword_60BF9D80[0] + (i << 6)), 0);
        if ( v12 )
          *(_QWORD *)v12 = FIELD_U32(v12, 16) - v5[2] + v7;
        v13 = sub_6083D5FC(v11, 1);
        if ( v13 )
          *(_QWORD *)v13 = FIELD_U32(v13, 16) - v5[2] + v7;
        v14 = sub_6083D5FC(v11, 2);
        if ( v14 )
          *(_QWORD *)v14 = FIELD_U32(v14, 16) - v5[2] + v7;
        v15 = sub_6083D5FC(v11, 3);
        if ( v15 )
          *(_QWORD *)v15 = FIELD_U32(v15, 16) - v5[2] + v7;
        v16 = sub_6083D5FC(v11, 4);
        if ( v16 )
          *(_QWORD *)v16 = FIELD_U32(v16, 16) - v5[2] + v7;
        v17 = sub_6083D5FC(v11, 5);
        if ( v17 )
          *(_QWORD *)v17 = FIELD_U32(v17, 16) - v5[2] + v7;
      }
    }
  }
  FIELD_U8(a1, 20) = 0;
  return 0;
}
