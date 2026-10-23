/* sub_6099CBF8
 * address: 0x6099CBF8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099CBF8(int a1)
{
  int v1; // r1
  int v2; // r3
  int v3; // r2

  v1 = FIELD_U32(a1, 128);
  if ( v1 == a1 + 124 )
  {
    v3 = 0;
  }
  else
  {
    v2 = v1 - 8;
    v3 = 0;
    do
    {
      v1 = FIELD_U32(v1, 4);
      v3 += FIELD_U32(v2, 4);
      v2 = v1 - 8;
    }
    while ( v1 - 8 != a1 + 116 );
  }
  return FIELD_U32(a1, 32) - v3;
}
