/* sub_6095065C
 * address: 0x6095065C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6095065C(_DWORD *a1)
{
  *a1 = off_60C5E8A0;
  if ( (_DWORD *)dword_60CD0A10 == a1 )
  {
    dword_60CD0A10 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0A14 + 4))(dword_60CD0A14);
    dword_60CD0A14 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
