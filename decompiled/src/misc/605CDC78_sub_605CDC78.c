/* sub_605CDC78
 * address: 0x605CDC78   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CDC78(_BYTE *a1, char a2)
{
  int result; // r0

  result = 0;
  if ( a1[100] )
  {
    if ( !a1[101] )
    {
      a1[108] = a2;
      a1[101] = 1;
      return 1;
    }
  }
  return result;
}
