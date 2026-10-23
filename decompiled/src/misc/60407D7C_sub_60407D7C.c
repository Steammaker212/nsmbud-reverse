/* sub_60407D7C
 * address: 0x60407D7C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407D7C(int a1, int a2)
{
  int v4; // r6
  int result; // r0

  v4 = 60;
  do
  {
    result = FIELD_U8(a1, 3832);
    if ( FIELD_U8(a1, 3832) )
      result = sub_6054EAB4(a1 + 16, a2);
    --v4;
    a1 += 3856;
  }
  while ( v4 );
  return result;
}
