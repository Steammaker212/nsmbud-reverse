/* sub_600FF6F8
 * address: 0x600FF6F8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FF6F8(_DWORD *a1)
{
  int v2; // r5
  char v3; // r12

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611659044 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81764) == 1 )
    sub_60421AD4(FIELD_U32(v2, 7100));
  (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 780))(a1, 0);
  a1[2359] = -1;
  return -1;
}
