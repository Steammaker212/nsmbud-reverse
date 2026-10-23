/* KoopaTroopa_vf175
 * address: 0x6035D61C   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall KoopaTroopa_vf175(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v4; // r12

  if ( (FIELD_U8(a1, 24) & 0x10) != 0 && Actor__getProfileId((Actor *)a1) == 512 && FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( ((unsigned int)&dword_60C7B408 & ~(1614141048 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( a2 )
    {
      if ( (**a2)(a2, &dword_60C7B404) == 1 )
        FIELD_F32(a1, 636) = sub_6075F8F8(a2);
    }
  }
  JUMPOUT(0x603A455C);
}
