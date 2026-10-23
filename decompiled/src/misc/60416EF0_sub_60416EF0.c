/* sub_60416EF0
 * address: 0x60416EF0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60416EF0(int a1, int a2)
{
  _DWORD v4[3]; // [sp+0h] [bp-20h] BYREF
  char v5; // [sp+Ch] [bp-14h]

  v4[0] = 1;
  v4[1] = 0;
  v4[2] = 1;
  v5 = 0;
  ((void (__fastcall *)(int, _DWORD *, int))sub_609324F0)(a1 + 16, v4, a2);
  FIELD_U32(a1, 1108) = 0;
  FIELD_U8(a1, 1124) = 1;
  FIELD_U32(a1, 1140) = 0;
  FIELD_U32(a1, 1156) = 2;
  FIELD_U32(a1, 1172) = 1041865114;
  FIELD_U32(a1, 1188) = 1077936128;
  FIELD_U32(a1, 1204) = 1065353216;
  FIELD_U32(a1, 1220) = 1025758986;
  FIELD_U8(a1, 1236) = 1;
  FIELD_U32(a1, 1252) = 1090519040;
  FIELD_U32(a1, 1380) = 8;
  FIELD_U32(a1, 1396) = 1065353216;
  return 1065353216;
}
