/* sub_603A9054
 * address: 0x603A9054   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A9054(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  void ***v4; // r4
  void **v5; // t1

  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6976));
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 7768));
  v2 = (_DWORD *)(a1 + 23568);
  if ( FIELD_S32(a1, 23568) >= 1 )
  {
    v3 = 0;
    v4 = (void ***)(a1 + 8560);
    do
    {
      v5 = *v4;
      v4 += 196;
      DrawMgr_drawModel(DrawMgr_instance, *v5);
      ++v3;
    }
    while ( v3 < *v2 );
  }
  return 1;
}
