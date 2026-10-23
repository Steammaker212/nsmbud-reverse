/* sub_60009A78
 * address: 0x60009A78   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60009A78(_DWORD *a1)
{
  *a1 = off_60BC049C;
  if ( (_DWORD *)dword_60C7B41C == a1 )
  {
    dword_60C7B41C = 0;
    EnemyCounterMaybe_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
