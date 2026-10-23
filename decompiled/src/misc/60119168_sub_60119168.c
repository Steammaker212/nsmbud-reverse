/* sub_60119168
 * address: 0x60119168   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60119168(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r5
  int v6; // r0
  StateBase *CurrentState; // r0
  int v8; // r5
  int result; // r0
  StateBase *v10; // r0
  int v11; // r5
  StateBase *v12; // r0
  int v13; // r5

  CollisionMgr_process((_BYTE *)(a1 + 648));
  v2 = FIELD_U32(a1, 6304);
  v3 = FIELD_U32(v2, 8);
  v4 = FIELD_U32(v2, 12);
  if ( v3 > 1 )
    v4 += 4;
  v5 = *(_DWORD *)(*(_DWORD *)v4 + 28);
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9236));
  if ( (v5 & 0x10) != 0 )
  {
    if ( v6 )
      Actor__removeChild((Actor *)a1, *(Actor **)(a1 + 9228));
  }
  else if ( v6 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C86D50 + 8))();
    if ( v8 != result )
      return result;
    v10 = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 9232) + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
    if ( v11 != (*(int (**)(void))(dword_60C869A4 + 8))() )
      (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 9232) + 192))(FIELD_U32(a1, 9232), &dword_60C86A24);
  }
  else
  {
    v12 = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 9232) + 6084));
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
    if ( v13 != (*(int (**)(void))(dword_60C869A4 + 8))() )
      (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 9232) + 192))(FIELD_U32(a1, 9232), &dword_60C86A24);
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86C88);
}
