/* sub_606CF024
 * address: 0x606CF024   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CF024(int a1)
{
  _DWORD *v2; // r1

  sub_606CFFF8(a1 + 6916);
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6932));
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6936));
  v2 = *(_DWORD **)(a1 + 6940);
  if ( v2 )
    DrawMgr_drawModel2(DrawMgr_instance, v2);
  return 1;
}
