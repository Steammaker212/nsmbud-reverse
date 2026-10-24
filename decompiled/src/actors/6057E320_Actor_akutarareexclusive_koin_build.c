/* Actor_akutarareexclusive_koin_build
 * address: 0x6057E320   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_akutarareexclusive_koin_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r5

  v2 = (MultiStateActor *)operator_new(0x1810u);
  MultiStateActor__ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C04FDC;
  sub_6000BAC8(&v2[1]._._._.heap, FIELD_U32(v2, 0x8));
  v2[1]._._._.heap = (int)off_60C050A8;
  FIELD_U32(v2 + (1) * 6104, 0x28) = (int)v2;
  v2[1]._._._.field_2C = 0;
  v2[1]._._._.field_30 = 0;
  v2[1]._._._.field_34 = 0;
  return v2;
}
