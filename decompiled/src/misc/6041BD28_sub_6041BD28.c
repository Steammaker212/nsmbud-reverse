/* sub_6041BD28
 * address: 0x6041BD28   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041BD28(_DWORD *a1, int a2, _DWORD *a3, void *a4)
{
  int v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r7
  int v16; // r0
  int v17; // r6
  _DWORD *v18; // r5
  int v19; // r1
  int v20; // r2
  int v21; // r5
  _DWORD *v22; // r9
  int v23; // r1
  int v24; // r2
  int v25; // r0
  signed int v26; // r5
  __int64 v27; // r0
  int v28; // r0
  int v30; // [sp+2Ch] [bp-4Ch]
  int v31; // [sp+38h] [bp-40h]
  int v32; // [sp+40h] [bp-38h]
  int v34; // [sp+48h] [bp-30h] BYREF
  int v35; // [sp+4Ch] [bp-2Ch]
  int v36; // [sp+50h] [bp-28h]

  v6 = a3[1];
  v7 = a3[2];
  v8 = a3[3];
  v9 = a3[4];
  a1[24] = *a3;
  a1[25] = v6;
  a1[26] = v7;
  a1[27] = v8;
  a1[28] = v9;
  v10 = a3[6];
  v11 = a3[7];
  v12 = a3[8];
  v13 = a3[9];
  v14 = a3[10];
  a1[29] = a3[5];
  a1[30] = v10;
  a1[31] = v11;
  a1[32] = v12;
  a1[33] = v13;
  a1[34] = v14;
  v32 = sub_6083DA78(a3);
  v16 = sub_6083DA90(a3);
  a1[36] = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a4 + 24))(a4, v32, v16);
  v31 = sub_6083DAA8(dword_60C9BAF4 + 32);
  v17 = sub_6083DAAC(dword_60C9BAF4 + 32);
  v18 = (_DWORD *)operator_new_8DE25C(0x1Cu, a4, 4);
  sub_60913BB4(v18);
  *v18 = off_60BF9C1C;
  sub_60913D88((int)v18, v31, (int)a4, v17, 0);
  sub_60913A6C(&v34, v18, 0);
  v19 = v35;
  v20 = v36;
  a1[110] = v34;
  a1[111] = v19;
  a1[112] = v20;
  sub_60913F34(a1[112], a1 + 38);
  v30 = sub_6083DAB0(FIELD_U32(dword_60CCFC8C, 24), a3);
  v21 = sub_6083DAB4(FIELD_U32(dword_60CCFC8C, 24), a3);
  v22 = (_DWORD *)operator_new_8DE25C(0x1Cu, a4, 4);
  sub_60913BB4(v22);
  *v22 = off_60BF9C1C;
  sub_60913D88((int)v22, v30, (int)a4, v21, 12);
  sub_60913A6C(&v34, v22, 0);
  v23 = v35;
  v24 = v36;
  a1[186] = v34;
  a1[187] = v23;
  a1[188] = v24;
  sub_60913F34(a1[188], a1 + 114);
  sub_6083DAB8(
    a1 + 35,
    a1[36],
    v32,
    FIELD_U32(dword_60CCFC8C, 24),
    a1 + 114,
    a1[187],
    v30,
    a1 + 38,
    a1[111],
    v31,
    dword_60C9BAF4 + 32,
    a1[434],
    a3,
    a2);
  v25 = sub_608DE334(0x320u, (int)a4, 8);
  if ( v25 )
  {
    a1[189] = 5;
    a1[190] = v25;
  }
  v26 = a1[350];
  if ( v26 >= 1 )
  {
    v27 = 160LL * (unsigned int)v26;
    if ( !is_mul_ok(0xA0u, v26) )
      HIDWORD(v27) = 1;
    if ( HIDWORD(v27) )
      LODWORD(v27) = -1;
    v28 = sub_608DE334(v27, (int)a4, 8);
    if ( v28 )
    {
      a1[191] = v26;
      a1[192] = v28;
    }
  }
  return sub_6041CA50(a1);
}
