/* sub_6034DA38
 * address: 0x6034DA38   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6034DA38(int a1, _DWORD *a2)
{
  _BYTE *v4; // r4
  StateBase *CurrentState; // r0
  int v6; // r7
  char v7; // r12
  int v8; // r0
  int v9; // r0
  int v10; // r0
  bool v11; // zf
  int v12; // r5

  v4 = *(_BYTE **)(a1 + 64);
  if ( v4 )
  {
    if ( v4[6136] )
      goto LABEL_4;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      goto LABEL_4;
    v8 = a2[35];
    if ( v8 && (FIELD_U32(a1, 148) & (1 << v8)) != 0 )
    {
      if ( v8 == 2 )
      {
        v9 = (*(int (__fastcall **)(_BYTE *, int, _DWORD *))(*(_DWORD *)v4 + 320))(v4, a1, a2);
      }
      else
      {
        if ( v8 != 1 )
          return;
        v9 = (*(int (__fastcall **)(_BYTE *, int, _DWORD *))(*(_DWORD *)v4 + 316))(v4, a1, a2);
      }
      if ( v9 == 1 )
      {
        v4[6296] = 1;
LABEL_4:
        FIELD_U8(a1, 110) |= 2u;
      }
    }
    else
    {
      v10 = a2[34];
      v11 = v10 == 15;
      if ( v10 != 15 )
        v11 = v10 == 0;
      if ( v11 )
      {
        v12 = a2[16];
        if ( ((unsigned int)&dword_60C7B37C & ~(1614076676 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v12
          && (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B378) == 1
          && sub_6075F914(v12) == 1
          && FIELD_F32(v12, 124) < 0.0 )
        {
          (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v4 + 388))(v4, v12);
          (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v4 + 404))(v4);
        }
      }
    }
  }
}
