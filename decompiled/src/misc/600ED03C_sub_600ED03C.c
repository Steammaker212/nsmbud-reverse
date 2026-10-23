/* sub_600ED03C
 * address: 0x600ED03C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ED03C(int a1)
{
  if ( FIELD_U8(a1, 8336) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7096));
  return 1;
}
