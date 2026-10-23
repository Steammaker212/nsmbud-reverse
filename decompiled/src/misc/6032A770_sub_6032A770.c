/* sub_6032A770
 * address: 0x6032A770   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032A770(int a1)
{
  float v2; // r0
  float v3; // r2
  int v4; // r1

  v2 = FIELD_F32(a1, 108);
  FIELD_F32(a1, 6332) = v2;
  v3 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6336) = v3;
  FIELD_U32(a1, 6340) = FIELD_U32(a1, 116);
  v4 = dword_60CC6484;
  FIELD_F32(a1, 6332) = v2 - FIELD_F32(dword_60CC6484, 112);
  FIELD_F32(a1, 6336) = FIELD_F32(v4, 124) - v3;
  sub_60321FA0(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
}
