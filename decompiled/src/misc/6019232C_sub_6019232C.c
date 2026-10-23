/* sub_6019232C
 * address: 0x6019232C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019232C(int a1)
{
  _DWORD *v1; // r1

  if ( FIELD_U8(a1, 292) )
    v1 = *(_DWORD **)(a1 + 268);
  else
    v1 = *(_DWORD **)(a1 + 272);
  DrawMgr_drawModel2(DrawMgr_instance, v1);
  return 1;
}
