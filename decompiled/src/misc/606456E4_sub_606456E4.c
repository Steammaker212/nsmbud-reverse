/* sub_606456E4
 * address: 0x606456E4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_606456E4(int a1)
{
  unsigned int result; // r0
  int v3; // r5
  int v4; // r0

  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 4));
  result = FIELD_U32(a1, 224);
  if ( result < 2 )
    goto LABEL_4;
  if ( result != 8 )
  {
    if ( result != 7 )
    {
      DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 8));
      return DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 12));
    }
LABEL_4:
    if ( FIELD_U32(a1, 220) - 2 >= 1 )
    {
      v3 = 0;
      do
      {
        v4 = 0;
        if ( (unsigned int)v3 < 0x1E )
          v4 = v3;
        DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 4 * v4 + 16));
        ++v3;
      }
      while ( v3 < FIELD_U32(a1, 220) - 2 );
    }
    return DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 12));
  }
  return result;
}
