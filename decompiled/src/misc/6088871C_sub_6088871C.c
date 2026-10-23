/* sub_6088871C
 * address: 0x6088871C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088871C(int a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r3
  int v9; // r1
  int v10; // r1
  int v11; // r7
  int v12; // r5
  int v13; // r4
  int v14; // r2
  int v15; // r6
  int v16; // r0
  bool v17; // zf
  int v18; // r8

  FIELD_U32(a1, 4) = a4;
  v5 = FIELD_U32(a4, 28);
  FIELD_U32(a1, 20) = v5;
  v6 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a3 + 8))(a3, 56 * v5 + 32, 128);
  FIELD_U32(a1, 16) = v6;
  v7 = FIELD_U32(a1, 20);
  if ( v7 )
  {
    v8 = 0;
    v9 = 56 * v7;
    do
    {
      *(_DWORD *)(v6 + v8) = 0;
      v8 += 56;
    }
    while ( v9 != v8 );
    v10 = FIELD_U32(a1, 20);
    FIELD_U32(a1, 12) = v6;
    if ( v10 >= 1 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = *(_DWORD *)(FIELD_U32(a1, 4) + 32);
        v14 = *(_DWORD *)(v13 + dword_60BF9D80[0] + (v12 << 6));
        v15 = *(_DWORD *)(v13 + dword_60BF9D88 + (v12 << 6));
        if ( v14 )
          v16 = sub_6083B4F8(FIELD_U32(v14, 104), a2, v14);
        else
          v16 = 3;
        v17 = v15 == 0;
        v18 = 0;
        if ( v15 )
          v17 = v16 == 0;
        if ( !v17 )
        {
          sub_6083B4F8(FIELD_U32(v15, 104), a2, v15);
          v18 = 2;
        }
        sub_608A4B50(FIELD_U32(a1, 12) + v11, *(_DWORD *)(*(_DWORD *)(v13 + dword_60BF9D80[v18] + (v12 << 6)) + 104));
        FIELD_U32(a1, 8) = v18;
        ++v12;
        v11 += 56;
      }
      while ( v12 < FIELD_U32(a1, 20) );
    }
  }
  else
  {
    FIELD_U32(a1, 12) = v6;
  }
  *(_BYTE *)a1 = 1;
  return 1;
}
