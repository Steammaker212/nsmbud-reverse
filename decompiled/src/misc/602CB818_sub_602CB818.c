/* sub_602CB818
 * address: 0x602CB818   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CB818(int result)
{
  if ( FIELD_U8(result, 40) )
    return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(result + 4));
  return result;
}
