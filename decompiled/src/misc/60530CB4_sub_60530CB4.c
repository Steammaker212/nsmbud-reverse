/* sub_60530CB4
 * address: 0x60530CB4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60530CB4(int a1)
{
  int result; // r0
  unsigned int i; // r5
  unsigned int v4; // r0
  int v5; // r6

  result = FIELD_U32(a1, 64);
  if ( result >= 1 )
  {
    for ( i = 0; (int)i < result; ++i )
    {
      v4 = 0;
      if ( i < 4 )
        v4 = i;
      v5 = a1 + 80 * v4;
      if ( FIELD_U8(v5, 104) )
        DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(v5 + 120));
      if ( FIELD_U8(v5, 424) )
        DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(v5 + 440));
      result = FIELD_U32(a1, 64);
    }
  }
  return result;
}
