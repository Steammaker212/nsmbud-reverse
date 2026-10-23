/* BigBoo_vf84
 * address: 0x603AF114   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_vf84(float *a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r4
  int v7; // r7
  char v8; // r12
  int v9; // r6
  float *v10; // r0
  float v11; // s2
  float *v12; // r0

  v5 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C97C00 & ~(1614475572 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C97C00) )
  {
    dword_60C97BFC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C97C00);
  }
  v7 = 0;
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C97BFC) == 1 )
  {
    v9 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C8E648 & ~(1614475696 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
    {
      dword_60C8E644 = (int)&off_60BDBC48;
      _cxa_guard_release(&dword_60C8E648);
    }
    if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C8E644) == 1 )
    {
      if ( sub_605DBD64(v9) != 1 || sub_60678E1C(v9) != 1 )
        return 1;
      v10 = (float *)sub_605DBD7C(v9);
      if ( v10 )
      {
        v11 = (float)(v10[27] + v10[143]) - a1[27];
        if ( sqrtf(
               (float)((float)((float)((float)(v10[28] + v10[144]) - a1[28])
                             * (float)((float)(v10[28] + v10[144]) - a1[28]))
                     + (float)(v11 * v11))
             + 0.0) < (float)(FIELD_F32(v9, 8132) * 0.5) )
        {
          v12 = (float *)sub_605DBD7C(v9);
          a1[1771] = v12[27] + v12[143];
          a1[1772] = v12[28] + v12[144];
          a1[1773] = v12[29] + v12[145];
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C97B8C);
        }
        return 1;
      }
    }
  }
  return v7;
}
