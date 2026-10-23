/* sub_6041A990
 * address: 0x6041A990   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041A990(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  v2 = a1 + 4;
  *(_DWORD *)a1 = 0;
  nullsub_77(a1 + 4);
  FIELD_U32(a1, 48) = 0;
  FIELD_U16(a1, 52) = 256;
  memset((void *)(a1 + 54), 0, 0x56u);
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 1065353216;
  v3 = sub_6083D980(v2);
  v4 = sub_6083D9C8(v3, 2822, 2822);
  v5 = sub_6083D9D0(v4, 1, 1);
  v6 = sub_6083D9DC(v5, 256, 256);
  v7 = sub_6083D9E8(v6, 1);
  v8 = sub_6083D9F0(v7, 9);
  sub_6083D9F8(v8, 1.0);
  FIELD_U32(a1, 56) = 256;
  FIELD_U32(a1, 60) = 256;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 88) = 1065353216;
  FIELD_U32(a1, 76) = 1065353216;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U64(a1, 92) = 1065353216;
  FIELD_U64(a1, 100) = 0;
  FIELD_U64(a1, 108) = 0x3F80000000000000LL;
  FIELD_U64(a1, 116) = 0;
  FIELD_U64(a1, 124) = 0;
  FIELD_U64(a1, 132) = 1065353216;
  return a1;
}
