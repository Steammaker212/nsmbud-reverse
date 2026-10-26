/* WendyFloor__ctor
 * address: 0x6012B26C   size: 80   group: misc
 * sym: WendyFloor::WendyFloor(ActorBuildInfo const*) as C3
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
  FIELD_U32(v2, 0x0) = (int)off_60BD1818;
  FIELD_U32(v2 + (1) * 644, 0x0) = 0;
  sub_6012B2C0(&FIELD_U32(v2 + (1) * 644, 0x4));
  FIELD_U32(v2 + (2) * 644, 0xA0) = 0;
  FIELD_U32(v2 + (2) * 644, 0xA4) = 0;
  FIELD_U32(v2 + (2) * 644, 0xA8) = 0;
  return v2;
}
