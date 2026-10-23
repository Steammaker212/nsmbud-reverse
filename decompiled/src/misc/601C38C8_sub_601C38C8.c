/* sub_601C38C8
 * address: 0x601C38C8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601C38C8(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r5

  v3 = a1 + 271;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 128))(a1);
  return sub_6019EC34(v3, a2);
}
