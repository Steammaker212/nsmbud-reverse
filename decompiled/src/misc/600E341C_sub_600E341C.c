/* sub_600E341C
 * address: 0x600E341C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E341C(int a1)
{
  if ( FIELD_U8(a1, 6540) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6100));
  return 1;
}
