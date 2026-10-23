/* sub_60362574
 * address: 0x60362574   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60362574(int a1)
{
  if ( FIELD_U8(a1, 7036) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  return 1;
}
