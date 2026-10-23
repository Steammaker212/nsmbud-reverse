/* sub_604FE42C
 * address: 0x604FE42C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604FE42C(_DWORD *a1)
{
  *a1 = off_60BFEF8C;
  if ( (_DWORD *)dword_60CA7340 == a1 )
  {
    dword_60CA7340 = 0;
    (**(void (__fastcall ***)(int))dword_60CA7344)(dword_60CA7344);
    dword_60CA7344 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
