/* BroFileball_ctor
 * address: 0x6013734C   size: 88   group: misc
 * sym: # BroFileball_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

FireballBase *__fastcall BroFileball_ctor(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1BA0u);
  FireballBase_ctor((FireballBase *)v2, a1);
  *(_DWORD *)v2 = off_60BD2474;
  *(_DWORD *)MovingSoundActor_ctor((MovingSoundActor *)(v2 + 6760), 0, 1)->_._.nn_atk_SoundActor_data = off_60BC19B4;
  return (FireballBase *)v2;
}
