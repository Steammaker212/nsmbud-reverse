/* sub_60357274
 * address: 0x60357274   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60357274(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r5
  float v8; // s4
  char v9; // r12
  bool v10; // zf
  int v11; // r5
  float v12[2]; // [sp+0h] [bp-28h] BYREF
  int v13; // [sp+8h] [bp-20h] BYREF
  int v14; // [sp+Ch] [bp-1Ch]
  int v15; // [sp+10h] [bp-18h]

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C95178 + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*(int (**)(void))(dword_60C9519C + 8))();
    if ( v7 != result )
    {
      sub_6014F61C(a1 + 648);
      v8 = FIELD_F32(a1, 112);
      v12[0] = FIELD_F32(a1, 108) + 0.0;
      v12[1] = v8 + 11.5;
      result = sub_6015DF58(a1 + 652, &v13, (int)v12);
      if ( result == 1 )
      {
        result = v14;
        if ( !FIELD_U8(dword_60CC6D8C, 17) )
        {
          result = v14 & 0xF;
          if ( result == 2 )
            return result;
          v11 = v15;
          if ( ((unsigned int)&dword_60C803E8 & ~(1614115824 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C803E8) )
          {
            dword_60C803E4 = (int)&off_60BC3188;
            _cxa_guard_release(&dword_60C803E8);
          }
          if ( v11 )
          {
LABEL_18:
            result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v11 + 8))(v11, &dword_60C803E4);
            if ( result )
              return result;
          }
          return SE_EMY_DOWN_ref_2A7624(a1);
        }
        v10 = (unsigned __int16)v13 == 0xA;
        if ( (unsigned __int16)v13 != 0xA )
        {
          result = v14 & 0xF;
          v10 = result == 2;
        }
        if ( !v10 )
        {
          v11 = v15;
          if ( ((unsigned int)&dword_60C803E8 & ~(1614115704 << v9) & 1) == 0 )
          {
            if ( _cxa_guard_acquire(&dword_60C803E8) )
            {
              dword_60C803E4 = (int)&off_60BC3188;
              _cxa_guard_release(&dword_60C803E8);
            }
          }
          if ( v11 )
            goto LABEL_18;
          return SE_EMY_DOWN_ref_2A7624(a1);
        }
      }
    }
  }
  return result;
}
