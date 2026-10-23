/* sub_607403D4
 * address: 0x607403D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607403D4(int a1)
{
  int v2; // r0

  v2 = sub_60740438(a1);
  if ( v2 )
  {
    if ( !FIELD_U8(v2, 10248) )
      sub_60479910(v2 + 6688, dword_60C7B3E4);
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  }
  return 1;
}
