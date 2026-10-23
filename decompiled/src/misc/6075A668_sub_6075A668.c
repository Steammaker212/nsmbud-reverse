/* sub_6075A668
 * address: 0x6075A668   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075A668(int a1)
{
  int result; // r0
  unsigned int v3; // r0

  sub_6078E574();
  result = FIELD_U8(a1, 564);
  if ( FIELD_U8(a1, 564) )
  {
    v3 = FIELD_U32(a1, 560);
    if ( v3 >= 2 )
      v3 = 0;
    return DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 4 * v3 + 548));
  }
  return result;
}
