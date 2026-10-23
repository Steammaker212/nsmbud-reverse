/* sub_601EB614
 * address: 0x601EB614   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EB614(int a1)
{
  if ( FIELD_F32(a1, 128) != 0.0 || FIELD_F32(a1, 132) != 0.0 || FIELD_F32(a1, 136) != 0.0 )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 264));
  return 1;
}
