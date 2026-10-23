/* sub_60063F60
 * address: 0x60063F60   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60063F60(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r7

  if ( FIELD_U32(a3, 140) != 6 && Actor__getProfileId(*(Actor **)(a3 + 64)) != 727 )
    return BobOmb_vf64(a1, a2, a3);
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C810FC & ~(1611022252 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C810FC) )
  {
    dword_60C810F8 = (int)&off_60BC66C8;
    _cxa_guard_release(&dword_60C810FC);
  }
  if ( !v7 || !(**v7)(v7, &dword_60C810F8) )
    return BobOmb_vf64(a1, a2, a3);
  sub_6025E064(v7);
  return 1;
}
