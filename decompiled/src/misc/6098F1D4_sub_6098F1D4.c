/* sub_6098F1D4
 * address: 0x6098F1D4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098F1D4(int a1)
{
  char v1; // r12
  char v3; // r12
  int *v4; // r0
  int v5; // r5
  int i; // r4

  if ( ((unsigned int)&dword_60CD0BBC & ~(1620636140 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BBC) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1620636180 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60CD0BB8 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60CD0BBC);
  }
  if ( a1 )
  {
    v4 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( v4 )
    {
      while ( v4 != &dword_60CD0BB8 )
      {
        v4 = (int *)*v4;
        if ( !v4 )
          goto LABEL_13;
      }
      FIELD_U8(a1, 171) = 1;
    }
  }
LABEL_13:
  v5 = a1 + 16;
  for ( i = FIELD_U32(a1, 20); i != v5; i = FIELD_U32(i, 4) )
    sub_6098F1D4(i - 4);
}
