/* sub_6075A3A4
 * address: 0x6075A3A4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075A3A4(int a1, int a2, int a3)
{
  int result; // r0

  sub_6078C964();
  *(_DWORD *)(**(_DWORD **)(a1 + 548) + 32) = a2;
  *(_DWORD *)(**(_DWORD **)(a1 + 548) + 36) = a3;
  *(_DWORD *)(**(_DWORD **)(a1 + 552) + 32) = a2;
  result = **(_DWORD **)(a1 + 552);
  FIELD_U32(result, 36) = a3;
  return result;
}
