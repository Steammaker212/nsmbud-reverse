/* Actor_final_Bowser_Demo_manage_Tag_build
 * address: 0x6007A734   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_final_Bowser_Demo_manage_Tag_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r4

  v2 = (StateActor *)operator_new(0x1850u);
  sub_600271A0(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60BC6EA0;
  memset(&v2[1]._._._.settigns2, 0, 44);
  v2[1]._._._.field_44 = 0x40000000;
  v2[1]._._._.field_48 = 1056964608;
  v2[1]._._._.field_4C = 1065353216;
  v2[1]._._.direction = 1065353216;
  memset(&v2[1]._._.playerId, 0, 40);
  return v2;
}
