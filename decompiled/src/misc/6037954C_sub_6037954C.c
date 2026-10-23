/* sub_6037954C
 * address: 0x6037954C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6037954C()
{
  char v0; // r12
  int (__fastcall ***v1)(_DWORD, int *); // r4

  v1 = *(int (__fastcall ****)(_DWORD, int *))(dword_60C96478 + 104);
  if ( ((unsigned int)&dword_60C965B4 & ~(1614255472 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
  {
    dword_60C965B0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C965B4);
  }
  if ( v1 && (**v1)(v1, &dword_60C965B0) == 1 )
    return sub_6039D1E4(v1);
  else
    return 0;
}
