/* sub_60873388
 * address: 0x60873388   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60873388(int a1)
{
  int v2; // r6
  int v3; // r7

  if ( FIELD_U8(a1, 40) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      sub_60835494(FIELD_U32(a1, 32) + v2);
      ++v3;
      v2 += 72;
    }
    while ( v3 < FIELD_U8(a1, 40) );
  }
  FIELD_U32(a1, 4) ^= 1u;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  return 0;
}
