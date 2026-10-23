/* sub_6044E668
 * address: 0x6044E668   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044E668(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  __int16 v15; // [sp+10h] [bp-88h] BYREF
  int v16; // [sp+14h] [bp-84h]
  char v17; // [sp+39h] [bp-5Fh]
  char v18; // [sp+3Bh] [bp-5Dh]
  __int16 v19; // [sp+68h] [bp-30h]

  FIELD_U32(a1, 23764) = a8;
  sub_60450C78(dword_60C9CEF0, a9, a10, 10);
  sub_60450CBC(dword_60C9CEF0, 7, 7, 7, 1, 2, 10);
  FIELD_U32(a1, 56) = a2;
  FIELD_U32(a1, 60) = a3;
  FIELD_U32(a1, 64) = a4;
  FIELD_U32(a1, 156) = a5;
  FIELD_U32(a1, 160) = a6;
  FIELD_U32(a1, 164) = a7;
  FIELD_U32(a1, 23760) = 1440;
  FIELD_U16(a1, 23768) = 0;
  FIELD_U16(a1, 23770) = 0;
  FIELD_U32(a1, 52) = 1440;
  sub_6090B350(&v15);
  v16 |= 1u;
  v17 = 5;
  v18 = 6;
  v15 = 257;
  v19 = 260;
  sub_60450C98(dword_60C9CEF0, &v15, 10);
  FIELD_U32(a1, 224) = 1065353216;
  FIELD_U32(a1, 228) = 1065353216;
  FIELD_U32(a1, 232) = 1065353216;
  FIELD_U32(a1, 236) = 1065353216;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 220) = 1065353216;
  FIELD_U32(a1, 360) = 1065353216;
  FIELD_U32(a1, 364) = 1065353216;
  FIELD_U32(a1, 368) = 1065353216;
  FIELD_U32(a1, 372) = 1065353216;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 348) = 0;
  FIELD_U32(a1, 352) = 0;
  FIELD_U32(a1, 356) = 1065353216;
  FIELD_U32(a1, 496) = 1065353216;
  FIELD_U32(a1, 500) = 1065353216;
  FIELD_U32(a1, 504) = 1065353216;
  FIELD_U32(a1, 508) = 1065353216;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 492) = 1065353216;
  FIELD_U32(a1, 616) = 0;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 628) = 1065353216;
  FIELD_U32(a1, 632) = 1065353216;
  FIELD_U32(a1, 636) = 1065353216;
  FIELD_U32(a1, 640) = 1065353216;
  FIELD_U32(a1, 644) = 1065353216;
  *(_DWORD *)(FIELD_U32(dword_60C9CEF0, 56) + 28) = 5;
  return 1;
}
