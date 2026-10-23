/* SE_BOSS_JR_CLOWN_MOVE_ref_FED2C
 * address: 0x600FED2C   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_FED2C(int a1)
{
  int v2; // r6
  float v3; // r1
  int result; // r0
  float v5; // s0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r5
  char v9; // r12
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  Vec2 v14; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = a1 + 6304;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&v14, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v14, 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  sub_600D17F4(a1);
  ((void (__fastcall *)(int))loc_601005C0)(a1);
  result = a1 + 6812;
  v5 = FIELD_F32(a1, 6812);
  if ( FIELD_F32(a1, 112) >= v5 )
  {
    FIELD_F32(a1, 112) = v5;
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
      v6 += 4 * v7;
    if ( (*(_BYTE *)(*(_DWORD *)v6 + 28) & 1) != 0 )
      goto LABEL_13;
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
    if ( ((unsigned int)dword_60C81768 & ~(1611656728 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
    {
      dword_60C81764 = (int)&off_60BC2CB4;
      _cxa_guard_release(dword_60C81768);
    }
    if ( !v8 || (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C81764) != 1 )
      goto LABEL_13;
    v10 = *(_DWORD **)(v8 + 7100);
    v11 = v10[3];
    v12 = v10[2];
    v13 = v10[17];
    if ( v12 > v13 )
      v11 += 4 * v13;
    result = *(unsigned __int8 *)(*(_DWORD *)v11 + 28);
    if ( (result & 0x21) != 0 )
    {
LABEL_13:
      FIELD_U32(a1, 9420) = 0;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85E94);
    }
  }
  return result;
}
