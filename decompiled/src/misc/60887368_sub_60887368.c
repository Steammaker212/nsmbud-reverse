/* sub_60887368
 * address: 0x60887368   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60887368(int a1, int a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 8))(FIELD_U32(a1, 4), a2);
  FIELD_U32(a1, 8) += a2;
  ++FIELD_U32(a1, 12);
  return result;
}
