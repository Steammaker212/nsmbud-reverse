/* sub_60857530
 * address: 0x60857530   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60857530(int a1, int a2)
{
  char v2; // r12
  char v5; // r12
  int *v6; // r0
  int v7; // r0
  int v8; // r6
  int i; // r5

  if ( ((unsigned int)&dword_60C9D9E4 & ~(1619359052 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9E4) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1619359092 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60C9D9E0 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60C9D9E4);
  }
  if ( a1 )
  {
    v6 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( v6 )
    {
      while ( v6 != &dword_60C9D9E0 )
      {
        v6 = (int *)*v6;
        if ( !v6 )
          goto LABEL_14;
      }
      v7 = FIELD_U32(a1, 208);
      FIELD_U16(a1, 216) = FIELD_U16(a1, 216) & 0xFFFB | (4 * ((v7 != a2) | (FIELD_U16(a1, 216) >> 2) & 1));
      if ( v7 != a2 )
        FIELD_U32(a1, 208) = a2;
    }
  }
LABEL_14:
  v8 = a1 + 16;
  for ( i = FIELD_U32(a1, 20); i != v8; i = FIELD_U32(i, 4) )
    sub_60857530(i - 4);
}
