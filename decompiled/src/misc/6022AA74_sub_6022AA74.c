/* sub_6022AA74
 * address: 0x6022AA74   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022AA74(int a1)
{
  _DWORD v4[3]; // [sp+4h] [bp-44h] BYREF
  char v5; // [sp+10h] [bp-38h]
  _DWORD v6[3]; // [sp+14h] [bp-34h] BYREF
  char v7; // [sp+20h] [bp-28h]

  FIELD_U8(a1, 28) = 1;
  FIELD_U32(a1, 16) = -1;
  FIELD_U32(a1, 20) = -1;
  FIELD_U32(a1, 24) = -1;
  FIELD_U8(a1, 44) = 1;
  FIELD_U32(a1, 32) = -1;
  FIELD_U32(a1, 36) = -1;
  FIELD_U32(a1, 40) = -1;
  FIELD_U8(a1, 60) = 1;
  FIELD_U32(a1, 48) = -1;
  FIELD_U32(a1, 52) = -1;
  FIELD_U32(a1, 56) = -1;
  FIELD_U8(a1, 76) = 1;
  FIELD_U32(a1, 64) = -1;
  FIELD_U32(a1, 68) = -1;
  FIELD_U32(a1, 72) = -1;
  FIELD_U32(a1, 80) = 0;
  FIELD_U8(a1, 96) = 0;
  FIELD_U32(a1, 84) = -1;
  FIELD_U32(a1, 88) = -1;
  FIELD_U32(a1, 92) = -1;
  FIELD_U8(a1, 112) = 0;
  FIELD_U32(a1, 100) = -1;
  FIELD_U32(a1, 104) = -1;
  FIELD_U32(a1, 108) = -1;
  FIELD_U8(a1, 128) = 0;
  FIELD_U32(a1, 116) = -1;
  FIELD_U32(a1, 120) = -1;
  FIELD_U32(a1, 124) = -1;
  FIELD_U8(a1, 144) = 0;
  FIELD_U32(a1, 132) = -1;
  FIELD_U32(a1, 136) = -1;
  FIELD_U32(a1, 140) = -1;
  FIELD_U8(a1, 160) = 0;
  FIELD_U32(a1, 148) = -1;
  FIELD_U32(a1, 152) = -1;
  FIELD_U32(a1, 156) = -1;
  FIELD_U8(a1, 176) = 0;
  FIELD_U32(a1, 164) = -1;
  FIELD_U32(a1, 168) = -1;
  FIELD_U32(a1, 172) = -1;
  FIELD_U8(a1, 192) = 0;
  FIELD_U32(a1, 180) = -1;
  FIELD_U32(a1, 184) = -1;
  FIELD_U32(a1, 188) = -1;
  FIELD_U8(a1, 208) = 0;
  FIELD_U32(a1, 196) = -1;
  FIELD_U32(a1, 200) = -1;
  FIELD_U32(a1, 204) = -1;
  FIELD_U8(a1, 224) = 0;
  FIELD_U32(a1, 212) = -1;
  FIELD_U32(a1, 216) = -1;
  FIELD_U32(a1, 220) = -1;
  FIELD_U8(a1, 240) = 0;
  FIELD_U32(a1, 228) = -1;
  FIELD_U32(a1, 232) = -1;
  FIELD_U32(a1, 236) = -1;
  FIELD_U8(a1, 256) = 0;
  FIELD_U32(a1, 244) = -1;
  FIELD_U32(a1, 248) = -1;
  FIELD_U32(a1, 252) = -1;
  FIELD_U8(a1, 272) = 0;
  FIELD_U32(a1, 260) = -1;
  FIELD_U32(a1, 264) = -1;
  FIELD_U32(a1, 268) = -1;
  FIELD_U8(a1, 288) = 0;
  FIELD_U32(a1, 276) = -1;
  FIELD_U32(a1, 280) = -1;
  FIELD_U32(a1, 284) = -1;
  FIELD_U8(a1, 304) = 0;
  FIELD_U32(a1, 292) = -1;
  FIELD_U32(a1, 296) = -1;
  FIELD_U32(a1, 300) = -1;
  FIELD_U8(a1, 320) = 0;
  FIELD_U32(a1, 308) = -1;
  FIELD_U32(a1, 312) = -1;
  FIELD_U32(a1, 316) = -1;
  FIELD_U8(a1, 336) = 0;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 324) = -1;
  FIELD_U32(a1, 328) = -1;
  FIELD_U32(a1, 332) = -1;
  v7 = 1;
  memset(v6, 255, sizeof(v6));
  sub_6019EC34((_DWORD *)(a1 + 16), v6);
  FIELD_U8(a1, 28) = v7;
  sub_6019EC34((_DWORD *)(a1 + 32), v6);
  FIELD_U8(a1, 44) = v7;
  sub_6019EC34((_DWORD *)(a1 + 48), v6);
  FIELD_U8(a1, 60) = v7;
  sub_6019EC34((_DWORD *)(a1 + 64), v6);
  FIELD_U8(a1, 76) = v7;
  v5 = 0;
  memset(v4, 255, sizeof(v4));
  sub_6022AC6C(a1 + 84, v4);
  return a1;
}
