/* Actor_Bowser_fire_build
 * address: 0x600CBF94   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_Bowser_fire_build(ActorBuildInfo *a1)
{
  int v2; // r5
  bool v3; // zf
  int v4; // r0

  v2 = operator_new(0x1890u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BCAC90;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6100));
  FIELD_U32(v2, 6100) = off_60BC1450;
  LightSource__ctor((LightSource *)(v2 + 6204));
  v3 = (FIELD_U32(v2, 20) & 1) == 0;
  FIELD_U32(v2, 6276) = FIELD_U32(v2, 20) & 1;
  v4 = 0;
  if ( v3 )
    v4 = 30;
  FIELD_U32(v2, 6280) = v4;
  FIELD_U32(v2, 6284) = off_60BCAD84;
  FIELD_U32(v2, 164) = FIELD_U32(a1, 0x1C);
  return (StateActor *)v2;
}
