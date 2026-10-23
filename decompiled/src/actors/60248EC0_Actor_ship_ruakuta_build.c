/* Actor_ship_ruakuta_build
 * address: 0x60248EC0   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_ship_ruakuta_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r5

  v2 = (Enemy *)operator_new(0x18D0u);
  Enemy__ctor(v2, a1);
  FIELD_U32(v2, 0x0)._._._.vtable = (int)off_60BD9C64;
  memset(&v2[1]._._._._.id, 0, 31);
  v2[1]._._._._.field_2C = (int)off_60BD9F08;
  v2[1]._._._._.childCount = 0;
  return v2;
}
