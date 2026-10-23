/* sub_60234F80
 * address: 0x60234F80   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60234F80(int a1, int a2)
{
  int result; // r0

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4));
  if ( !a2 )
    return sub_604433E4((int)DrawMgr_instance, *(_DWORD **)(a1 + 12));
  result = sub_604115D4(a2, a1 + 20, FIELD_F32(a1, 32));
  if ( result == 1 )
    return sub_604433E4((int)DrawMgr_instance, *(_DWORD **)(a1 + 12));
  return result;
}
