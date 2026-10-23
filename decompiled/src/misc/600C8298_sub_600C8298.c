/* sub_600C8298
 * address: 0x600C8298   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600C8298(int a1)
{
  int *v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r1
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r1
  _BYTE *v10; // r0
  int v11; // r5
  char v12; // r12
  StateBase *v13; // r0
  int v14; // r5
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r1
  ActorBuildInfo v18; // [sp+0h] [bp-40h] BYREF

  v2 = (int *)(a1 + 6128);
  switch ( FIELD_U32(a1, 6128) )
  {
    case 0:
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6244));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v4 == (*(int (**)(void))(dword_60C83F80 + 8))() && FIELD_U32(a1, 6216) == 3 )
      {
        v5 = 120;
        if ( (FIELD_U8(dword_60C99DD4, 848) & 2) != 0 )
          v5 = 30;
        v6 = FIELD_U8(dword_60C99DD4, 848) & 2 | 1;
        FIELD_U32(a1, 6124) = v5;
        goto LABEL_18;
      }
      break;
    case 1:
      v7 = (_DWORD *)(a1 + 6124);
      v8 = FIELD_U32(a1, 6124);
      if ( !v8 || (v9 = v8 - 1, (*v7 = v9) == 0) )
      {
        *v2 = 2;
        memset(&v18, 0, sizeof(v18));
        v18.profile = Profile__get(0x2D0u);
        v10 = ActorMgr__create((void *)ActorMgr__instance, &v18, 0);
        if ( v10 )
          FIELD_U32(a1, 6172) = *((_DWORD *)v10 + 2);
      }
      break;
    case 2:
      v11 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6172));
      if ( ((unsigned int)&dword_60C80FD8 & ~(1611432960 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C80FD8) )
      {
        dword_60C80FD4 = (int)&off_60BC2CB4;
        _cxa_guard_release(&dword_60C80FD8);
      }
      if ( v11 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C80FD4) == 1 )
        {
          v13 = StateMgr__getCurrentState((StateMgr *)(v11 + 6084));
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
          if ( v14 == (*(int (**)(void))(dword_60C80FB4 + 8))() )
          {
            FIELD_U32(a1, 6124) = 60;
            v6 = 3;
LABEL_18:
            *v2 = v6;
          }
        }
      }
      break;
    case 3:
      v15 = (_DWORD *)(a1 + 6124);
      v16 = FIELD_U32(a1, 6124);
      if ( !v16 || (v17 = v16 - 1, (*v15 = v17) == 0) )
      {
        FIELD_U32(a1, 6216) = 4;
        *v2 = 4;
      }
      break;
    default:
      return;
  }
}
