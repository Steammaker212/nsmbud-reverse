/* sub_60448388
 * address: 0x60448388   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60448388(int a1, int a2, _DWORD *a3, int a4)
{
  int v6; // r5
  int v7; // r10
  int v8; // r9
  int v9; // r8
  int v10; // r7
  int v11; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r7
  int v15; // r1
  int v16; // r2
  _DWORD v19[3]; // [sp+14h] [bp-1DCh] BYREF
  _BYTE v20[8]; // [sp+20h] [bp-1D0h] BYREF
  int v21; // [sp+28h] [bp-1C8h] BYREF

  v6 = 0;
  if ( (FIELD_U8(a1, 2480) & 1) == 0 && *(_BYTE *)(FIELD_U32(a1, 4) + 103) )
  {
    v7 = 0;
    v8 = 0;
    v6 = 0;
    v9 = 0;
    do
    {
      v10 = FIELD_U32(a1, 2472);
      v11 = sub_60913508(v20);
      v12 = v10 + v8;
      sub_60913564(v11, v12);
      v19[0] = *a3;
      v19[1] = a3[1] + v6;
      v19[2] = a3[2];
      sub_60918E08(v12, v19, a4 - v6);
      if ( sub_60918EB8(v12) == 1 )
      {
        v13 = *(_DWORD *)(FIELD_U32(a1, 4) + 32) + v7;
        sub_608722BC(v13, &v21, 0, FIELD_U16(v13, 52), 1);
        sub_60918FC4(v12);
      }
      v14 = FIELD_U32(v12, 24);
      sub_60913598(v20);
      ++v9;
      v7 += 56;
      v8 += 584;
      v6 += (v14 + 3) & 0xFFFFFFFC;
    }
    while ( v9 < *(unsigned __int8 *)(FIELD_U32(a1, 4) + 103) );
  }
  if ( FIELD_U32(a1, 2496) )
  {
    v15 = a3[1];
    v16 = a3[2];
    FIELD_U32(a1, 2484) = *a3;
    FIELD_U32(a1, 2488) = v15 + v6;
    FIELD_U32(a1, 2492) = v16;
    sub_60448298((_DWORD *)a1);
    v6 += FIELD_U32(a1, 2496);
  }
  return v6;
}
