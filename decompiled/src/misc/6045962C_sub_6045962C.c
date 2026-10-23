/* sub_6045962C
 * address: 0x6045962C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6045962C()
{
  char v0; // r12
  int result; // r0
  int v2; // r4
  int (__fastcall ****v3)(_DWORD, int *); // r5
  int (__fastcall ***v4)(_DWORD, int *); // r7

  result = FIELD_U32(dword_60CCF448, 212);
  if ( result )
  {
    v2 = 4 * result;
    v3 = *(int (__fastcall *****)(_DWORD, int *))(dword_60CCF448 + 220);
    do
    {
      v4 = *v3;
      if ( ((unsigned int)&dword_60C9CF14 & ~(1615173272 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
      {
        dword_60C9CF10 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C9CF14);
      }
      result = (**v4)(v4, &dword_60C9CF10);
      if ( v4 )
      {
        result ^= 1u;
        if ( !result )
          result = sub_60458A04((int)v4);
      }
      v2 -= 4;
      ++v3;
    }
    while ( v2 );
  }
  return result;
}
