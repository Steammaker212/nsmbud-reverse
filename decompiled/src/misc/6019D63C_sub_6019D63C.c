/* sub_6019D63C
 * address: 0x6019D63C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019D63C(int a1)
{
  int v2; // r6
  int v3; // r0

  if ( !FIELD_U8(a1, 12893) && FIELD_U8(a1, 12891) )
  {
    v2 = 0;
    do
    {
      v3 = 0;
      if ( (unsigned int)v2 < 6 )
        v3 = v2;
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 40 * v3 + 12628));
      ++v2;
    }
    while ( v2 < FIELD_U8(a1, 12891) );
  }
  return 1;
}
