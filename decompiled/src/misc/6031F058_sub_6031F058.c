/* sub_6031F058
 * address: 0x6031F058   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031F058(_DWORD *a1)
{
  int v2; // r4
  int v3; // r1
  int result; // r0
  int v5; // r6
  unsigned int i; // r5
  StateBase *v7; // r0
  int v8; // r7
  unsigned int v9; // r0
  int (__fastcall ***v10)(_DWORD, int *); // r10
  char v11; // r12
  StateBase *CurrentState; // r0
  int v13; // r9
  StateBase *v14; // r0
  int v15; // r7
  unsigned int v16; // r0
  bool v17; // zf

  j_ModelWrapper_updateAnims(a1[1781]);
  v2 = 0;
  v3 = a1[3249];
  result = 0;
  if ( v3 )
  {
    result = v3 - 1;
    a1[3249] = v3 - 1;
  }
  v5 = a1[3147];
  if ( v5 >= 1 )
  {
    v2 = 0;
    for ( i = 0; i != v5; ++i )
    {
      v10 = sub_6031C8CC((int)a1, i);
      if ( ((unsigned int)&dword_60C87A5C & ~(1613885868 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C87A5C) )
      {
        dword_60C87A58 = (int)&off_60BD28A8;
        _cxa_guard_release(&dword_60C87A5C);
      }
      if ( v10 && (**v10)(v10, &dword_60C87A58) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v10 + 1521));
        v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v13 != (*((int (__fastcall **)(StateBase *))stru_60C87918.vtable + 2))(&stru_60C87918) )
        {
          v14 = StateMgr__getCurrentState((StateMgr *)(v10 + 1521));
          v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
          if ( v15 != (*((int (__fastcall **)(StateBase *))stru_60C8793C.vtable + 2))(&stru_60C8793C) )
          {
            v7 = StateMgr__getCurrentState((StateMgr *)(v10 + 1521));
            v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
            if ( v8 == (*((int (__fastcall **)(StateBase *))stru_60C879EC.vtable + 2))(&stru_60C879EC) )
            {
              ++v2;
              *((_BYTE *)v10 + 19) = 1;
              v9 = 0;
              if ( i < 4 )
                v9 = i;
              a1[v9 + 1584] = 0;
            }
          }
        }
      }
      else
      {
        v16 = 0;
        ++v2;
        if ( i < 4 )
          v16 = i;
        a1[v16 + 1584] = 0;
      }
    }
    result = a1[3249];
  }
  v17 = v5 == v2;
  if ( v5 == v2 )
    v17 = result == 0;
  if ( v17 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C93814);
  return result;
}
