/* Level_vf0
 * address: 0x60727204   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Level_vf0(_DWORD *a1)
{
  *a1 = Level_vtable;
  if ( (_DWORD *)dword_60CBD898 == a1 )
  {
    dword_60CBD898 = 0;
    Level_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
