/* sub_608AF484
 * address: 0x608AF484   size: 1308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AF484(int a1)
{
  int v2; // r5
  void *v3; // r5
  int v4; // r6
  int result; // r0
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r2
  _BOOL4 v13; // r9
  int v14; // r0
  int v15; // r0
  int *v16; // r10
  int v17; // lr
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r6
  int v22; // r7
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r6
  int v27; // r7
  int v28; // r0
  int *v29; // r0
  int v30; // r2
  int v31; // r3
  int v32; // r7
  int v33; // r3
  int v34; // r6
  int v35; // r7
  void *v36; // r0
  void *v37; // r5
  int v38; // r6
  int v39; // r0
  bool v40; // zf
  int v41; // r6
  char v42; // r0
  int v43; // r6
  int v44; // [sp+0h] [bp-60h] BYREF
  int v45; // [sp+4h] [bp-5Ch]
  int v46; // [sp+8h] [bp-58h]
  int v47; // [sp+Ch] [bp-54h]
  int v48; // [sp+10h] [bp-50h]
  int v49; // [sp+14h] [bp-4Ch]
  int v50; // [sp+18h] [bp-48h]
  int v51; // [sp+1Ch] [bp-44h]
  int v52; // [sp+20h] [bp-40h]
  int v53; // [sp+24h] [bp-3Ch]
  int v54; // [sp+28h] [bp-38h]
  int v55; // [sp+2Ch] [bp-34h]
  int v56; // [sp+30h] [bp-30h]
  int v57; // [sp+34h] [bp-2Ch]

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  if ( FIELD_U8(a1, 188) && *(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1) + 39) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  if ( FIELD_U8(v2, 40) )
  {
    v3 = sub_608C3B10();
    v4 = sub_608C2698(v3, 20, 1);
    FIELD_U32(v4, 4) = 18;
    FIELD_U32(v4, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
    sub_608C2C1C(v3);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  if ( result != 1 )
    return result;
  if ( FIELD_U8(a1, 186) )
  {
    v6 = FIELD_U32(a1, 208);
    if ( v6 )
    {
      FIELD_U32(a1, 208) = v6 - 1;
    }
    else if ( FIELD_U8(a1, 205) == 3 || !FIELD_U8(a1, 205) )
    {
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
    }
  }
  if ( FIELD_U8(a1, 185) )
  {
    v7 = 0;
    if ( FIELD_U8(a1, 204) != 1 )
      goto LABEL_21;
  }
  else
  {
    result = FIELD_U8(a1, 184);
    if ( !FIELD_U8(a1, 184) )
      return result;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
    if ( result != 1 )
      return result;
    v7 = 1;
    FIELD_U8(a1, 204) = 1;
  }
  v8 = FIELD_U32(a1, 212);
  if ( v8 != -1 )
    FIELD_U32(a1, 212) = v8 + 1;
  if ( FIELD_U8(a1, 205) != 2 )
  {
    v9 = FIELD_U32(a1, 216);
    if ( v9 != -1 )
      FIELD_U32(a1, 216) = v9 + 1;
  }
LABEL_21:
  v10 = FIELD_U32(a1, 160);
  v11 = FIELD_U32(a1, 164);
  v12 = FIELD_U8(a1, 205);
  v13 = v11 >= v10;
  if ( !FIELD_U8(a1, 205) )
  {
LABEL_32:
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
    goto LABEL_33;
  }
  if ( v12 == 3 )
  {
    if ( v11 < v10 )
      FIELD_U32(a1, 164) = v11 + 1;
    goto LABEL_32;
  }
  if ( v12 == 1 && v11 < v10 )
    FIELD_U32(a1, 164) = v11 + 1;
LABEL_33:
  v14 = FIELD_U32(a1, 36);
  if ( v14 )
    (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v14 + 8))(v14, FIELD_U32(a1, 44), a1);
  v15 = FIELD_U32(a1, 32);
  if ( v15 )
  {
    v44 = 1065353216;
    v45 = 1065353216;
    v46 = 0;
    v47 = 0;
    v48 = -1;
    v49 = 0;
    v50 = 0;
    v51 = -1;
    v52 = 1065353216;
    v57 = 0;
    v56 = 0;
    v55 = 0;
    v54 = 0;
    v53 = 0;
    if ( FIELD_U32(a1, 212) )
    {
      v16 = (int *)(a1 + 84);
      v17 = v7;
      v44 = FIELD_U32(a1, 52);
      v45 = FIELD_U32(a1, 56);
      v46 = FIELD_U32(a1, 60);
      v47 = FIELD_U32(a1, 64);
      v48 = FIELD_U32(a1, 68);
      v50 = FIELD_U32(a1, 80);
      v49 = FIELD_U32(a1, 72);
      v51 = FIELD_U32(a1, 76);
      v18 = FIELD_U32(a1, 88);
      v19 = FIELD_U32(a1, 92);
      v20 = FIELD_U32(a1, 96);
      v21 = FIELD_U32(a1, 100);
      v22 = FIELD_U32(a1, 104);
      v52 = FIELD_U32(a1, 84);
      v53 = v18;
      v54 = v19;
      v55 = v20;
      v56 = v21;
      v57 = v22;
      v7 = v17;
    }
    else
    {
      v50 = 0;
      v16 = (int *)(a1 + 84);
    }
    (*(void (__fastcall **)(int, _DWORD, _DWORD, int *))(*(_DWORD *)v15 + 8))(
      v15,
      FIELD_U32(a1, 44),
      FIELD_U32(a1, 220),
      &v44);
    FIELD_U32(a1, 52) = v44;
    FIELD_U32(a1, 56) = v45;
    FIELD_U32(a1, 60) = v46;
    FIELD_U32(a1, 64) = v47;
    FIELD_U32(a1, 68) = v48;
    FIELD_U32(a1, 80) = v50;
    FIELD_U32(a1, 72) = v49;
    FIELD_U32(a1, 76) = v51;
    v23 = v53;
    v24 = v54;
    v25 = v55;
    v26 = v56;
    v27 = v57;
    *v16 = v52;
    v16[1] = v23;
    v16[2] = v24;
    v16[3] = v25;
    v16[4] = v26;
    v16[5] = v27;
  }
  v28 = FIELD_U32(a1, 20);
  if ( v28 )
  {
    v29 = (int *)(v28 + 88);
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    v29 += 3;
    FIELD_U32(a1, 108) = v30;
    FIELD_U32(a1, 112) = v31;
    FIELD_U32(a1, 116) = v32;
    v33 = v29[1];
    v34 = v29[2];
    v35 = v29[3];
    FIELD_U32(a1, 120) = *v29;
    FIELD_U32(a1, 124) = v33;
    FIELD_U32(a1, 128) = v34;
    FIELD_U32(a1, 132) = v35;
  }
  sub_608AF9A0(a1);
  if ( FIELD_U8(a1, 187) && FIELD_U32(a1, 148) >= FIELD_U32(a1, 144) )
  {
    FIELD_U8(a1, 187) = 0;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  }
  v36 = sub_608C3B10();
  v37 = v36;
  if ( v7 == 1 )
  {
    v38 = sub_608C2698(v36, 24, 1);
    FIELD_U32(v38, 4) = 7;
    FIELD_U32(v38, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
    sub_608C2C1C(v37);
    FIELD_U16(a1, 184) = 256;
  }
  if ( FIELD_U32(a1, 192) == 1 )
    v13 = FIELD_U32(a1, 164) >= FIELD_U32(a1, 160);
  v39 = FIELD_U8(a1, 205);
  if ( v39 != 3 )
  {
    v40 = v39 == 1;
    if ( v39 == 1 )
      v40 = v13;
    if ( !v40 )
      goto LABEL_58;
    v41 = sub_608C2698(v37, 24, 1);
    FIELD_U32(v41, 4) = 9;
    FIELD_U32(v41, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
    FIELD_U8(v41, 20) = 1;
    sub_608C2C1C(v37);
    v42 = 2;
    goto LABEL_57;
  }
  if ( FIELD_U32(a1, 164) >= FIELD_U32(a1, 160) )
  {
    v42 = 0;
LABEL_57:
    FIELD_U8(a1, 205) = v42;
  }
LABEL_58:
  if ( FIELD_U8(a1, 189) )
  {
    v43 = sub_608C2698(v37, 24, 1);
    FIELD_U32(v43, 4) = 9;
    FIELD_U32(v43, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
    FIELD_U8(v43, 20) = 0;
    sub_608C2C1C(v37);
    FIELD_U8(a1, 189) = 0;
  }
  result = FIELD_U8(a1, 206);
  if ( result == 3 )
  {
    result = FIELD_U32(a1, 176);
    if ( FIELD_U32(a1, 180) < result )
      return result;
    result = 0;
    goto LABEL_66;
  }
  if ( result == 1 )
  {
    result = FIELD_U32(a1, 176);
    if ( FIELD_U32(a1, 180) >= result )
    {
      result = 2;
LABEL_66:
      FIELD_U8(a1, 206) = result;
    }
  }
  return result;
}
