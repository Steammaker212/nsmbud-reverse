/* Actor_Demo_for_Kamek_build_helper
 * address: 0x60054D3C   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_Demo_for_Kamek_build_helper(Enemy *a1, ActorBuildInfo *a2)
{
  Enemy__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60BC3DE8;
  *(_DWORD *)&a1[1]._._._._.field_10 = 0;
  a1[1]._._._._.profile = 0;
  a1[1]._._._._.id = 0;
  a1[1]._._._._.heap = 0;
  a1[1]._._._._.vtable = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._._.settings1);
  a1[1]._._._._.settings1 = (int)off_60BC1450;
  PlayerLookTarget_ctor((PlayerLookTarget *)&a1[1]._._._.speed.y, FIELD_U32(a1, 0x8));
  return a1;
}
