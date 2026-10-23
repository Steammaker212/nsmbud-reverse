/* sub_600C94FC
 * address: 0x600C94FC   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C94FC(int a1)
{
  int v2; // r5
  char v3; // r12
  _BOOL4 v4; // r6
  int v5; // r4
  int result; // r0
  int v7; // r5
  char v8; // r12
  unsigned int v9; // r8
  int v10; // r3
  float v11; // r1
  int v12; // r2
  int ActorSlotChecked; // r0
  bool v14; // zf
  _DWORD v15[12]; // [sp+0h] [bp-30h] BYREF

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
  if ( ((unsigned int)dword_60C83C10 & ~(1611437372 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C83C10) )
  {
    dword_60C83C0C = (int)&off_60BC1FA8;
    _cxa_guard_release(dword_60C83C10);
  }
  v4 = 1;
  v5 = 0;
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C83C0C) == 1 )
  {
    v5 = 1;
    v4 = FIELD_U8(v2, 7152) == 0;
  }
  result = FIELD_U32(a1, 6128);
  if ( result == 1 )
  {
    if ( FIELD_U32(a1, 6176) <= 3u
      && sub_60779FD8(dword_60CBFA90) == 1
      && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U32(a1, 6176))) != 0 )
    {
      ActorSlotChecked = Player_getActorSlotChecked();
      v14 = ActorSlotChecked == 0;
      if ( ActorSlotChecked )
        v14 = (FIELD_U8(ActorSlotChecked, 6900) & 1) == 0;
      if ( !v14 )
        sub_60768D14(ActorSlotChecked, 1);
    }
    result = sub_60008EB4(ActorMgr__instance + 27168, sub_600C9940);
    if ( v5 == 1 )
    {
      result = FIELD_U8(EventMgr__instance, 17);
      if ( (result & 4) != 0 )
      {
        result = sub_600085D0(ActorMgr__instance, 264);
        if ( FIELD_U32(EnemyCounterMaybe_instance, 964) == result )
          return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C83E40);
      }
    }
  }
  else if ( !result )
  {
    if ( v4 && FIELD_U8(a1, 6120) )
    {
      FIELD_U32(dword_60C99DD4, 1376) |= 2u;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
    }
    result = FIELD_U8(EventMgr__instance, 17);
    if ( (result & 0x40) != 0 )
    {
      if ( FIELD_U8(a1, 6120) )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
      v7 = *(_DWORD *)sub_60008598(ActorMgr__instance, 349, FIELD_U32(ActorMgr__instance, 27172));
      if ( ((unsigned int)&dword_60C83FB4 & ~(1611437708 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FB4) )
      {
        dword_60C83FB0 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C83FB4);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C83FB0) == 1 )
      {
        v9 = FIELD_S8(v7, 6958);
        if ( !v4 && v9 <= 3 )
        {
          v10 = FIELD_S8(v7, 6958);
          v11 = FIELD_F32(v7, 112);
          v12 = FIELD_U32(v7, 116);
          v15[0] = FIELD_U32(v7, 108);
          v15[2] = v12;
          *(float *)&v15[1] = v11 + 40.0;
          sub_603F7A98(dword_60C99DC0, v15, 5, v10);
        }
        FIELD_U32(a1, 6176) = v9;
      }
      FIELD_U32(dword_60C99DD4, 1376) |= 2u;
      sub_60008EB4(ActorMgr__instance + 27168, sub_600C9940);
      result = dword_60C99D88;
      FIELD_U32(dword_60C99D88, 32) = 1;
      FIELD_U8(result, 31) = 0;
      FIELD_U32(a1, 6128) = 1;
    }
  }
  return result;
}
