/* sub_6044083C
 * address: 0x6044083C   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044083C(int a1, int a2, int a3, int a4, void *heap)
{
  int v5; // r6
  unsigned int v7; // r6
  _DWORD *v8; // r7
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r0
  int result; // r0
  _DWORD *v25; // r5
  int v26; // r1
  int v27; // r2
  _DWORD *v28; // r5
  int v29; // r0
  int v30; // r1
  int v31; // r2
  _DWORD *v32; // r5
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r1
  int v37; // [sp+8h] [bp-30h] BYREF
  int v38; // [sp+Ch] [bp-2Ch]
  int v39; // [sp+10h] [bp-28h]

  v5 = 0;
  FIELD_U32(a1, 20) = a3;
  FIELD_U32(a1, 24) = a4;
  if ( a2 << 8 )
  {
    v7 = a2 << 8;
    v8 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
    sub_60913BB4(v8);
    *v8 = off_60BF9C1C;
    sub_60913D88((int)v8, 2048, (int)heap, 64, 1);
    sub_60913A6C(&v37, v8, 0);
    v9 = v38;
    v10 = v39;
    FIELD_U32(a1, 44) = v37;
    FIELD_U32(a1, 48) = v9;
    FIELD_U32(a1, 52) = v10;
    sub_60913B5C(a1 + 44, 2048);
    FIELD_U32(a1, 40) = FIELD_U32(a1, 24);
    FIELD_U32(a1, 72) = v7;
    v11 = operator_new_8DE2C8(v7, (int)heap, 256);
    FIELD_U32(a1, 56) = v11;
    FIELD_U32(a1, 60) = v11;
    v12 = operator_new_8DE2C8(FIELD_U32(a1, 72), (int)heap, 256);
    FIELD_U32(a1, 64) = v12;
    FIELD_U32(a1, 68) = v12;
    v13 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
    v14 = sub_60913BB4(v13);
    *v13 = off_60BF9C1C;
    sub_60913D88(v14, 2048, (int)heap, 64, 1);
    sub_60913A6C(&v37, v13, 0);
    v15 = v38;
    v16 = v39;
    FIELD_U32(a1, 96) = v37;
    FIELD_U32(a1, 100) = v15;
    FIELD_U32(a1, 104) = v16;
    sub_60913B5C(a1 + 96, 2048);
    FIELD_U32(a1, 92) = FIELD_U32(a1, 24);
    FIELD_U32(a1, 124) = v7;
    v17 = operator_new_8DE2C8(v7, (int)heap, 256);
    FIELD_U32(a1, 108) = v17;
    FIELD_U32(a1, 112) = v17;
    v18 = operator_new_8DE2C8(FIELD_U32(a1, 124), (int)heap, 256);
    FIELD_U32(a1, 116) = v18;
    FIELD_U32(a1, 120) = v18;
    v19 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
    v20 = sub_60913BB4(v19);
    *v19 = off_60BF9C1C;
    sub_60913D88(v20, 2048, (int)heap, 64, 1);
    sub_60913A6C(&v37, v19, 0);
    v21 = v38;
    v22 = v39;
    FIELD_U32(a1, 148) = v37;
    FIELD_U32(a1, 152) = v21;
    FIELD_U32(a1, 156) = v22;
    sub_60913B5C(a1 + 148, 2048);
    FIELD_U32(a1, 144) = FIELD_U32(a1, 24);
    FIELD_U32(a1, 176) = v7;
    v23 = operator_new_8DE2C8(v7, (int)heap, 256);
    FIELD_U32(a1, 160) = v23;
    FIELD_U32(a1, 164) = v23;
    v5 = operator_new_8DE2C8(FIELD_U32(a1, 176), (int)heap, 256);
    FIELD_U32(a1, 168) = v5;
    FIELD_U32(a1, 172) = v5;
    result = FIELD_U32(a1, 24);
  }
  else
  {
    v25 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
    sub_60913BB4(v25);
    *v25 = off_60BF9C1C;
    sub_60913D88((int)v25, 2048, (int)heap, 64, 1);
    sub_60913A6C(&v37, v25, 0);
    v26 = v38;
    v27 = v39;
    FIELD_U32(a1, 44) = v37;
    FIELD_U32(a1, 48) = v26;
    FIELD_U32(a1, 52) = v27;
    sub_60913B5C(a1 + 44, 2048);
    FIELD_U32(a1, 40) = FIELD_U32(a1, 24);
    FIELD_U32(a1, 56) = 0;
    FIELD_U32(a1, 60) = 0;
    FIELD_U32(a1, 64) = 0;
    FIELD_U32(a1, 68) = 0;
    FIELD_U32(a1, 72) = 0;
    v28 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
    v29 = sub_60913BB4(v28);
    *v28 = off_60BF9C1C;
    sub_60913D88(v29, 2048, (int)heap, 64, 1);
    sub_60913A6C(&v37, v28, 0);
    v30 = v38;
    v31 = v39;
    FIELD_U32(a1, 96) = v37;
    FIELD_U32(a1, 100) = v30;
    FIELD_U32(a1, 104) = v31;
    sub_60913B5C(a1 + 96, 2048);
    FIELD_U32(a1, 92) = FIELD_U32(a1, 24);
    FIELD_U32(a1, 108) = 0;
    FIELD_U32(a1, 112) = 0;
    FIELD_U32(a1, 116) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    v32 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
    v33 = sub_60913BB4(v32);
    *v32 = off_60BF9C1C;
    sub_60913D88(v33, 2048, (int)heap, 64, 1);
    sub_60913A6C(&v37, v32, 0);
    v34 = v38;
    v35 = v39;
    FIELD_U32(a1, 148) = v37;
    FIELD_U32(a1, 152) = v34;
    FIELD_U32(a1, 156) = v35;
    sub_60913B5C(a1 + 148, 2048);
    result = FIELD_U32(a1, 24);
    FIELD_U32(a1, 144) = result;
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 164) = 0;
    FIELD_U32(a1, 168) = 0;
    FIELD_U32(a1, 172) = 0;
    FIELD_U32(a1, 176) = 0;
  }
  FIELD_U8(a1, 184) = 1;
  FIELD_U32(a1, 36) = result;
  v36 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 28) = v36;
  FIELD_U32(a1, 32) = v36;
  FIELD_U32(a1, 68) = FIELD_U32(a1, 64);
  FIELD_U32(a1, 88) = result;
  FIELD_U32(a1, 80) = v36;
  FIELD_U32(a1, 84) = v36;
  FIELD_U32(a1, 120) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 140) = result;
  FIELD_U32(a1, 132) = v36;
  FIELD_U32(a1, 136) = v36;
  FIELD_U32(a1, 172) = v5;
  return result;
}
