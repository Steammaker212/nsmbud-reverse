/* sub_6030D174
 * address: 0x6030D174   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030D174(int a1)
{
  unsigned __int8 *v2; // r5
  int v3; // r6
  int v4; // r0

  v2 = (unsigned __int8 *)(a1 + 7605);
  if ( FIELD_U8(a1, 7605) )
  {
    v3 = 0;
    do
    {
      v4 = 0;
      if ( (unsigned int)v3 < 8 )
        v4 = v3;
      DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 4 * v4 + 6960));
      ++v3;
    }
    while ( v3 < *v2 );
  }
  return 1;
}
