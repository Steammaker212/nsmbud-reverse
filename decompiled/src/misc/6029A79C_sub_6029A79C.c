/* sub_6029A79C
 * address: 0x6029A79C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029A79C(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  int v9; // r4
  char v10; // r12
  int v11; // r7
  float *v12; // r0
  float v13; // s2

  v6 = 0;
  v7 = FIELD_U8(a1, 6673);
  v8 = v7 == 0;
  if ( v7 )
    v8 = FIELD_U8(a1, 6848) == 0;
  if ( !v8 )
  {
    v9 = FIELD_U32(a2, 64);
    if ( ((unsigned int)dword_60C8FA54 & ~(1613342684 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C8FA54) )
    {
      dword_60C8FA50 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C8FA54);
    }
    if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C8FA50) == 1 )
    {
      v11 = FIELD_U32(a3, 64);
      if ( ((unsigned int)&dword_60C8E648 & ~(1613342804 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
      {
        dword_60C8E644 = (int)&off_60BDBC48;
        _cxa_guard_release(&dword_60C8E648);
      }
      if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C8E644) == 1 )
      {
        if ( sub_605DBD64(v11) != 1 || sub_60678E1C(v11) != 1 )
          return 1;
        v12 = (float *)sub_605DBD7C(v11);
        if ( v12 )
        {
          v13 = (float)(v12[27] + v12[143]) - FIELD_F32(a1, 108);
          if ( sqrtf(
                 (float)((float)((float)((float)(v12[28] + v12[144]) - FIELD_F32(a1, 112))
                               * (float)((float)(v12[28] + v12[144]) - FIELD_F32(a1, 112)))
                       + (float)(v13 * v13))
               + 0.0) < (float)(FIELD_F32(v11, 8132) * 0.5) )
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 624))(v9);
          return 1;
        }
      }
    }
  }
  return v6;
}
