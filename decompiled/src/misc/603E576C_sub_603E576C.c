/* sub_603E576C
 * address: 0x603E576C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E576C(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  int v5; // r1
  int result; // r0
  unsigned int v7; // r1

  if ( ((unsigned int)&dword_60C8DC20 & ~(1614698376 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
  {
    dword_60C8DC1C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8DC20);
  }
  if ( !a2 || (v5 = (**a2)(a2, &dword_60C8DC1C), result = 1, !v5) )
  {
    v7 = FIELD_U32(a1, 24);
    result = 0;
    if ( v7 >= 4 )
      v7 = 0;
    if ( *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v7 + 32) == a2 )
      return 1;
  }
  return result;
}
