/* sub_60888390
 * address: 0x60888390   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888390(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r7
  char *v10; // r5
  int v11; // r4
  int v12; // r5
  int v13; // r5
  int v14; // r4
  int v15; // r8
  int v16; // r6
  int v17; // r2
  int v18; // r7
  int v19; // r0
  bool v20; // zf
  int v21; // r9
  int v22; // r6

  FIELD_U32(a1, 4) = a4;
  v6 = FIELD_U32(a4, 28);
  FIELD_U32(a1, 24) = v6;
  v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a3 + 8))(a3, 372 * v6 + 32, 128);
  FIELD_U32(a1, 20) = v7;
  v8 = FIELD_U32(a1, 24);
  if ( v8 )
  {
    v9 = 372 * v8;
    v10 = (char *)(v7 + 284);
    do
    {
      memset(v10, 255, 0x58u);
      v9 -= 372;
      v10 += 372;
    }
    while ( v9 );
  }
  FIELD_U32(a1, 16) = v7;
  if ( a5 == 1 )
  {
    FIELD_U32(a1, 12) = a2;
    if ( FIELD_S32(a1, 24) >= 1 )
    {
      sub_608A4CFC(v7);
      if ( FIELD_S32(a1, 24) >= 2 )
      {
        v11 = 1;
        v12 = 372;
        do
        {
          sub_608A4CFC(FIELD_U32(a1, 16) + v12);
          ++v11;
          v12 += 372;
        }
        while ( v11 < FIELD_U32(a1, 24) );
      }
    }
  }
  else
  {
    v13 = 0;
    FIELD_U32(a1, 12) = 0;
    if ( FIELD_S32(a1, 24) >= 1 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = *(_DWORD *)(FIELD_U32(a1, 4) + 32);
        v17 = *(_DWORD *)(v16 + dword_60BF9D80[0] + (v15 << 6));
        v18 = *(_DWORD *)(v16 + dword_60BF9D88 + (v15 << 6));
        if ( v17 )
          v19 = sub_6083B4F8(FIELD_U32(v17, 104), a2, v17);
        else
          v19 = 3;
        v20 = v18 == 0;
        v21 = v16 + v13;
        v22 = 0;
        if ( v18 )
          v20 = v19 == 0;
        if ( !v20 )
        {
          sub_6083B4F8(FIELD_U32(v18, 104), a2, v18);
          v22 = 2;
        }
        sub_608A4CFC(FIELD_U32(a1, 16) + v14);
        sub_608A4D08(FIELD_U32(a1, 16) + v14, v21, v22);
        sub_608A4D34(FIELD_U32(a1, 16) + v14);
        sub_608A5070(FIELD_U32(a1, 16) + v14);
        FIELD_U32(a1, 8) = v22;
        ++v15;
        v13 += 64;
        v14 += 372;
      }
      while ( v15 < FIELD_U32(a1, 24) );
    }
  }
  *(_BYTE *)a1 = 1;
  return 1;
}
