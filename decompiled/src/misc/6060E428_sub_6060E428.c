/* sub_6060E428
 * address: 0x6060E428   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060E428(int a1)
{
  int v1; // r1

  if ( FIELD_U32(a1, 6788) == 1 )
    v1 = 6104;
  else
    v1 = 6100;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + v1));
  return 1;
}
