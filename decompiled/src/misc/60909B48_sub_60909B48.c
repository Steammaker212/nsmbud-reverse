/* sub_60909B48
 * address: 0x60909B48   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60909B48(int a1, int a2, int a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  int v9; // r12
  _BOOL4 v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r1
  float v17; // s0
  __int64 v18; // r0

  v6 = FIELD_U8(a1, 328);
  v7 = v6 == 0;
  if ( v6 )
  {
    v6 = FIELD_U32(a1, 324);
    v7 = v6 == 0;
  }
  if ( v7 || (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) != 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  }
  else
  {
    v8 = FIELD_U32(a1, 252);
    v9 = FIELD_U32(a1, 324);
    v10 = 0;
    v11 = 0;
    if ( v8 >= 1 )
    {
      v12 = 0;
      v11 = 0;
      do
      {
        if ( (FIELD_U32(v9, 272) & (1 << *(_BYTE *)(a1 + 372 + v12))) != 0 )
          v11 |= 1 << v12;
        ++v12;
      }
      while ( v8 != v12 );
    }
    FIELD_U32(a1, 272) = v11;
    FIELD_U32(a1, 284) = FIELD_U32(v9, 284);
    FIELD_U32(a1, 288) = FIELD_U32(v9, 288);
    FIELD_U32(a1, 292) = FIELD_U32(v9, 292);
    FIELD_U32(a1, 296) = FIELD_U32(v9, 296);
    FIELD_U32(a1, 300) = FIELD_U32(v9, 300);
    FIELD_U32(a1, 304) = FIELD_U32(v9, 304);
    v13 = FIELD_U32(a1, 264);
    if ( v13 >= 0 )
      v10 = (v11 & (1 << v13)) != 0;
    sub_6090905C(a1, FIELD_U32(v9, 16) & 1, v10, (float *)(v9 + 276));
    v14 = FIELD_U32(a1, 252);
    if ( v14 < 1 )
    {
      v16 = 0;
    }
    else
    {
      v15 = 0;
      v16 = 0;
      do
      {
        if ( (a2 & (1 << *(_BYTE *)(a1 + 372 + v15))) != 0 )
          v16 |= 1 << v15;
        ++v15;
      }
      while ( v14 != v15 );
    }
    v17 = sub_60909158(a1, v16, a3);
  }
  v18 = (unsigned int)(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 24))(a1, v17);
  if ( (_DWORD)v18 == 1 )
  {
    LODWORD(v18) = FIELD_U32(a1, 268);
    HIDWORD(v18) = v18 + 1;
  }
  FIELD_U32(a1, 268) = HIDWORD(v18);
  return v18;
}
