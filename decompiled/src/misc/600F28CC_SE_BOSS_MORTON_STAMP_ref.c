/* SE_BOSS_MORTON_STAMP_ref
 * address: 0x600F28CC   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_MORTON_STAMP_ref(CollisionActor *a1)
{
  char *v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int result; // r0
  _DWORD v13[12]; // [sp+4h] [bp-4Ch] BYREF
  Vec3 v14; // [sp+34h] [bp-1Ch] BYREF

  v2 = &a1[1].collisionMgr[384];
  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[384]);
  Animation_update(**(_DWORD **)(*(_DWORD *)v2 + 20));
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    v5 = **(_DWORD **)v2;
    v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 84);
    v13[0] = &sead__SafeStringBase__vtable;
    v13[1] = "ankle_r1";
    v7 = v6(v5, v13);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v2 + 108))(**(_DWORD **)v2, v7, v13);
    LODWORD(v14.x) = v13[3];
    LODWORD(v14.y) = v13[7];
    v14.z = 4500.0;
    EffectData_create(321, &v14, 0, 0);
  }
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1320))(a1);
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    FIELD_F32(a1, 0x7C) = 0.0;
  v8 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += v9;
  if ( sub_60418548(*v8 + 4) )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 1, 0, 0);
    sub_608134CC(&a1[1]._.aCollider.field_50, "SE_BOSS_MORTON_STAMP", SLOWORD(a1[1]._.effectOffset.y), 0);
  }
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += 4 * v11;
  result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
  if ( (result & 0x20) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[396] + 48) = 0;
    return (*(int (__fastcall **)(CollisionActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C85504);
  }
  return result;
}
