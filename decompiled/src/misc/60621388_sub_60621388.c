/* sub_60621388
 * address: 0x60621388   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60621388(int a1)
{
  if ( FIELD_U32(a1, 6304) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  return 1;
}
