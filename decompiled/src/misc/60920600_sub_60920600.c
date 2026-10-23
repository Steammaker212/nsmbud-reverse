/* sub_60920600
 * address: 0x60920600   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920600(int a1, _DWORD *a2)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  result = a2[1];
  FIELD_U32(a1, 264) = result;
  return result;
}
