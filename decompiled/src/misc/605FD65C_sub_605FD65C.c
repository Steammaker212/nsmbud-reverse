/* sub_605FD65C
 * address: 0x605FD65C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FD65C(int a1)
{
  unsigned __int8 *v2; // r5
  unsigned __int8 v3; // r7
  int v4; // r0

  v2 = (unsigned __int8 *)(a1 + 6871);
  if ( FIELD_U8(a1, 6871) )
  {
    v3 = 0;
    do
    {
      v4 = v3;
      if ( v3 >= 0xFu )
        v4 = 0;
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4 * v4 + 6104));
      ++v3;
    }
    while ( v3 < (unsigned int)*v2 );
  }
  return 1;
}
