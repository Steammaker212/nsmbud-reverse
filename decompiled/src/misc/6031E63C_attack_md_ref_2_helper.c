/* attack_md_ref_2_helper
 * address: 0x6031E63C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall attack_md_ref_2_helper(_DWORD *a1)
{
  int v2; // r9
  unsigned int v3; // r5
  unsigned int v4; // r6
  __guard *v5; // r7
  int (__fastcall ***v6)(_DWORD, int *); // r11
  char v7; // r12
  StateBase *CurrentState; // r0
  int v9; // r10
  StateBase *v10; // r0
  __guard *v11; // r10
  __guard *v12; // r6
  int v13; // r7
  bool v14; // zf
  int (__fastcall **v15)(_DWORD, int *); // [sp+18h] [bp-30h]
  int (__fastcall **v16)(_DWORD, int *); // [sp+1Ch] [bp-2Ch]

  v2 = a1[3147];
  if ( v2 >= 1 )
  {
    v3 = 0;
    v4 = (unsigned int)&dword_60C87A5C;
    v5 = &dword_60C87A5C;
    do
    {
      v6 = sub_6031C8CC((int)a1, v3);
      if ( (v4 & ~(1613883100 << v7) & 1) == 0 && _cxa_guard_acquire(v5) )
      {
        dword_60C87A58 = (int)&off_60BD28A8;
        _cxa_guard_release(&dword_60C87A5C);
      }
      if ( v6 )
      {
        if ( (**v6)(v6, &dword_60C87A58) == 1 )
        {
          v16 = (int (__fastcall **)(_DWORD, int *))a1[27];
          v15 = (int (__fastcall **)(_DWORD, int *))a1[28];
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 1521));
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v9 != (*((int (__fastcall **)(StateBase *))stru_60C87918.vtable + 2))(&stru_60C87918) )
          {
            v10 = StateMgr__getCurrentState((StateMgr *)(v6 + 1521));
            v11 = (__guard *)v4;
            v12 = v5;
            v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
            v14 = v13 == (*((int (__fastcall **)(StateBase *))stru_60C8793C.vtable + 2))(&stru_60C8793C);
            v5 = v12;
            v4 = (unsigned int)v11;
            if ( !v14 )
            {
              v6[1664] = v16;
              v6[1665] = v15;
              StateMgr__changeState((StateMgr *)(v6 + 1521), (StateBase *)&dword_60C879C8);
            }
          }
        }
      }
      ++v3;
    }
    while ( v2 != v3 );
  }
}
