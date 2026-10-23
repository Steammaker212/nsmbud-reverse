/* Actor_rotate_big_build
 * address: 0x6026F37C   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_rotate_big_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r5

  v2 = (MultiStateActor *)operator_new(0x2570u);
  Actor_rotate_big_build_helper(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60BDC730;
  memset(&v2[1]._.collisionMgr[2776], 0, 52);
  return v2;
}
