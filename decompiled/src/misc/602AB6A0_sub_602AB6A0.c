/* sub_602AB6A0
 * address: 0x602AB6A0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AB6A0(int a1)
{
  int result; // r0

  FIELD_U8(a1, 6304) = 1;
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
