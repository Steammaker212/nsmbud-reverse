/* SE_BOSS_LEMMY_ref_4
 * address: 0x600DFA48   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_LEMMY_ref_4(int a1)
{
  int v2; // r7
  float v3; // s0
  unsigned int v4; // r1
  _DWORD *v5; // r8
  _DWORD *v6; // r1
  unsigned int v7; // r0
  float v8; // r1
  int result; // r0
  int v10; // r1
  unsigned int v11; // r0
  Vec3 v12; // [sp+4h] [bp-24h] BYREF

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1040))(a1, v3);
  v4 = FIELD_U32(a1, 7136);
  if ( !v4 || (v5 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v4)) == 0 )
  {
    v5 = 0;
    FIELD_U32(a1, 7092) = 2;
  }
  v6 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += v7;
  if ( sub_60418548(*v6 + 4) )
  {
    v8 = FIELD_F32(a1, 112);
    v12.x = FIELD_F32(a1, 108);
    v12.y = v8;
    v12.z = 4500.0;
    EffectData_create(248, &v12, 0, 0);
    sub_608134CC(a1 + 6332, "SE_BOSS_LEMMY_RUSH_FOOT_L", FIELD_S16(a1, 6640), 0);
  }
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
      v10 += 4 * v11;
    result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
    if ( (result & 0x20) != 0 )
    {
      --FIELD_U32(a1, 7180);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832D8);
    }
  }
  else if ( result == 1 )
  {
    sub_600B3444((_DWORD *)a1, v5);
    sub_6081356C(a1 + 6332, "SE_BOSS_LEMMY_MAGIC_MAKE", FIELD_S16(a1, 6640), 0);
    result = ((int (__fastcall *)(int))loc_600B3E14)(a1);
    if ( result )
    {
      v5[20] = FIELD_U32(a1, 80);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1160))(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1332))(a1);
      FIELD_U32(a1, 7136) = 0;
      FIELD_U32(a1, 7092) = 2;
      return 2;
    }
  }
  return result;
}
