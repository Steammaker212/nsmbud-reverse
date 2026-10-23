/* Actor_koinchild_build
 * address: 0x606179BC   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_koinchild_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x1C18u);
  result = sub_606C70B4(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C102C0;
  *(_DWORD *)&result[1]._.collisionMgr[428] = 0;
  result[1]._.collisionMgr[432] = 0;
  return result;
}
