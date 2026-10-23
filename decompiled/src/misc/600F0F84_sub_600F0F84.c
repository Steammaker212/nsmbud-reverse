/* sub_600F0F84
 * address: 0x600F0F84   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F0F84(int a1)
{
  int result; // r0

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7096));
  result = FIELD_U8(a1, 8656);
  if ( FIELD_U8(a1, 8656) )
    return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 8652));
  return result;
}
