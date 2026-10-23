/* sub_6073107C
 * address: 0x6073107C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6073107C(_DWORD *a1)
{
  *a1 = off_60C22750;
  if ( (_DWORD *)dword_60CBDBF4 == a1 )
  {
    dword_60CBDBF4 = 0;
    (**(void (__fastcall ***)(int))dword_60CBDBF8)(dword_60CBDBF8);
    dword_60CBDBF8 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
