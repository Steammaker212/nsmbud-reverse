/* sub_606D6408
 * address: 0x606D6408   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606D6408(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r7
  StateBase *CurrentState; // r0
  int v7; // r6
  char v8; // r12
  StateBase *v9; // r0
  int v10; // r6
  int v11; // r0
  StateBase *v12; // r0
  int v13; // r6
  char *v14; // r8
  StateBase *v15; // r0
  int v16; // r6

  v5 = FIELD_U32(a1, 144);
  if ( ((unsigned int)&dword_60CBB780 & ~(1617781804 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB780) )
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
LABEL_15:
      FIELD_U8(a1, 220) = 1;
      return;
    }
    if ( (a2[637] & 0x18000) != 0 )
    {
      v9 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
      if ( v10 != (*(int (**)(void))(dword_60CBB75C + 8))() )
        goto LABEL_13;
      goto LABEL_14;
    }
    v11 = FIELD_U32(v5, 6124);
    if ( (a2[636] & 0x400) != 0 && (v11 & 0x30) == 0 )
    {
      v12 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
      if ( v13 != (*(int (**)(void))(dword_60CBB75C + 8))() )
LABEL_13:
        StateMgr__changeState((StateMgr *)(v5 + 6084), (StateBase *)&dword_60CBB75C);
LABEL_14:
      a2[556] |= 0x4000u;
      goto LABEL_15;
    }
    if ( (v11 & 0x30) != 0 && FIELD_F32(v5, 124) < 0.0 )
    {
      v14 = (char *)a2[549];
      if ( ((unsigned int)&dword_60C7B37C & ~(1617782208 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v14 && (**(int (__fastcall ***)(char *, int *))v14)(v14, &dword_60C7B378) == 1 )
      {
        sub_604005D0(AreaRumbleMgr_instance, v14[84], 6, 2, 0, 0);
        (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)v14 + 1168))(v14, v5, 19);
        v15 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
        v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
        if ( v16 == (*(int (**)(void))(dword_60CBB75C + 8))() )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
}
