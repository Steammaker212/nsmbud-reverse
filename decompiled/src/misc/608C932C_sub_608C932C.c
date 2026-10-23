/* sub_608C932C
 * address: 0x608C932C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C932C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r5
  int v6; // r0

  result = FIELD_U8(a1, 412);
  if ( result )
  {
    v3 = FIELD_U32(a1, 400);
    if ( v3 >= 1 )
    {
      v4 = 0;
      v5 = a1;
      do
      {
        sub_608CB57C(v5);
        v3 = FIELD_U32(a1, 400);
        ++v4;
        v5 += 200;
      }
      while ( v4 < v3 );
    }
    FIELD_U32(a1, 400) = 0;
    v6 = sub_608CAEDC(v3);
    result = sub_608CB260(v6, a1);
    FIELD_U8(a1, 412) = 0;
  }
  return result;
}
