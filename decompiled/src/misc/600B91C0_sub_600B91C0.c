/* sub_600B91C0
 * address: 0x600B91C0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B91C0(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60BC99D0;
  FIELD_U32(a1, 6104) = off_60BC9B70;
  LightSource__ctor((LightSource *)(a1 + 6112));
  memset(a1 + 6184, 0, 40);
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6224));
  FIELD_U32(a1, 6224) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6328));
  FIELD_U32(a1, 6328) = off_60BC1450;
  FIELD_U32(a1, 6444) = 0;
  FIELD_U32(a1, 6440) = 0;
  FIELD_U32(a1, 6432) = 0;
  FIELD_U32(a1, 6436) = 0;
  FIELD_U32(a1, 6448) = -1;
  FIELD_U32(a1, 6452) = -1;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6456));
  return a1;
}
