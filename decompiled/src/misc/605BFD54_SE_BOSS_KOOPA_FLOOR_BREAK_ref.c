/* SE_BOSS_KOOPA_FLOOR_BREAK_ref
 * address: 0x605BFD54   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_BOSS_KOOPA_FLOOR_BREAK_ref(int a1)
{
  _BYTE *v2; // r7
  int v3; // r5
  char v4; // r12
  float v5; // r1
  int v6; // r5
  int v7; // r0
  int v8; // r3
  unsigned int v9; // r1
  int v10; // r0
  unsigned int result; // r0
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6792);
  if ( FIELD_U8(a1, 6792) )
  {
    if ( !FIELD_U8(a1, 6793) && (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 28) & 0x20) != 0 )
    {
      FIELD_U8(a1, 6793) = 1;
      ++FIELD_U32(EnemyCounterMaybe_instance, 964);
    }
  }
  else
  {
    v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, 349, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)dword_60CB0990 & ~(1616641536 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CB0990) )
    {
      dword_60CB098C = (int)&off_60C09CE0;
      _cxa_guard_release(dword_60CB0990);
    }
    if ( v3
      && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB098C) == 1
      && FIELD_U8(v3, 6992)
      && (unsigned __int8)(FIELD_U32(a1, 20) >> 4) == FIELD_U32(EnemyCounterMaybe_instance, 964) )
    {
      if ( !(unsigned __int8)(FIELD_U32(a1, 20) >> 4) )
      {
        v5 = FIELD_F32(a1, 112);
        v6 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v5;
        mapPositionToScreen(&v12, &position);
        BasicSoundActor2_play(v6, "SE_BOSS_KOOPA_FLOOR_BREAK", &v12.x, 0);
      }
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 24) = 1065353216;
      EffectData_create(1144, (Vec3 *)(a1 + 6768), 0, 0);
      if ( (FIELD_U32(a1, 20) & 0xFF0) == 0x40 )
        AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 8, 2, 0);
      *v2 = 1;
    }
  }
  v7 = FIELD_U8(a1, 539);
  v8 = v7 - 33;
  v9 = 1u >> (33 - v7);
  v10 = 1 << (v7 - 1);
  if ( v8 >= 0 )
  {
    v9 = 1 << v8;
    v10 = 0;
  }
  result = v10 & *(_DWORD *)(EventMgr__instance + 16) | v9 & *(_DWORD *)(EventMgr__instance + 20);
  if ( result )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB0944);
  return result;
}
