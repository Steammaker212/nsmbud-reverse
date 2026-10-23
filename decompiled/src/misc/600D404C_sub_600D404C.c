/* sub_600D404C
 * address: 0x600D404C   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D404C(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r5
  char v5; // r12
  int v6; // r5
  char v7; // r12
  int result; // r0
  int ActorSlotChecked; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0

  v3 = (_DWORD *)(a1 + 6124);
  v2 = FIELD_U32(a1, 6124);
  if ( v2 != 2 )
  {
    if ( v2 == 1 )
    {
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
      if ( v4 )
      {
        if ( ((unsigned int)&dword_60C80048 & ~(1611481260 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C80048) )
        {
          dword_60C80044 = (int)&off_60BC1FA8;
          _cxa_guard_release(&dword_60C80048);
        }
        if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C80044) == 1 && FIELD_U8(a1, 6135) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 1144))(v4);
          *v3 = 2;
        }
      }
    }
LABEL_23:
    if ( !FIELD_U8(a1, 6122) )
      JUMPOUT(0x600D2CB0);
    result = sub_6077A638(dword_60CBFA90);
    if ( result == 1 )
    {
      result = 6135;
      FIELD_U8(a1, 6135) = 1;
    }
    return result;
  }
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
  if ( !v6 )
    goto LABEL_23;
  if ( FIELD_U8(a1, 6122) == 1 && sub_600D3A90() && !FIELD_U8(a1, 6350) )
  {
    FIELD_U8(a1, 6350) = 1;
    sub_6077A918(dword_60CBFA90, 0);
  }
  if ( ((unsigned int)&dword_60C80048 & ~(1611481532 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C80048) )
  {
    dword_60C80044 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C80048);
  }
  if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C80044) != 1 )
    goto LABEL_23;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1148))(v6) == 1 && !FIELD_U8(a1, 6120) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1152))(v6) )
    goto LABEL_23;
  FIELD_U32(dword_60C99D88, 32) = 0;
  FIELD_U8(dword_60C9CF0C, 1393) = 0;
  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked && FIELD_U32(ActorSlotChecked, 1320) == 5 )
    FIELD_U32(ActorSlotChecked, 1216) &= ~0x200u;
  v10 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v10 && FIELD_U32(v10, 1320) == 5 )
    FIELD_U32(v10, 1216) &= ~0x200u;
  v11 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v11 && FIELD_U32(v11, 1320) == 5 )
    FIELD_U32(v11, 1216) &= ~0x200u;
  v12 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( v12 && FIELD_U32(v12, 1320) == 5 )
    FIELD_U32(v12, 1216) &= ~0x200u;
  return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C7F6C4);
}
