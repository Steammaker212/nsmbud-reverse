/* sub_60525284
 * address: 0x60525284   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60525284(int result)
{
  unsigned int v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // t1
  int v5; // r1

  FIELD_U32(result, 4660) = 180;
  if ( FIELD_S32(result, 4620) >= 1 )
  {
    v1 = 0;
    do
    {
      v2 = 0;
      if ( v1 < 4 )
        v2 = v1;
      ++v1;
      v3 = result + 4 * v2;
      v4 = FIELD_U32(v3, 4152);
      v5 = FIELD_U32(v4, 3140);
      FIELD_U32(v5, 52) = FIELD_U32(v4, 3132);
      FIELD_U32(v5, 68) = *(_DWORD *)(FIELD_U32(v3, 4152) + 3132);
    }
    while ( (signed int)v1 < FIELD_U32(result, 4620) );
  }
  return result;
}
