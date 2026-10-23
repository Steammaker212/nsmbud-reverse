/* sub_6009293C
 * address: 0x6009293C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6009293C(int a1, int a2)
{
  _BYTE *v4; // r6
  char v5; // r12

  v4 = (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  if ( ((unsigned int)&dword_60C81760 & ~(1611213164 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  if ( v4 && (**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &dword_60C8175C) == 1 && v4[7248] )
  {
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v4 + 1168))(v4, a2);
    return 1;
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 876))(a1);
    return 1;
  }
}
