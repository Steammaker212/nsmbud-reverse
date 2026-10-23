/* sub_60111800
 * address: 0x60111800   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60111800(int a1)
{
  _DWORD *v2; // r0
  int v3; // r7
  int v4; // r1

  if ( FIELD_U8(a1, 6584) )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6596));
    v2 = DrawMgr_instance;
    if ( FIELD_U32(a1, 6564) - 1 >= 2 )
    {
      v3 = 1;
      do
      {
        v4 = v3;
        if ( (unsigned int)v3 >= 0x12 )
          v4 = 0;
        DrawMgr_drawModel2(v2, *(_DWORD **)(a1 + 4 * v4 + 6596));
        v2 = DrawMgr_instance;
        ++v3;
      }
      while ( v3 < FIELD_U32(a1, 6564) - 1 );
    }
    DrawMgr_drawModel2(v2, *(_DWORD **)(a1 + 6656));
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6668));
  }
  return 1;
}
