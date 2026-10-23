/* sub_600BBC5C
 * address: 0x600BBC5C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BBC5C(int a1)
{
  int v2; // r6
  _DWORD *v3; // r1
  _DWORD *v4; // r1

  v2 = dword_60CD0B40;
  sub_60443298(DrawMgr_instance);
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_604431BC(DrawMgr_instance, *v3, 0);
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6188));
  sub_60443298(DrawMgr_instance);
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 9u )
    v4 += 9;
  sub_604431BC(DrawMgr_instance, *v4, 0);
  return 1;
}
