/* sub_602E6CD4
 * address: 0x602E6CD4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E6CD4(_DWORD *a1)
{
  Animation_update(**(_DWORD **)(*a1 + 20));
  Animation_update(**(_DWORD **)(*a1 + 28));
  Animation_update(**(_DWORD **)(a1[1] + 20));
  return Animation_update(**(_DWORD **)(a1[1] + 28));
}
