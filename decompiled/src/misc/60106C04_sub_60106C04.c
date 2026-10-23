/* sub_60106C04
 * address: 0x60106C04   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60106C04(int a1)
{
  void *v2; // r5
  int v3; // r0
  int v4; // r7
  void ***v5; // r6
  void **v6; // t1

  if ( FIELD_U8(a1, 6660) )
  {
    v2 = DrawMgr_instance;
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6104));
    v3 = FIELD_U32(a1, 6112);
    if ( v3 )
    {
      v4 = 4 * v3;
      v5 = *(void ****)(a1 + 6120);
      do
      {
        v6 = *v5++;
        DrawMgr_drawModel(v2, *v6);
        v4 -= 4;
      }
      while ( v4 );
    }
    DrawMgr_drawModel(v2, **(void ***)(a1 + 6108));
  }
  return 1;
}
