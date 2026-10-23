/* sub_60261FBC
 * address: 0x60261FBC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60261FBC(int a1, int a2, float *a3)
{
  int v4; // r5
  int result; // r0

  v4 = FIELD_U8(a1, 7108);
  result = BobOmb_vf174(a1, a2, a3);
  if ( v4 )
  {
    if ( result )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
    }
  }
  return result;
}
