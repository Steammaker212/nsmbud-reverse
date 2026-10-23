/* sub_6043B144
 * address: 0x6043B144   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043B144(_DWORD *a1)
{
  *a1 = off_60BFA9F4;
  if ( (_DWORD *)dword_60C9CA84 == a1 )
  {
    dword_60C9CA84 = 0;
    ResourceMgrRelated_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
