/* sub_602E6DDC
 * address: 0x602E6DDC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E6DDC(int a1)
{
  int result; // r0

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)a1);
  result = FIELD_U32(a1, 64);
  if ( result == 1 )
    return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4));
  return result;
}
