/* sub_607FC9F4
 * address: 0x607FC9F4   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FC9F4(int a1, float a2)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r0
  bool v7; // vf
  int v8; // r1

  result = FIELD_U32(a1, 188);
  v3 = FIELD_U32(result, 112);
  v4 = FIELD_U32(result, 120);
  if ( v4 < v3 )
  {
    FIELD_U32(result, 120) = v4 + 1;
    v5 = FIELD_U32(result, 108);
    v6 = FIELD_U32(result, 116) + v4;
    v7 = __OFSUB__(v6, v3);
    v8 = v6 - v3;
    if ( v8 < 0 != v7 )
      v8 = v6;
    result = v5 + 4 * v8;
    *(float *)result = a2;
  }
  return result;
}
