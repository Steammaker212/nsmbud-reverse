/* sub_603D8C54
 * address: 0x603D8C54   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D8C54(int a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r4

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  v2 = 0;
  v3 = a1 + 12892;
  v4 = a1 + 6308;
  do
  {
    if ( !*(_BYTE *)(v3 + v2) )
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(v4 + 4 * v2));
    ++v2;
  }
  while ( v2 != 17 );
  return 1;
}
