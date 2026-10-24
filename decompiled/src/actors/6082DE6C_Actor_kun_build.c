/* Actor_kun_build
 * address: 0x6082DE6C   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_kun_build(ActorBuildInfo *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x5Cu);
  result = Actor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C2A9FC;
  FIELD_U32(result + (1) * 80, 0x0) = 1142095872;
  result[1].heap = 1135083520;
  result[1].id = 0;
  FIELD_U8(result, 0x13) = 1;
  return result;
}
