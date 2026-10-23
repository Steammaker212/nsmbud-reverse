/* sub_60628AA4
 * address: 0x60628AA4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60628AA4(int a1)
{
  int v2; // r0

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    ShapedCollider_execute((ColliderBase *)(a1 + 648));
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
  }
  return 1;
}
