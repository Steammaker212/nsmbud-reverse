/* PlayerFireball_ctor
 * address: 0x6013A7A4   size: 84   group: player
 * sym: # PlayerFireball_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

FireballBase *__fastcall PlayerFireball_ctor(ActorBuildInfo *a1)
{
  FireballBase *v2; // r0
  FireballBase *result; // r0
  int v4; // r1

  v2 = (FireballBase *)operator_new(0x1A78u);
  result = FireballBase_ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD2A4C;
  result[1]._._._._.vtable = 0;
  result[1]._._._._.heap = 0;
  v4 = FIELD_U32(result, 0x14) & 0xF;
  result[1]._._._._.id = v4;
  FIELD_U8(result, 0x54) = v4;
  return result;
}
