/* BigBoo_vf12
 * address: 0x603AD820   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_vf12(int a1)
{
  _DWORD *v2; // r1

  if ( FIELD_U8(a1, 6684) && !FIELD_U32(a1, 6896) )
    v2 = *(_DWORD **)(a1 + 6300);
  else
    v2 = *(_DWORD **)(a1 + 6304);
  DrawMgr_drawModel2(DrawMgr_instance, v2);
  if ( !FIELD_U8(a1, 86) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6308));
  return 1;
}
