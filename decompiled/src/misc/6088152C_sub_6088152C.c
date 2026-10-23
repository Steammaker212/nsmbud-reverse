/* sub_6088152C
 * address: 0x6088152C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088152C(int result, int a2)
{
  int v3; // r4
  int v4; // r5

  v3 = result;
  if ( a2 )
  {
    result = sub_60881594(result, 0, 1, 0, 1.0);
    if ( a2 >= 2 )
    {
      v4 = a2 - 1;
      do
      {
        result = sub_60881594(v3, 0, 1, 0, 1.0);
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
