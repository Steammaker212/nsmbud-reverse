/* BobOmb_create
 * address: 0x6025A014   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall BobOmb_create(ActorBuildInfo *a1)
{
  Enemy *v2; // r0

  v2 = (Enemy *)operator_new(0x1BA0u);
  return BobOmb_ctor(v2, a1);
}
