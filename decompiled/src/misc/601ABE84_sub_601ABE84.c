/* sub_601ABE84
 * address: 0x601ABE84   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ABE84(int a1)
{
  if ( FIELD_U8(a1, 428) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 268));
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 272));
  return 1;
}
