/* sub_600E5614
 * address: 0x600E5614   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E5614(int a1)
{
  float v2; // s0
  int v3; // r1
  float v4; // r1
  Vec3 v6; // [sp+4h] [bp-1Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  StageActor__cullCheck((StageActor *)a1, 0);
  v2 = sub_600E35E0((float *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 196))(a1, v2);
  CircularCollider_execute(a1 + 6104);
  v3 = FIELD_U32(a1, 6548);
  if ( v3 >= 1 )
    FIELD_U32(a1, 6548) = v3 - 1;
  if ( sub_60235E50(a1 + 7004) == 1 )
  {
    v4 = FIELD_F32(a1, 112);
    v6.x = FIELD_F32(a1, 108);
    v6.y = v4;
    v6.z = 4500.0;
    EffectData_update((EffectData *)(a1 + 7004), &v6, 0, 0);
  }
  return 1;
}
