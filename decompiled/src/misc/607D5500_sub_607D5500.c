/* sub_607D5500
 * address: 0x607D5500   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607D5500(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r6
  float *v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // r0
  int v9; // r5
  float v10; // r2
  float v11; // r0
  float v12; // s4
  float v13; // s6
  float v14; // s8
  float v15; // s12
  float result; // s0
  _BYTE v17[12]; // [sp+4h] [bp-5Ch] BYREF
  float v18[3]; // [sp+10h] [bp-50h] BYREF
  float v19; // [sp+1Ch] [bp-44h]
  float v20; // [sp+20h] [bp-40h]
  float v21; // [sp+24h] [bp-3Ch]
  float v22; // [sp+28h] [bp-38h]
  float v23; // [sp+2Ch] [bp-34h]
  float v24; // [sp+30h] [bp-30h]
  float v25; // [sp+34h] [bp-2Ch]
  float v26; // [sp+38h] [bp-28h]
  float v27; // [sp+3Ch] [bp-24h]

  v2 = **(_DWORD **)(a1 + 24);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 60))(v2, a1 + 44);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
  sub_607D57F0(a1);
  if ( (FIELD_U8(a1, 198) & 8) == 0 )
  {
    v3 = **(_DWORD **)(a1 + 24);
    (*(void (__fastcall **)(int, int, float *, _BYTE *))(*(_DWORD *)v3 + 100))(v3, 1, v18, v17);
    v19 = v19 * 0.98;
    v23 = v23 * 0.98;
    v27 = v27 * 0.98;
    (*(void (__fastcall **)(int, int, float *, _BYTE *))(*(_DWORD *)v3 + 96))(v3, 1, v18, v17);
  }
  if ( (FIELD_U8(a1, 200) & 0x20) != 0 )
  {
    v4 = **(_DWORD **)(a1 + 24);
    (*(void (__fastcall **)(int, int, float *, _BYTE *))(*(_DWORD *)v4 + 100))(v4, 1, v18, v17);
    v5 = *(float **)(**(_DWORD **)(FIELD_U32(a1, 24) + 12) + 80);
    v6 = v5[16];
    v7 = v5[17];
    v8 = v5[18];
    v19 = v6;
    v23 = v7;
    v27 = v8;
    (*(void (__fastcall **)(int, int, float *, _BYTE *))(*(_DWORD *)v4 + 96))(v4, 1, v18, v17);
  }
  sub_6040EC24(a1 + 244, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 56))(v2);
  if ( FIELD_U32(a1, 324) == 1 )
  {
    v9 = **(_DWORD **)(a1 + 24);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 108))(v9, 17, a1 + 348);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 108))(v9, 18, a1 + 396);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 108))(v9, 19, a1 + 444);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 108))(v9, 20, a1 + 492);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 108))(v9, 21, a1 + 540);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 108))(v9, 22, a1 + 588);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 108))(v9, 23, a1 + 636);
  }
  yoshi_all_root_ref(a1);
  ((void (__fastcall *)(int))loc_607D5BAC)(a1);
  ((void (__fastcall *)(int))loc_607D5DD0)(a1);
  (*(void (__fastcall **)(int, float *, int *))(*(_DWORD *)a1 + 144))(a1, v18, &dword_60CC5460);
  v10 = v23;
  v11 = v27;
  FIELD_U32(a1, 152) = FIELD_U32(a1, 56);
  FIELD_F32(a1, 156) = v10;
  FIELD_F32(a1, 160) = v11;
  v19 = v19 + (float)((float)((float)(v18[0] * 0.0) - (float)(v18[1] * 16.0)) + (float)(v18[2] * 0.0));
  v12 = v10 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * 16.0)) + (float)(v22 * 0.0));
  v13 = v24;
  v14 = v25;
  v15 = v26;
  FIELD_F32(a1, 140) = v19;
  FIELD_F32(a1, 144) = v12;
  result = v11 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 16.0)) + (float)(v15 * 0.0));
  FIELD_F32(a1, 148) = result;
  return result;
}
