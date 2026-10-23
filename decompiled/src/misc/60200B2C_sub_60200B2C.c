/* sub_60200B2C
 * address: 0x60200B2C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60200B2C(int a1)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(a1, 340);
  if ( v1 >= 3 )
    v1 = 0;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4 * v1 + 268));
  return 1;
}
