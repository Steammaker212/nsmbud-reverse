/* sub_603B6964
 * address: 0x603B6964   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B6964(int a1)
{
  int result; // r0

  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
