/* sub_60462BB8
 * address: 0x60462BB8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60462BB8(StageActor *a1)
{
  int v2; // r5

  v2 = 0;
  if ( sub_60003AE0(a1) == 1 )
  {
    v2 = 1;
    SE_OBJ_ITEM_DISAPP_ref((int)a1, 1, 1);
  }
  return v2;
}
