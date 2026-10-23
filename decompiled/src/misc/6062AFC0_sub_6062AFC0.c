/* sub_6062AFC0
 * address: 0x6062AFC0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062AFC0(int a1)
{
  if ( FIELD_U32(a1, 7268) )
    sub_605EC168(a1);
  else
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6604));
  return 1;
}
