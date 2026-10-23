/* Actor_minigemuManager_build
 * address: 0x60731344   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_minigemuManager_build(ActorBuildInfo *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x7Cu);
  result = Actor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C22770;
  LOBYTE(result[1].vtable) = 0;
  LOBYTE(result[1].settings1) = -1;
  BYTE1(result[1].settings1) = 0;
  result[1].settigns2 = 0;
  *(_DWORD *)&result[1].movementId = 0x10000;
  LOWORD(result[1].field_20.previous) = 0;
  *(_DWORD *)&result[1].field_10 = 0;
  result[1].profile = 0;
  result[1].id = 0;
  result[1].heap = 0;
  return result;
}
