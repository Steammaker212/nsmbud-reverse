/* sub_605FA798
 * address: 0x605FA798   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FA798(int a1)
{
  int result; // r0

  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 0;
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
