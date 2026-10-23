/* sub_60775394
 * address: 0x60775394   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60775394(int a1, int a2)
{
  float v4; // s16
  int v5; // r6
  float v6; // s0
  int result; // r0

  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 108);
  v6 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  result = FIELD_U32(a1, 116);
  *(_DWORD *)a2 = v5;
  FIELD_F32(a2, 4) = v4 - v6;
  FIELD_U32(a2, 8) = result;
  return result;
}
