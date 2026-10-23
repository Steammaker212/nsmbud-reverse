/* sub_601469D8
 * address: 0x601469D8   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601469D8(int a1)
{
  int v2; // r0
  int v3; // r5
  StateBase *CurrentState; // r0
  int v5; // r7
  StateBase *v6; // r0
  int v7; // r6
  int v8; // r7
  int result; // r0
  _DWORD *v10; // r1
  int v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r1
  int v14; // r0
  ActiveColliderMgr *v15; // r5

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6412));
  v3 = v2;
  if ( !v2
    || FIELD_U8(v2, 536)
    || (CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v5 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))())
    || *(_DWORD *)(FIELD_U32(v3, 620) + 12) == 1
    || *(_DWORD *)(FIELD_U32(v3, 624) + 24) == 1
    || (v6 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60C96E74 + 8))()) )
  {
    v8 = a1 + 6300;
    if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 20) <= 40.0 )
      FIELD_U8(a1, 19) = 1;
    else
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C88120);
  }
  else
  {
    v10 = *(_DWORD **)(v3 + 6300);
    v8 = a1 + 6300;
    v11 = v10[3];
    v12 = v10[2];
    v13 = v10[17];
    v14 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
    if ( v12 > v13 )
      v11 += 4 * v13;
    FIELD_U32(v14, 20) = *(_DWORD *)(*(_DWORD *)v11 + 20);
    FIELD_U32(v14, 28) |= 2u;
    if ( *(float *)(**(_DWORD **)(*(_DWORD *)v8 + 12) + 20) == 38.0 )
    {
      v15 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v15, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v15, (ActiveCollider *)(a1 + 188));
      }
    }
  }
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = **(_DWORD **)(*(_DWORD *)v8 + 12);
  if ( FIELD_F32(result, 20) >= 36.0 )
  {
    if ( (result = FIELD_U32(a1, 2872), (result & 0x10400) == 0x400)
      || (result & 0x440000) != 0 && (result & 0x10000000) == 0
      || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
    {
      JUMPOUT(0x60147BB0);
    }
  }
  return result;
}
