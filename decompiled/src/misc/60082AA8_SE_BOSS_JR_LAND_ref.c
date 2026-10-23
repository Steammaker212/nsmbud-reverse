/* SE_BOSS_JR_LAND_ref
 * address: 0x60082AA8   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_LAND_ref(int a1)
{
  float v2; // r1
  _DWORD *v3; // r0
  int v4; // r5
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  float v8; // s0
  int v9; // r1
  unsigned int v10; // r0
  int result; // r0
  bool v12; // zf
  Vec3 v13; // [sp+4h] [bp-1Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
    {
      v2 = FIELD_F32(a1, 112);
      v13.x = FIELD_F32(a1, 108);
      v13.y = v2;
      v13.z = 4500.0;
      EffectData_create(1080, &v13, 0, 0);
      sub_60813430(a1 + 6332, "SE_BOSS_JR_LAND", 0);
    }
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
  }
  v4 = a1 + 7100;
  v3 = *(_DWORD **)(a1 + 7100);
  v5 = (_DWORD *)v3[3];
  v6 = v3[2];
  v7 = v3[17];
  if ( v6 > v7 )
    v5 += v7;
  if ( sub_60418548(*v5 + 4) )
  {
    v8 = *(float *)&dword_60C81F4C;
    FIELD_U32(a1, 124) = dword_60C81F4C;
    FIELD_F32(a1, 136) = -v8;
    FIELD_U32(a1, 100) = dword_60C81F24;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
    FIELD_U32(a1, 304) = 0;
    FIELD_U32(a1, 308) = 1096810496;
    FIELD_U32(a1, 312) = 1097859072;
    FIELD_U32(a1, 316) = 1096810496;
  }
  v9 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v10 )
    v9 += 4 * v10;
  result = *(unsigned __int8 *)(*(_DWORD *)v9 + 28);
  v12 = (result & 0x20) == 0;
  if ( (result & 0x20) != 0 )
  {
    result = FIELD_U8(a1, 2872);
    v12 = (result & 1) == 0;
  }
  if ( !v12 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81ACC);
  return result;
}
