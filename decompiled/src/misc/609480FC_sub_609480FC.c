/* sub_609480FC
 * address: 0x609480FC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609480FC(_DWORD *a1)
{
  *a1 = off_60C5E85C;
  if ( (_DWORD *)dword_60CD0A08 == a1 )
  {
    dword_60CD0A08 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0A0C + 4))(dword_60CD0A0C);
    dword_60CD0A0C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
