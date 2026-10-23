/* FireSnake_build
 * address: 0x602AA284   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall FireSnake_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r0

  v2 = (Enemy *)operator_new(0x1DD8u);
  return FireSnake_ctor(v2, a1);
}
