/* sub_6027C8BC
 * address: 0x6027C8BC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027C8BC(int a1)
{
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  return Enemy__executeState_DieFumi(a1);
}
