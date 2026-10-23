/* sub_6074BCA0
 * address: 0x6074BCA0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074BCA0(int a1)
{
  if ( FIELD_U8(a1, 1212) )
    DrawMgr_drawModel(DrawMgr_instance, *(void **)(a1 + 1196));
  return 1;
}
