/* sub_600F03EC
 * address: 0x600F03EC   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F03EC(int a1)
{
  char v2; // r12
  _DWORD *v3; // r1
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  Actor **i; // r9
  Actor *v13; // r6
  int v14; // r0
  bool v15; // zf
  ActiveColliderMgr *v16; // r6
  int result; // r0

  KoopalingBase__vf36C((int *)a1);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1) == 1 )
  {
    v3 = (_DWORD *)PlayerMgr_instance;
    v4 = FIELD_U32(PlayerMgr_instance, 32);
    v5 = v4 == 0;
    if ( v4 )
      v5 = FIELD_U8(a1, 8428) == 0;
    if ( !v5 )
    {
      sub_607A1FFC(v4);
      v3 = (_DWORD *)PlayerMgr_instance;
    }
    v6 = v3[9];
    v7 = v6 == 0;
    if ( v6 )
      v7 = FIELD_U8(a1, 8429) == 0;
    if ( !v7 )
    {
      sub_607A1FFC(v6);
      v3 = (_DWORD *)PlayerMgr_instance;
    }
    v8 = v3[10];
    v9 = v8 == 0;
    if ( v8 )
      v9 = FIELD_U8(a1, 8430) == 0;
    if ( !v9 )
    {
      sub_607A1FFC(v8);
      v3 = (_DWORD *)PlayerMgr_instance;
    }
    v10 = v3[11];
    v11 = v10 == 0;
    if ( v10 )
      v11 = FIELD_U8(a1, 8431) == 0;
    if ( !v11 )
      sub_607A1FFC(v10);
    for ( i = *(Actor ***)(ActorMgr__instance + 27172); i != *(Actor ***)(ActorMgr__instance + 27180); ++i )
    {
      v13 = *i;
      if ( ((unsigned int)&dword_60C7B364 & ~(1611597192 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v13
        && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v13, 0x0))(v13, &StageActor_RTTI) == 1
        && Actor__getProfileId(v13) == 699 )
      {
        if ( ((unsigned int)&dword_60C856D0 & ~(1611597300 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C856D0) )
        {
          dword_60C856CC = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C856D0);
        }
        v14 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v13, 0x0))(v13, &dword_60C856CC);
        v15 = v14 == 1;
        if ( v14 == 1 )
          v15 = FIELD_U8(v13, 0x13) == 0;
        if ( v15 )
          sub_600F6FCC(v13);
      }
    }
    v16 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8120));
    ActiveColldierMgr_removeFromCreateList(v16, (ActiveCollider *)(a1 + 8120));
    ActiveColldierMgr_removeFromList3(v16, a1 + 8120);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 8652) + 12) + 4));
    FIELD_U8(a1, 8656) = 0;
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
  if ( !result )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    if ( !result )
    {
      FIELD_U32(a1, 7760) = 1065772646;
      return 7760;
    }
  }
  return result;
}
