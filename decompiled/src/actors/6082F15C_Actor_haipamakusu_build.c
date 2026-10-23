/* Actor_haipamakusu_build
 * address: 0x6082F15C   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_haipamakusu_build(ActorBuildInfo *a1)
{
  Actor *v2; // r0

  v2 = (Actor *)operator_new(0x50u);
  return sub_6082ED70(v2, a1);
}
