/* sub_60879F6C
 * address: 0x60879F6C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60879F6C(int a1)
{
  int result; // r0

  ((void (__fastcall *)(int))*(&off_60C5A8C8 + 2 * ((FIELD_U32(a1, 8) >> 2) & 1 | FIELD_U32(a1, 8) & 3)))(a1 + ((int)*(&off_60C5A8C8 + 2 * ((FIELD_U32(a1, 8) >> 2) & 1 | FIELD_U32(a1, 8) & 3) + 1) >> 1));
  result = FIELD_U32(a1, 8) | 4;
  FIELD_U32(a1, 8) = result;
  return result;
}
