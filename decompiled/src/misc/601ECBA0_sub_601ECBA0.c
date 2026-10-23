/* sub_601ECBA0
 * address: 0x601ECBA0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ECBA0(int a1)
{
  float v2; // r1
  float v3; // r2
  bool v4; // zf
  float v5; // s0
  Vec3 v7; // [sp+0h] [bp-20h] BYREF

  sub_601861EC((Actor *)a1);
  StateMgr__execute((StateMgr *)(a1 + 300));
  if ( sub_60235E50(a1 + 432) == 1 )
  {
    v2 = FIELD_F32(a1, 84);
    v3 = FIELD_F32(a1, 88);
    v7.x = FIELD_F32(a1, 80);
    v7.y = v2;
    v7.z = v3;
    EffectData_update((EffectData *)(a1 + 432), &v7, 0, 0);
  }
  sub_601EC704(a1);
  v4 = (FIELD_U8(a1, 216) & 8) == 0;
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    v4 = FIELD_U32(a1, 276) == 2;
  if ( v4 )
  {
    v5 = *(float *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 20);
    if ( v5 == 56.0 || v5 == 50.0 || v5 == 38.0 || v5 == 26.0 || v5 == 14.0 || v5 == 8.0 )
      SE_PLY_ref(dword_60C8B13C, 28, 3u, 0);
  }
  return 1;
}
