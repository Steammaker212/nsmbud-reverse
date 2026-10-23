/* sub_602D6DAC
 * address: 0x602D6DAC   size: 1004   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602D6DAC(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  StateBase *v4; // r0
  int v5; // r5
  char v6; // r1
  StateBase *CurrentState; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r6
  StateBase *v19; // r0
  int v20; // r6
  StateBase *v21; // r0
  int v22; // r6
  StateBase *v23; // r0
  int v24; // r6
  int v25; // r5
  char v26; // r12

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C91C6C & ~(1613589956 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C91C6C) )
  {
    dword_60C91C68 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C91C6C);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C91C68) == 1 )
  {
    if ( !FIELD_U32(v3, 6100) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v8 == (*(int (**)(void))(dword_60C91BC0 + 8))() )
        goto LABEL_18;
      v9 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
      if ( v10 == (*(int (**)(void))(dword_60C91BE0 + 8))() )
        goto LABEL_18;
      v11 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      if ( v12 == (*(int (**)(void))(dword_60C91B80 + 8))() )
        goto LABEL_18;
      v13 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
      if ( v14 == (*(int (**)(void))(dword_60C91BA0 + 8))() )
        goto LABEL_18;
      v15 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
      if ( v16 == (*(int (**)(void))(dword_60C91AE0 + 8))() )
        goto LABEL_18;
      v17 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
      if ( v18 == (*(int (**)(void))(dword_60C91B00 + 8))()
        || (v19 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084)),
            v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
            v20 == (*(int (**)(void))(dword_60C91B20 + 8))())
        || (v21 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084)),
            v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21),
            v22 == (*(int (**)(void))(dword_60C91B40 + 8))())
        || (v23 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084)),
            v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23),
            v24 == (*(int (**)(void))(dword_60C91B60 + 8))()) )
      {
LABEL_18:
        FIELD_U32(v3, 120) = 0;
        FIELD_U32(v3, 124) = 0;
        if ( FIELD_U8(v3, 6673) )
        {
          v25 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v3, 6852));
          if ( ((unsigned int)&dword_60C88030 & ~(1613590732 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
          {
            dword_60C8802C = (int)&off_60BD20C4;
            _cxa_guard_release(&dword_60C88030);
          }
          if ( v25 && (**(int (__fastcall ***)(int, int *))v25)(v25, &dword_60C8802C) == 1 && !FIELD_U8(v25, 6480) )
          {
            FIELD_U8(v25, 19) = 1;
            FIELD_U8(v3, 6673) = 0;
          }
        }
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C91C00);
        sub_602A3EFC(v3 + 7384, 8, 0.0625);
        v6 = 1;
        goto LABEL_27;
      }
    }
    v4 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
    if ( v5 == (*(int (**)(void))(dword_60C91C00 + 8))() )
    {
      sub_602A3EFC(v3 + 7384, 8, 0.0625);
      sub_602D7200(v3);
      v6 = 0;
LABEL_27:
      FIELD_U8(v3, 7416) = v6;
    }
  }
  return 1;
}
