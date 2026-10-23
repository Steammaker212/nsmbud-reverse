/* sub_60253D58
 * address: 0x60253D58   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60253D58(_DWORD *a1)
{
  *a1 = off_60BDA838;
  if ( (_DWORD *)dword_60C8DFB8 == a1 )
  {
    dword_60C8DFB8 = 0;
    dword_60C8DFC0 = 0;
    dword_60C8DFBC = 0;
  }
  return sead__IDisposer__dtor(a1);
}
