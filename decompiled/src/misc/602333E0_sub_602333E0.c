/* sub_602333E0
 * address: 0x602333E0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602333E0(int a1, int a2)
{
  int v3; // r0

  sub_604431BC(DrawMgr_instance, a2, 0);
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 420));
  v3 = FIELD_U32(a1, 436);
  if ( v3 && FIELD_S32(v3, 124) >= 1 )
    sub_60234378(v3, a1 + 352);
  return sub_60443298(DrawMgr_instance);
}
