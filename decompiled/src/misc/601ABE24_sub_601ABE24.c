/* sub_601ABE24
 * address: 0x601ABE24   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ABE24(int a1)
{
  float v2; // r1
  float v3; // r2
  Vec3 v5; // [sp+0h] [bp-20h] BYREF

  sub_601861EC((Actor *)a1);
  StateMgr__execute((StateMgr *)(a1 + 308));
  if ( sub_60235E50(a1 + 364) == 1 )
  {
    v2 = FIELD_F32(a1, 84);
    v3 = FIELD_F32(a1, 88);
    v5.x = FIELD_F32(a1, 80);
    v5.y = v2;
    v5.z = v3;
    EffectData_update((EffectData *)(a1 + 364), &v5, 0, 0);
  }
  sub_601ABC5C(a1);
  return 1;
}
