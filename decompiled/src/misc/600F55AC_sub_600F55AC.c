/* sub_600F55AC
 * address: 0x600F55AC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F55AC(int a1)
{
  if ( FIELD_U8(a1, 6328) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6324));
  return 1;
}
