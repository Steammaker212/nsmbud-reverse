/* sub_603B67F8
 * address: 0x603B67F8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B67F8(int a1)
{
  int result; // r0

  FIELD_U32(a1, 23120) = 60;
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(result, 24) = 0x40000000;
  return result;
}
