/* WendyFloor__ctor
 * address: 0x6012B26C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall WendyFloor__ctor(ActorBuildInfo *a1)
{
  StageActor *v2; // r5

  v2 = (StageActor *)operator_new(0x5B8u);
  StageActor__ctor(v2, a1);
  FIELD_U32(v2, 0x0).vtable = (int)off_60BD1818;
  v2[1]._.vtable = 0;
  sub_6012B2C0(&v2[1]._.heap);
  v2[2].rotation.y = 0;
  v2[2].rotation.z = 0;
  v2[2].field_A8 = 0;
  return v2;
}
