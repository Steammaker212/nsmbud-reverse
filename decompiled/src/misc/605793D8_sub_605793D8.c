/* sub_605793D8
 * address: 0x605793D8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605793D8(int a1)
{
  Actor *v2; // r4
  char v3; // r12

  MovementBlockCoinBase__vf150(a1);
  v2 = *(Actor **)(a1 + 56);
  if ( ((unsigned int)&dword_60C8DCF4 & ~(1616352248 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DCF4) )
  {
    dword_60C8DCF0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8DCF4);
  }
  if ( v2 )
  {
    if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v2, 0x0))(v2, &dword_60C8DCF0) == 1 )
      sub_6024A0E8(v2);
  }
}
