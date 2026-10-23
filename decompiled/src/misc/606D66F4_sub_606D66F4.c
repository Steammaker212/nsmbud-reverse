/* sub_606D66F4
 * address: 0x606D66F4   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606D66F4(int a1, int a2)
{
  char v2; // r12
  int v5; // r7
  StateBase *CurrentState; // r0
  int v7; // r6
  char v8; // r12
  int v9; // r0
  bool v10; // zf
  bool v11; // zf
  bool v12; // zf
  int v13; // r8
  StateBase *v14; // r0
  int v15; // r6
  StateBase *v16; // r0
  int v17; // r6
  StateBase *v18; // r0
  int v19; // r6

  v5 = FIELD_U32(a1, 144);
  if ( ((unsigned int)&dword_60CBB780 & ~(1617782548 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB780) )
  {
    dword_60CBB77C = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60CBB780);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CBB77C) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*(int (**)(void))(dword_60CBB75C + 8))() )
    {
LABEL_30:
      FIELD_U8(a1, 220) = 1;
      return;
    }
    v9 = FIELD_U32(a2, 2532);
    v10 = (v9 & 0x10000) == 0;
    if ( (v9 & 0x10000) != 0 )
      v10 = (FIELD_U8(a2, 2542) & 1) == 0;
    if ( !v10 )
      goto LABEL_27;
    v11 = (FIELD_U32(a2, 2532) & 0x8000) == 0;
    if ( (v9 & 0x8000) != 0 )
      v11 = (FIELD_U8(a2, 2541) & 0x80) == 0;
    if ( !v11 )
    {
LABEL_27:
      v16 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
      if ( v17 != (*(int (**)(void))(dword_60CBB75C + 8))() )
LABEL_28:
        StateMgr__changeState((StateMgr *)(v5 + 6084), (StateBase *)&dword_60CBB75C);
LABEL_29:
      FIELD_U32(a2, 2224) |= 0x1000000u;
      goto LABEL_30;
    }
    v12 = (FIELD_U8(a2, 2529) & 4) == 0;
    if ( (FIELD_U8(a2, 2529) & 4) != 0 )
      v12 = (FIELD_U8(a2, 2537) & 4) == 0;
    if ( !v12 && (FIELD_U8(v5, 6124) & 0x34) == 0 )
    {
      v18 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
      if ( v19 == (*(int (**)(void))(dword_60CBB75C + 8))() )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (FIELD_U8(v5, 6124) & 0x30) != 0 )
    {
      v13 = FIELD_U32(a2, 2196);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617782816 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v13 && (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C7B378) == 1 )
      {
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v13 + 1168))(v13, v5, 4);
        v14 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
        v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
        if ( v15 != (*(int (**)(void))(dword_60CBB75C + 8))() )
          goto LABEL_28;
        goto LABEL_29;
      }
    }
  }
}
