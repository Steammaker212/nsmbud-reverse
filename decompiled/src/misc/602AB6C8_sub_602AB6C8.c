/* sub_602AB6C8
 * address: 0x602AB6C8   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AB6C8(int a1)
{
  sub_602AAAB0(a1);
  FIELD_U16(a1, 6276) = 45;
  FIELD_F32(a1, 7248) = (float)(3.0 - *(float *)&dword_60C90BB0) / 45.0;
  FIELD_F32(a1, 7252) = (float)(3.0 - *(float *)&dword_60C90BB4) / 45.0;
  FIELD_U32(a1, 7256) = 0;
  FIELD_F32(a1, 7260) = (float)(1.5 - 1.0) / 45.0;
  FIELD_F32(a1, 7264) = (float)(1.5 - 1.0) / 45.0;
  FIELD_U32(a1, 7268) = 0;
  return 7268;
}
