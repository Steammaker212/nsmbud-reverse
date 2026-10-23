/* Actor_IceBall_build
 * address: 0x60140A14   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_IceBall_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0
  int v4; // r1

  v2 = (StateActor *)operator_new(0x1A70u);
  result = sub_601424B4(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60BD3440;
  *(_DWORD *)&result[1]._.collisionMgr[12] = 0;
  *(_DWORD *)&result[1]._.collisionMgr[8] = 0;
  *(_DWORD *)&result[1]._.collisionMgr[4] = 0;
  *(_DWORD *)result[1]._.collisionMgr = 0;
  result[1]._._.field_280 = 0;
  result[1]._._.field_27C = 0.0;
  result[1]._.field_284 = 0;
  v4 = FIELD_U32(result, 0x0)._._.settings1 & 0xF;
  result[1]._.field_284 = v4;
  FIELD_U32(result, 0x0)._.playerId = v4;
  return result;
}
