/* sub_608EB168
 * address: 0x608EB168   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EB168(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r4
  char v3; // r12
  int v4; // r0

  sub_608F133C(FIELD_U32(a1, 28));
  v2 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 32);
  if ( ((unsigned int)&dword_60CCEBE0 & ~(1619964300 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBE0) )
  {
    dword_60CCEBDC = (int)&off_60C5C3A8;
    _cxa_guard_release(&dword_60CCEBE0);
  }
  if ( !v2 )
    return sub_608EEE24(0);
  v4 = (**v2)(v2, &dword_60CCEBDC);
  if ( v4 )
    v4 = (int)v2;
  return sub_608EEE24(v4);
}
