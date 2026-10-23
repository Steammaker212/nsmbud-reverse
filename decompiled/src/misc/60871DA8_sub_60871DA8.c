/* sub_60871DA8
 * address: 0x60871DA8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60871DA8(int a1)
{
  int v2; // r7
  int v3; // r6
  int v4; // r5
  int result; // r0

  v2 = FIELD_U16(a1, 64);
  if ( FIELD_U16(a1, 64) )
  {
    v3 = FIELD_U32(a1, 48);
    v4 = 0;
    do
    {
      sub_60871534(FIELD_U32(a1, 16) + v4);
      if ( FIELD_U32(a1, 48) )
      {
        nn__os__FinalizeMutex(v3);
        v3 += 20;
      }
      v4 += 232;
      --v2;
    }
    while ( v2 );
  }
  FIELD_U32(a1, 48) = 0;
  result = FIELD_U16(a1, 66) & 0xFF7F;
  FIELD_U16(a1, 66) = result;
  return result;
}
