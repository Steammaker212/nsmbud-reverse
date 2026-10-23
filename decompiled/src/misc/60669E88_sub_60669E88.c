/* sub_60669E88
 * address: 0x60669E88   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60669E88(int a1)
{
  int *v2; // r5
  int v3; // r7
  unsigned int v4; // r6
  unsigned int v5; // r0

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6104));
  v2 = (int *)(a1 + 6224);
  if ( FIELD_S32(a1, 6224) >= 1 )
  {
    v3 = 0;
    do
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6108 + 4 * v3++));
    while ( v3 < *v2 );
    if ( *v2 >= 1 )
    {
      v4 = 0;
      do
      {
        v5 = 0;
        if ( v4 < 6 )
          v5 = v4;
        sub_606456E4(a1 + (v5 << 8) + 8928);
        ++v4;
      }
      while ( (int)v4 < *v2 );
    }
  }
  return 1;
}
