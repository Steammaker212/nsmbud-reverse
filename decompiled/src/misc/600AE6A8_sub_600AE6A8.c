/* sub_600AE6A8
 * address: 0x600AE6A8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AE6A8(int a1)
{
  float v2; // r1
  Vec3 v4; // [sp+4h] [bp-1Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( sub_60235E50(a1 + 7424) == 1 )
  {
    v2 = FIELD_F32(a1, 112);
    v4.x = FIELD_F32(a1, 108);
    v4.y = v2;
    v4.z = 4500.0;
    EffectData_update((EffectData *)(a1 + 7424), &v4, 0, 0);
  }
  sub_600AE514(a1);
  ShapedCollider_execute(a1 + 6112);
  return 1;
}
