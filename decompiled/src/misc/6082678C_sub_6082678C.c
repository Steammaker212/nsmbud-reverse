/* sub_6082678C
 * address: 0x6082678C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6082678C(_DWORD *a1)
{
  *a1 = off_60C2A72C;
  if ( (_DWORD *)dword_60CC6E00 == a1 )
  {
    dword_60CC6E00 = 0;
    (**(void (__fastcall ***)(int))dword_60CC6E04)(dword_60CC6E04);
    dword_60CC6E04 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
