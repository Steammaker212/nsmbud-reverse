/* sub_6071A714
 * address: 0x6071A714   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6071A714(_DWORD *a1)
{
  *a1 = off_60C21D34;
  if ( (_DWORD *)dword_60CBD824 == a1 )
  {
    dword_60CBD824 = 0;
    TilesetMgr_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
