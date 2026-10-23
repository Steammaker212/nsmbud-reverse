/* sub_608F4518
 * address: 0x608F4518   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4518(
        int a1,
        int a2,
        __int64 *a3,
        int (__fastcall ***a4)(_DWORD, int *),
        _DWORD *a5,
        _DWORD *a6,
        int *a7,
        _DWORD *a8)
{
  return sub_608F4134(a1, FIELD_U32(a2, 192), 4, a3, a5, a6, a1 + 800, 4, a1 + 848, 6, a4, a7, a8);
}
