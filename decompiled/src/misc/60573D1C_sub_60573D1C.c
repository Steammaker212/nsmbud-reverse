/* sub_60573D1C
 * address: 0x60573D1C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60573D1C(int result)
{
  if ( FIELD_U8(result, 539) )
    return EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(result, 539) - 1), 0, 1, 0, 0, 0, 0);
  return result;
}
