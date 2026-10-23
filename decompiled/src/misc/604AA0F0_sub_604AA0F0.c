/* sub_604AA0F0
 * address: 0x604AA0F0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AA0F0(int result)
{
  int v1; // r2
  _BYTE *v2; // r1

  v1 = 61;
  v2 = (_BYTE *)(result + 97951);
  do
  {
    if ( *(v2 - 6) )
      *v2 = 1;
    v2 += 2988;
    --v1;
  }
  while ( v1 );
  FIELD_U8(result, 279733) = 1;
  return result;
}
