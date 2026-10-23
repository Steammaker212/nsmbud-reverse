/* sub_608AEE30
 * address: 0x608AEE30   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AEE30(int a1, int a2)
{
  int v4; // r1
  _DWORD *v5; // r5
  int v6; // r0
  size_t v7; // r1
  int v8; // r6
  void *v9; // r7
  _DWORD *v10; // r0

  v4 = dword_60CC8D24++;
  FIELD_U32(a1, 224) = v4;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 220) = -1;
  FIELD_U8(a1, 204) = 0;
  FIELD_U8(a1, 205) = 0;
  FIELD_U8(a1, 206) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U16(a1, 188) = 0;
  v5 = (_DWORD *)(a1 + 188);
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 136) = 1065353216;
  FIELD_U32(a1, 140) = 1065353216;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 156) = 1065353216;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 168) = 1065353216;
  FIELD_U32(a1, 172) = 1065353216;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 240) = 1065353216;
  FIELD_U32(a1, 244) = 1065353216;
  FIELD_U32(a1, 248) = 0;
  FIELD_U8(a1, 197) = -1;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 1;
  FIELD_U32(a1, 264) = 1065353216;
  FIELD_U32(a1, 268) = 1065353216;
  memset((void *)(a1 + 272), 0, 36);
  v5[30] = 1065353216;
  v5[31] = 0;
  v5[44] = 0;
  v5[45] = 0;
  v5[46] = 0;
  v5[47] = 0;
  v5[48] = 0;
  v5[49] = 0;
  v6 = v5[50];
  if ( v6 )
    sub_608B0E58(v6);
  FIELD_U32(a1, 52) = 1065353216;
  FIELD_U32(a1, 56) = 1065353216;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 68) = -1;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = -1;
  FIELD_U32(a1, 84) = 1065353216;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 116) = 1065353216;
  FIELD_U32(a1, 112) = 1065353216;
  FIELD_U32(a1, 108) = 1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = -1;
  FIELD_U32(a1, 132) = 0;
  v7 = FIELD_U32(a1, 396);
  if ( v7 )
    memset(*(void **)(a1 + 392), 0, v7);
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  v9 = sub_608C3B10();
  v10 = (_DWORD *)sub_608C2698(v9, 28, 1);
  v10[1] = 3;
  v10[4] = v8;
  v10[5] = a2;
  v10[6] = v5;
  sub_608C2C1C(v9);
  nn__os__ClearEvent(v8 + 4);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 12))(a2, 1);
  FIELD_U32(a1, 260) = a2;
  FIELD_U32(a1, 200) = 1;
  return 1;
}
