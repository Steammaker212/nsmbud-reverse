/* sub_6069E5A4
 * address: 0x6069E5A4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069E5A4(int a1)
{
  int result; // r0

  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 8));
  result = FIELD_U8(a1, 710);
  if ( FIELD_U8(a1, 710) )
    return DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 4));
  return result;
}
