/* sub_605EDABC
 * address: 0x605EDABC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605EDABC(int a1)
{
  float v2; // s0

  if ( !sub_60676B28() )
    return 2;
  FIELD_U32(a1, 0x1EC) = 0;
  FIELD_U32(a1, 0x1F0) = 0;
  FIELD_U32(a1, 0x1F4) = 0x44FF0000;
  FIELD_U32(a1, 0x1F8) = 0x44FF0000;
  LightMask__init((RevealMaskRelated *)(a1 + 0x17F8), 0, 2);
  v2 = (float)(60 * (FIELD_U16(a1, 0x16) & 0xFu) + 120);
  FIELD_F32(a1, 0x1820) = v2;
  FIELD_F32(a1, 0x17FC) = v2;
  FIELD_U32(a1, 0x1804) = FIELD_U32(a1, 0x6C);
  FIELD_U32(a1, 0x1808) = FIELD_U32(a1, 0x70);
  FIELD_U32(a1, 0x180C) = FIELD_U32(a1, 0x74);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  return 1;
}
