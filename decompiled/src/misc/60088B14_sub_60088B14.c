/* sub_60088B14
 * address: 0x60088B14   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60088B14(int a1)
{
  int v2; // r0
  int *v3; // r5

  v3 = (int *)(a1 + 7616);
  v2 = FIELD_U32(a1, 7616);
  if ( (v2 & 1) != 0 )
  {
    sub_600FB714(a1);
    v2 = *v3;
  }
  if ( (v2 & 2) != 0 )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7612));
  return 1;
}
