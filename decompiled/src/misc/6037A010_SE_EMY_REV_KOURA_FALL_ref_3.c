/* SE_EMY_REV_KOURA_FALL_ref_3
 * address: 0x6037A010   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_EMY_REV_KOURA_FALL_ref_3(int a1, unsigned int a2)
{
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // t1
  unsigned int v7; // r0
  float v8; // r1
  int v9; // r5
  unsigned int result; // r0
  unsigned int v11; // r1
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -4.0;
  FIELD_U8(a1, 6386) = 1;
  v6 = FIELD_U32(a1, 6352);
  v4 = (_DWORD *)(a1 + 6352);
  v5 = v6;
  if ( v6 )
  {
    FIELD_U32(a1, 6356) = v5;
    *v4 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 156) ^= 0x80000000;
  v7 = 0;
  if ( a2 < 4 )
    v7 = a2;
  FIELD_U32(a1, 80) = *(float *)(*(_DWORD *)(PlayerMgr_instance + 4 * v7 + 48) + 108) < FIELD_F32(a1, 108);
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 136) = -1064304640;
  FIELD_U32(a1, 140) = 0;
  FIELD_U8(a1, 84) = a2;
  sub_6015907C((ActiveCollider *)(a1 + 188), 160);
  FIELD_U32(a1, 328) = 9;
  v8 = FIELD_F32(a1, 112);
  v9 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v8;
  mapPositionToScreen(&v12, &position);
  BasicSoundActor2_play(v9, "SE_EMY_REV_KOURA_FALL", &v12.x, 0);
  LOWORD(position.x) = 0;
  BYTE2(position.x) = 4;
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&position);
  (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &ShellEnemy_StateID_slide);
  FIELD_U8(a1, 84) = -1;
  FIELD_U32(a1, 3200) &= 0xFFFFFFE7;
  FIELD_U32(a1, 3192) &= 0xFFFFFFE7;
  result = FIELD_U32(a1, 3176) & 0xFFFFFFE7;
  v11 = FIELD_U32(a1, 3184) & 0xFFFFFFE7;
  FIELD_U32(a1, 3176) = result;
  FIELD_U32(a1, 3184) = v11;
  return result;
}
