/* sub_6046E57C
 * address: 0x6046E57C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046E57C(int a1)
{
  int v2; // r5

  v2 = 0;
  if ( Actor__beforeExecute((Actor *)a1) == 1 )
  {
    v2 = 1;
    if ( !FIELD_U32(a1, 120) )
    {
      if ( FIELD_U8(a1, 101) )
        sub_6046E5D4(FIELD_U32(a1, 96));
      if ( !FIELD_U8(a1, 100) )
      {
        v2 = 0;
        FIELD_U8(a1, 19) = 1;
      }
    }
  }
  return v2;
}
