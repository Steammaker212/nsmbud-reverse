/* sub_60108764
 * address: 0x60108764   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60108764(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r7
  unsigned int v4; // r1

  if ( FIELD_U8(a1, 6568) )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6612));
    v2 = DrawMgr_instance;
    if ( FIELD_S32(a1, 6684) >= 1 )
    {
      v3 = 0;
      do
      {
        ++v3;
        v4 = 0;
        if ( v3 < 0x12 )
          v4 = v3;
        DrawMgr_drawModel2(v2, *(_DWORD **)(a1 + 4 * v4 + 6612));
        v2 = DrawMgr_instance;
      }
      while ( (signed int)v3 < FIELD_U32(a1, 6684) );
    }
    DrawMgr_drawModel2(v2, *(_DWORD **)(a1 + 6672));
  }
  return 1;
}
