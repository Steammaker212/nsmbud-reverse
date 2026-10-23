/* sub_6020ED60
 * address: 0x6020ED60   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020ED60(int a1)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(a1, 464);
  if ( v1 >= 2 )
    v1 = 0;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4 * v1 + 372));
  return 1;
}
