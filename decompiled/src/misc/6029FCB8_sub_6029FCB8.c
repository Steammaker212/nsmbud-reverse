/* sub_6029FCB8
 * address: 0x6029FCB8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6029FCB8(int a1)
{
  Vec3 v3; // [sp+14h] [bp-1Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 6548));
  joint_root_ref(a1);
  LightSource_update1((LightSource *)(a1 + 6476), 39, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3((LightSource *)(a1 + 6476));
  v3.x = 1.0;
  v3.y = 1.0;
  v3.z = 1.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 6316), 373, (Vec3 *)(a1 + 6420), 0, &v3);
  if ( Actor__getProfileId((Actor *)a1) == 770 )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
