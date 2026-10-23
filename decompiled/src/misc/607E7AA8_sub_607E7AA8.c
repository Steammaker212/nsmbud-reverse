/* sub_607E7AA8
 * address: 0x607E7AA8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E7AA8(int result, int a2)
{
  int v3; // r6
  int v4; // r4
  int v5; // r5
  int v6; // r7
  int v7; // r6
  float v8; // s16
  float v9; // s2

  v3 = result;
  v4 = FIELD_U32(a2, 12);
  if ( v4 )
  {
    v5 = result + 1725152;
    if ( FIELD_U8(result, 1728768) )
    {
      nullsub_119(FIELD_U32(v4, 28), FIELD_U32(a2, 40));
      nullsub_120(FIELD_U32(v4, 60), FIELD_U32(a2, 40));
    }
    v6 = FIELD_U32(a2, 40);
    v7 = v3 + 3232;
    v8 = sub_6090C48C(v7);
    v9 = sub_6090C494(v7, v8);
    return sub_6092EC04(v5, v6, 0, v4, v8, v9, v9);
  }
  return result;
}
