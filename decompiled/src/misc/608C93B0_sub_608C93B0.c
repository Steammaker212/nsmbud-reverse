/* sub_608C93B0
 * address: 0x608C93B0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C93B0(int a1)
{
  int v2; // r6
  int v3; // r5

  if ( FIELD_U8(a1, 414) )
  {
    if ( FIELD_S32(a1, 400) >= 1 )
    {
      v2 = 0;
      v3 = a1;
      do
      {
        sub_608CB5C8(v3, 1);
        ++v2;
        v3 += 200;
      }
      while ( v2 < FIELD_U32(a1, 400) );
    }
    FIELD_U8(a1, 414) = 0;
  }
  FIELD_U8(a1, 416) = 0;
  FIELD_U8(a1, 415) = 0;
  FIELD_U8(a1, 413) = 0;
  return 0;
}
