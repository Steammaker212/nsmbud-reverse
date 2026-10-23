/* Actor_light_ruburokuLift_build
 * address: 0x605B7C7C   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_light_ruburokuLift_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1C48u);
  sub_60676744((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0B994;
  LightMask__ctor((RevealMaskRelated *)(v2 + 6136));
  FIELD_U32(v2, 6176) = 0;
  *(_DWORD *)v2 = off_60C09620;
  RectCollider_ctor((RectCollider *)(v2 + 6184));
  FIELD_U32(v2, 6184) = off_60BC30D8;
  FIELD_U32(v2, 6840) = 0;
  FIELD_U32(v2, 6844) = 0;
  LightSource__ctor((LightSource *)(v2 + 6848));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6920));
  FIELD_U32(v2, 7224) = off_60C095F0;
  FIELD_U32(v2, 7228) = 0;
  FIELD_U32(v2, 7232) = 0;
  return v2;
}
