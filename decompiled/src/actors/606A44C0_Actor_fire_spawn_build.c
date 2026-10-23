/* Actor_fire_spawn_build
 * address: 0x606A44C0   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_fire_spawn_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r4

  v2 = (Enemy *)operator_new(0x1E20u);
  Enemy__ctor(v2, a1);
  FIELD_U32(v2, 0x0)._._._.vtable = (int)off_60C195A0;
  sub_60448BFC(&v2[1]._._._._.id);
  memset(&v2[1]._._._._.field_48, 0, 88);
  v2[1]._._._._.heap = (int)&off_60C19818;
  v2[1]._._._.field_B4 = 1065353216;
  v2[1]._._._.field_B8 = 1065353216;
  v2[1]._._._.rotation.y = -1;
  v2[1]._._._.rotation.z = 255;
  FIELD_U32(v2, 0x0)._._.type = 0;
  return v2;
}
