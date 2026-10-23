/* sub_608F61C8
 * address: 0x608F61C8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F61C8(int a1, int a2)
{
  __int16 v3; // r7
  int v4; // r4
  int v5; // r6
  int v6; // r0
  char v7; // r12
  bool v8; // zf

  v3 = FIELD_U16(a1, 120);
  v4 = FIELD_U32(a1, 28);
  v5 = FIELD_U32(a1, 36);
  (**(void (__fastcall ***)(int))a1)(a1);
  if ( v5 )
  {
    v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 76))(v5);
    v8 = (v3 & 8) == 0;
    if ( (v3 & 8) == 0 )
      v8 = v6 == 1;
    if ( v8 )
    {
      if ( ((unsigned int)&dword_60CCEE70 & ~(1620009500 << v7) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60CCEE70) )
        {
          dword_60CCEE6C = (int)&off_60C5C940;
          _cxa_guard_release(&dword_60CCEE70);
        }
      }
      if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 8))(v5, &dword_60CCEE6C) )
        return sub_608F62C0(v5, v4, a2);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 28))(v5, v4);
    }
  }
  return 0;
}
