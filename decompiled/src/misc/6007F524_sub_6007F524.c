/* sub_6007F524
 * address: 0x6007F524   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6007F524(int a1)
{
  sub_602372C0(a1 + 6188, 579, a1 + 6292, 1);
  if ( FIELD_U8(a1, 6104) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6100));
  return 1;
}
