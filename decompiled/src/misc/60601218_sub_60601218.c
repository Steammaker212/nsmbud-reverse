/* sub_60601218
 * address: 0x60601218   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60601218(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  unsigned int i; // r7
  unsigned int v5; // r0

  v2 = DrawMgr_instance;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 27212));
  if ( ((int (__fastcall *)(int))loc_606031C8)(a1) == 1 )
    ((void (__fastcall *)(int))loc_60603290)(a1);
  v3 = FIELD_U8(a1, 6100) * FIELD_U8(a1, 6101);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = 0;
      if ( i < 0x20 )
        v5 = i;
      DrawMgr_drawModel2(v2, *(_DWORD **)(a1 + 4 * v5 + 27216));
    }
  }
  return 1;
}
