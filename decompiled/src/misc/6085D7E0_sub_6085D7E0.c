/* sub_6085D7E0
 * address: 0x6085D7E0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085D7E0(int a1, int a2)
{
  int v4; // r1
  int v5; // r1
  float v6; // s0
  float v7; // s2
  _DWORD v9[7]; // [sp+4h] [bp-F4h] BYREF
  _QWORD v10[6]; // [sp+20h] [bp-D8h] BYREF
  _BYTE v11[48]; // [sp+50h] [bp-A8h] BYREF
  int v12[4]; // [sp+80h] [bp-78h] BYREF
  _BYTE *v13; // [sp+90h] [bp-68h]
  _QWORD *v14; // [sp+94h] [bp-64h]
  int v15; // [sp+98h] [bp-60h]
  int v16; // [sp+9Ch] [bp-5Ch]
  int v17; // [sp+A0h] [bp-58h]
  int v18; // [sp+A4h] [bp-54h]
  int v19; // [sp+A8h] [bp-50h]
  int v20; // [sp+ACh] [bp-4Ch]
  int v21; // [sp+B0h] [bp-48h]
  int v22; // [sp+B4h] [bp-44h]
  char v23; // [sp+B8h] [bp-40h]
  int v24; // [sp+BCh] [bp-3Ch]
  int v25; // [sp+C0h] [bp-38h]
  int v26; // [sp+C4h] [bp-34h]
  int v27; // [sp+C8h] [bp-30h]
  int v28; // [sp+CCh] [bp-2Ch]
  int v29; // [sp+D0h] [bp-28h]
  int v30; // [sp+D4h] [bp-24h]
  int v31; // [sp+D8h] [bp-20h]
  char v32; // [sp+DCh] [bp-1Ch]
  int v33; // [sp+E0h] [bp-18h]

  v14 = 0;
  v13 = 0;
  memset(v12, 0, sizeof(v12));
  v23 = -1;
  v32 = -1;
  v33 = 0;
  v15 = 0;
  v19 = 1065353216;
  v24 = 0;
  v28 = 1065353216;
  v16 = 0;
  v20 = 1065353216;
  v25 = 0;
  v29 = 1065353216;
  v17 = 0;
  v21 = 1065353216;
  v26 = 0;
  v30 = 1065353216;
  v18 = 0;
  v22 = 1065353216;
  v27 = 0;
  v31 = 1065353216;
  sub_6085D9A0(a1, v11);
  v13 = v11;
  v14 = v10;
  v10[0] = 1065353216;
  v10[1] = 0;
  v10[2] = 0x3F80000000000000LL;
  memset(&v10[3], 0, 16);
  v10[5] = 1065353216;
  if ( (FIELD_U8(a1, 216) & 8) != 0 )
  {
    v9[0] = FIELD_U8(a1, 240)
          | (FIELD_U8(a1, 241) << 8)
          | ((FIELD_U8(a1, 242) | (FIELD_U8(a1, 243) << 8)) << 16);
    v9[1] = FIELD_U8(a1, 244)
          | (FIELD_U8(a1, 245) << 8)
          | ((FIELD_U8(a1, 246) | (FIELD_U8(a1, 247) << 8)) << 16);
    v4 = FIELD_U32(a1, 224);
    v9[3] = FIELD_U32(a1, 228);
    v9[2] = v4;
    v5 = FIELD_U32(a1, 232);
    v9[5] = FIELD_U32(a1, 236);
    v9[4] = v5;
    v6 = FIELD_F32(a1, 248);
    v7 = FIELD_F32(a1, 192);
    v12[0] = (int)v9;
    *(float *)&v9[6] = v6 * v7;
  }
  sub_6085D560(a1, (int)v12);
  return sub_6084A20C(FIELD_U32(a1, 260), a2 + 16, v12);
}
