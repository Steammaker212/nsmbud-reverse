/* sub_602F2A24
 * address: 0x602F2A24   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD **__fastcall sub_602F2A24(_DWORD **result)
{
  if ( *result )
    return (_DWORD **)DrawMgr_drawModel2(DrawMgr_instance, *result);
  return result;
}
