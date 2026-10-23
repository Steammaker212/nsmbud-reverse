/* FireSnake__vf150
 * address: 0x602AD7E8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7140
// 
// Overridden by: None
int __fastcall FireSnake__vf150(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r6
  int v6; // r4
  float *v7; // r7
  int v8; // r5
  float *v9; // r6
  bool v10; // zf
  float v11; // s16

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)dword_60C90B98 & ~(1613420552 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C90B98) )
  {
    dword_60C90B94 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C90B98);
  }
  if ( v4 )
  {
    v6 = (**v4)(v4, &dword_60C90B94);
    if ( v6 )
      v6 = (int)v4;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(float **)(a3 + 64);
  if ( ((unsigned int)&dword_60C8E648 & ~(1613420684 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
  {
    dword_60C8E644 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60C8E648);
  }
  v8 = 0;
  if ( v7 )
  {
    v9 = (float *)(**(int (__fastcall ***)(float *, int *))v7)(v7, &dword_60C8E644);
    if ( v9 )
      v9 = v7;
    v10 = v6 == 0;
    if ( v6 )
      v10 = v9 == 0;
    if ( !v10 && !FIELD_U8(v6, 19) )
    {
      v8 = 1;
      if ( sub_605DBD64(v9) == 1 && sub_60678E1C(v9) == 1 )
      {
        v11 = v9[27] - FIELD_F32(v6, 108);
        if ( sqrtf(
               (float)((float)(v9[28] - FIELD_F32(v6, 112)) * (float)(v9[28] - FIELD_F32(v6, 112)))
             + (float)(v11 * v11)) < (float)(v9[2033] * 0.5) )
        {
          StateMgrExt_changeState((StateMgr *)(v6 + 6084), (StateBase *)&dword_60C90B74);
          if ( v11 > 0.0 || v11 < 0.0 )
            FIELD_F32(v6, 120) = -FIELD_F32(v6, 120);
          FIELD_U32(v6, 124) = 0x40000000;
        }
      }
    }
  }
  return v8;
}
