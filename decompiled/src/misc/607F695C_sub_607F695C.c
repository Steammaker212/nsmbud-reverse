/* sub_607F695C
 * address: 0x607F695C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F695C(int a1)
{
  char v1; // r12
  int v2; // r0
  int v3; // r4
  int v4; // r5

  v2 = FIELD_U32(a1, 104);
  v3 = 0;
  if ( v2 )
  {
    v4 = FIELD_U32(v2, 12);
    if ( ((unsigned int)&dword_60CC62F4 & ~(1618962820 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC62F4) )
    {
      dword_60CC62F0 = (int)&off_60C278A4;
      _cxa_guard_release(&dword_60CC62F4);
    }
    if ( v4 )
    {
      v3 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60CC62F0);
      if ( v3 )
        return v4;
    }
  }
  return v3;
}
