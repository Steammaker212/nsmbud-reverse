/* sub_606D6A24
 * address: 0x606D6A24   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D6A24(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6152));
  if ( FIELD_U8(a1, 6848) )
    DrawMgr_drawModel(DrawMgr_instance, *(void **)(a1 + 6156));
  return 1;
}
