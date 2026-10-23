/* sub_60473B88
 * address: 0x60473B88   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60473B88(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r0
  __int64 *v7; // r1
  __int64 *v8; // r2
  __int64 *v9; // r0
  __int64 v10; // d16
  __int64 v11; // d17
  __int64 v12; // d20
  __int64 v13; // d21
  __int64 v14; // d18
  __int64 v15; // d19
  __int64 v16; // d22
  __int64 v17; // d23
  int v18; // r0
  int v19; // r5
  int v20; // r6
  int v21; // r2
  int result; // r0
  _DWORD v23[4]; // [sp+4h] [bp-D4h] BYREF
  int v24; // [sp+14h] [bp-C4h]
  _WORD v25[44]; // [sp+18h] [bp-C0h] BYREF
  char v26; // [sp+71h] [bp-67h]
  __int64 v27; // [sp+80h] [bp-58h]
  __int64 v28; // [sp+88h] [bp-50h]
  __int64 v29; // [sp+90h] [bp-48h]
  __int64 v30; // [sp+98h] [bp-40h]
  __int64 v31; // [sp+A0h] [bp-38h]
  __int64 v32; // [sp+A8h] [bp-30h]
  __int64 v33; // [sp+B0h] [bp-28h]
  __int64 v34; // [sp+B8h] [bp-20h]

  v6 = sub_6090B350(v25);
  if ( !a3 )
  {
    a3 = v6;
    v25[0] = 0;
    v26 = 0;
  }
  sub_6090B4B0(a3, a2[10]);
  v23[0] = a2[3];
  v23[1] = a3;
  v23[2] = a2[8];
  v23[3] = 0;
  v24 = a2[10];
  v7 = (__int64 *)sub_6090BE54(a2[7]);
  v8 = v7 + 4;
  v9 = v7 + 6;
  v10 = *v7;
  v11 = v7[1];
  v7 += 2;
  v12 = *v8;
  v13 = v8[1];
  v14 = *v9;
  v15 = v9[1];
  v16 = *v7;
  v17 = v7[1];
  v27 = v10;
  v28 = v11;
  v29 = v16;
  v30 = v17;
  v31 = v12;
  v32 = v13;
  v33 = v14;
  v34 = v15;
  sub_6085402C(a1[6]);
  *(_DWORD *)(a1[6] + 224) = v23;
  v18 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  v19 = a1[4];
  v20 = a1[6];
  v21 = 0;
  if ( v18 )
    v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 228))(v18);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v19 + 72))(v19, v20, v21);
  (*(void (__fastcall **)(_DWORD, _DWORD, int))(*(_DWORD *)a1[4] + 48))(a1[4], a1[6], v24 + 8);
  sub_6097F554(a1[6]);
  result = a1[6];
  FIELD_U32(result, 224) = 0;
  return result;
}
