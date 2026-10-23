/* sub_6068126C
 * address: 0x6068126C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068126C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = a1 + 1873;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 216))(a1);
  result = a1[1875];
  *v2 = result;
  return result;
}
