/* sub_605716FC
 * address: 0x605716FC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605716FC(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 144);
  if ( ((unsigned int)&dword_60CAE964 & ~(1616320276 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE964) )
  {
    dword_60CAE960 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAE964);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CAE960) == 1 )
    {
      v4 = 1;
      if ( !FIELD_U32(v3, 7456) )
        sub_602A3EFC(v3 + 7432, 24, 0.0625);
    }
  }
  return v4;
}
