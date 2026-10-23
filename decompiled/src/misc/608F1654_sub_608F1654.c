/* sub_608F1654
 * address: 0x608F1654   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1654(void *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // r8
  unsigned int v8; // r4
  int v9; // r11
  unsigned int v10; // r4
  int v11; // r0
  unsigned int v12; // r4
  int v13; // r6
  int v14; // r7
  int v15; // r0
  int v16; // r4
  int v17; // r5
  int v18; // r0
  int result; // r0
  int v20; // r2
  int v21; // [sp+4h] [bp-18Ch]
  int v22; // [sp+8h] [bp-188h]
  int v23; // [sp+8h] [bp-188h]
  void *heap; // [sp+Ch] [bp-184h]
  int v25; // [sp+10h] [bp-180h]
  int v29; // [sp+24h] [bp-16Ch]
  _BYTE v30[64]; // [sp+28h] [bp-168h] BYREF
  _BYTE v31[128]; // [sp+68h] [bp-128h] BYREF
  _BYTE v32[168]; // [sp+E8h] [bp-A8h] BYREF

  v22 = FIELD_U32(dword_60CCF464, 24);
  dword_60CC7488(v32, v22);
  dword_60CC748C(v32);
  dword_60CC74A8(v32, a3, a4);
  dword_60CC7494(v32, 1);
  dword_60CC74B4(v32, 37);
  dword_60CC7490(v32, 8);
  qmemcpy(v31, v32, sizeof(v31));
  dword_60CC74B4(v31, 53);
  v29 = operator_new_8DE25C(0x100u, a1, 8);
  v21 = operator_new_8DE25C(0xC0u, a1, 8);
  heap = a1;
  v25 = operator_new_8DE25C(0xC0u, a1, 8);
  v7 = dword_60CC74C4(v32);
  v8 = dword_60CC74C8(v31);
  v9 = dword_60CC74C4(v31);
  dword_60CC73C4(v30);
  dword_60CC73C0(v30, v22);
  dword_60CC73CC(v30, 161);
  v10 = (4095 - (v7 + v8 - 1) % v8 + v7 + v8 - 1 + v9) & 0xFFFFF000;
  v11 = operator_new_8DE2C8(v10, (int)a1, 4096);
  dword_60CC73C8(v30, v11, v10);
  dword_60CC73DC(v29, v30);
  dword_60CC74CC(v32, v29, 0);
  v23 = dword_60CC74C4(v32);
  v12 = dword_60CC74C8(v31);
  dword_60CC7560(v21, v32);
  v13 = dword_60CCF464 + 272;
  sead__CriticalSection__lock(dword_60CCF464 + 272);
  v14 = dword_60CCF464;
  v15 = sub_608F28E8(dword_60CCF464);
  dword_60CC7410(v14 + 48, v15, v21, 0);
  sead__CriticalSection__unlock(v13);
  dword_60CC74CC(v31, v29, (v23 + v12 - 1) / v12 * v12);
  dword_60CC7560(v25, v31);
  v16 = dword_60CCF464 + 272;
  sead__CriticalSection__lock(dword_60CCF464 + 272);
  v17 = dword_60CCF464;
  v18 = sub_608F28E8(dword_60CCF464);
  dword_60CC7410(v17 + 48, v18, v25, 0);
  sead__CriticalSection__unlock(v16);
  result = operator_new_8DE25C(0x24u, heap, 4);
  *(_DWORD *)result = off_60C5C368;
  v20 = a2[1];
  FIELD_U32(result, 4) = *a2;
  FIELD_U32(result, 8) = v20;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_F32(result, 20) = (float)a3;
  FIELD_F32(result, 24) = (float)a4;
  *(_DWORD *)result = off_60C5C738;
  FIELD_U32(result, 28) = v21;
  FIELD_U32(result, 32) = v25;
  return result;
}
