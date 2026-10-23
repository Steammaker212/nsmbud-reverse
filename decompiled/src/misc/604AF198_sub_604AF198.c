/* sub_604AF198
 * address: 0x604AF198   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604AF198(_DWORD *a1)
{
  *a1 = off_60BFDEE8;
  if ( (_DWORD *)dword_60CA190C == a1 )
  {
    dword_60CA190C = 0;
    (**(void (__fastcall ***)(int))dword_60CA1910)(dword_60CA1910);
    dword_60CA1910 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
