/* SE_BOSS_LEMMY_ref_3
 * address: 0x600DF61C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_BOSS_LEMMY_ref_3(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // r1
  __int16 *v7; // r6
  int v8; // r5
  int v9; // r2
  _DWORD *v10; // r6
  unsigned int v11; // r1
  Vec3 v13; // [sp+4h] [bp-1Ch] BYREF

  KoopalingBase__vf5A4(a1);
  v2 = *(_DWORD **)(a1 + 7096);
  v3 = (_DWORD *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  if ( sub_60418548(*v3 + 4) )
  {
    v6 = FIELD_F32(a1, 112);
    v13.x = FIELD_F32(a1, 108);
    v13.y = v6;
    v13.z = 4500.0;
    EffectData_create(248, &v13, 0, 0);
    v7 = (__int16 *)(a1 + 6640);
    v8 = a1 + 6332;
    sub_608134CC(a1 + 6332, "SE_BOSS_LEMMY_RUSH_FOOT_R", FIELD_S16(a1, 6640), 0);
  }
  else
  {
    v8 = a1 + 6332;
    v7 = (__int16 *)(a1 + 6640);
  }
  v9 = *v7;
  v10 = 0;
  sub_6081356C(v8, "SE_BOSS_LEMMY_MAGIC_MAKE", v9, 0);
  v11 = FIELD_U32(a1, 7136);
  if ( v11 )
    v10 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v11);
  return sub_600B3444((_DWORD *)a1, v10);
}
