/* sub_605BE9F4
 * address: 0x605BE9F4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BE9F4(int a1)
{
  _DWORD v3[14]; // [sp+0h] [bp-38h] BYREF

  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 1028443341;
  FIELD_U32(a1, 12) = 1008981770;
  FIELD_U32(a1, 16) = 1036831949;
  FIELD_U32(a1, 20) = 0x40000000;
  v3[0] = 0;
  v3[1] = 0;
  v3[2] = 32;
  v3[3] = 0x20000;
  v3[4] = 0x8000000;
  v3[5] = 0x80000;
  v3[6] = 0x800000;
  v3[7] = 0x400000;
  sub_608337BC(a1 + 24, v3);
  FIELD_U32(a1, 60) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0xFFFFFFFE;
  FIELD_U32(a1, 64) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0xFFFFFFFE;
  FIELD_U8(a1, 82) = 0;
  FIELD_U16(a1, 80) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = 0;
  return sub_605BEAD0(a1);
}
