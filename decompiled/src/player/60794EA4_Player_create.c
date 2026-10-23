/* Player_create
 * address: 0x60794EA4   size: 28   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Player_create(ActorBuildInfo *a1)
{
  StageActor *v2; // r0

  v2 = (StageActor *)operator_new(0x3AF8u);
  return Player_ctor(v2, a1);
}
