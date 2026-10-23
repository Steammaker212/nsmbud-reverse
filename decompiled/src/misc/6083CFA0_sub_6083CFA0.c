/* sub_6083CFA0
 * address: 0x6083CFA0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083CFA0(int a1, int a2, unsigned __int8 *a3)
{
  int v6; // r6
  int v7; // r0
  int v8; // r7
  int v9; // r1
  int v10; // r1
  int v11; // r0
  int v12; // r2
  int v13; // r6
  int v14; // r7
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int result; // r0
  int v19; // [sp+4h] [bp-1Ch] BYREF

  v6 = *((_DWORD *)a3 + 8);
  v7 = ((int (__fastcall *)(_DWORD, bool, bool))loc_60836490)(a3[1], v6 > 1, *((unsigned __int16 *)a3 + 4) > 1u);
  v8 = sub_6083AA9C(v7);
  dword_60CC748C(a1);
  dword_60CC7488(a1, a2);
  dword_60CC7498(a1, *((_DWORD *)a3 + 5));
  v9 = *((_DWORD *)a3 + 6);
  if ( v8 == 3 )
    v9 = v6;
  dword_60CC749C(a1, v9);
  v10 = *((_DWORD *)a3 + 7);
  if ( (v8 | 2) == 6 )
    v10 = v6;
  dword_60CC74A0(a1, v10);
  dword_60CC74B0(a1, *((unsigned __int16 *)a3 + 3));
  if ( *((unsigned __int16 *)a3 + 4) >= 2u )
    dword_60CC74B8(a1);
  dword_60CC7494(a1, v8);
  v11 = sub_6083A9A4(*((_DWORD *)a3 + 3));
  dword_60CC74B4(a1, v11);
  v12 = 4;
  v13 = *((_DWORD *)a3 + 4) & 0x180;
  if ( v13 )
    v12 = 12;
  v14 = v12 | (*((_DWORD *)a3 + 4) >> 10) & 1 | (8 * *a3) & 0x20;
  if ( *((_WORD *)a3 + 1) == 1 )
  {
    v15 = 57;
    if ( !v13 )
      v15 = 56;
    dword_60CC72BC(a2, v15, &v19);
    v16 = sub_608363F8(*((_DWORD *)a3 + 5), *((int *)a3 + 3) >> 8);
    dword_60CC74D8(a1, (v16 + v19 - 1) & -v19);
    v17 = 64;
    if ( !v13 )
      v17 = 16;
    v14 |= v17;
  }
  dword_60CC7490(a1, v14);
  result = *a3;
  if ( (result & 1) != 0 )
    return dword_60CC74D4(a1, a3 + 36);
  return result;
}
