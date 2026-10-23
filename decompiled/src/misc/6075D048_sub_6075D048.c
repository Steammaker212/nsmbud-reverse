/* sub_6075D048
 * address: 0x6075D048   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075D048(int a1)
{
  int result; // r0
  _DWORD *v3; // r1

  sub_6078E574();
  result = sub_604433E4(DrawMgr_instance, *(_DWORD **)(a1 + 564));
  v3 = *(_DWORD **)(a1 + 1176);
  if ( v3 )
  {
    if ( ((1 << FIELD_U32(a1, 1152)) & 0xE) != 0 )
      return DrawMgr_drawModel2(DrawMgr_instance, v3);
    result = FIELD_U8(a1, 1182);
    if ( FIELD_U8(a1, 1182) )
      return DrawMgr_drawModel2(DrawMgr_instance, v3);
  }
  return result;
}
