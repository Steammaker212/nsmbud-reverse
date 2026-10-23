/* sub_60315974
 * address: 0x60315974   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60315974(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r7
  StateBase *CurrentState; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r5
  StateBase *v12; // r0
  int v13; // r5
  int v14; // r0

  if ( !FIELD_U8(a1, 7656) && FIELD_U32(a3, 136) != 15 )
  {
    v7 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613846964 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v7
      && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1
      && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 1164))(v7, a2, a3) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v9 != (*(int (**)(void))(dword_60C9349C + 8))() )
        FIELD_U32(a1, 80) = sub_6000AED0(a1, FIELD_U32(a3, 64));
      v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
      if ( v11 == (*((int (**)(void))DryBones_StateId_Turn._.vtable + 2))() )
        (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &DryBones_StateId_Walk);
      v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
      if ( v13 != (*(int (**)(void))(dword_60C9349C + 8))() )
      {
        v14 = FIELD_U32(a1, 80);
        FIELD_U32(a1, 160) = *(&DryBones_rotations + v14);
        FIELD_U32(a1, 120) = dword_60AFF3B8[v14];
      }
      sub_60315140((float *)a1);
    }
  }
}
