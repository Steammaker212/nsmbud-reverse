/* sub_60407D4C
 * address: 0x60407D4C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407D4C(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = 60;
  do
  {
    result = FIELD_U8(a1, 3832);
    if ( FIELD_U8(a1, 3832) )
      result = sub_6054E87C(a1 + 16);
    --v2;
    a1 += 3856;
  }
  while ( v2 );
  return result;
}
