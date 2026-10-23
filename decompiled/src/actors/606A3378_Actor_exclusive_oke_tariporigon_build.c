/* Actor_exclusive_oke_tariporigon_build
 * address: 0x606A3378   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_exclusive_oke_tariporigon_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r5

  v2 = (StateActor *)operator_new(0x18B0u);
  StateActor_ctor(v2, a1);
  FIELD_U32(v2, 0x0)._._.vtable = (int)off_60C19218;
  v2[1]._._._.vtable = 0;
  v2[1]._._._.heap = 0;
  v2[1]._._._.id = 0;
  sub_608DEB0C(&v2[1]._._._.vtable, 52, (int)&v2[1]._._._.profile);
  return v2;
}
