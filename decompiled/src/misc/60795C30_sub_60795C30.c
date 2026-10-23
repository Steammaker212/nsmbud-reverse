/* sub_60795C30
 * address: 0x60795C30   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60795C30(_DWORD *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1100))(a1);
  a1[321] = result;
  return result;
}
