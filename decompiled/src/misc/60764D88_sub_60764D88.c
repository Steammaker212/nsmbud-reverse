/* sub_60764D88
 * address: 0x60764D88   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60764D88(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r2

  result = FIELD_U8(a1, 1216);
  if ( (result & 0x10) != 0 )
  {
    sub_6075EE0C(a1);
    v3 = FIELD_U32(a1, 308);
    v4 = FIELD_U32(a1, 304);
    FIELD_U32(a1, 7864) = v3;
    FIELD_U32(a1, 7860) = v4;
    v5 = FIELD_U32(a1, 316);
    v6 = FIELD_U32(a1, 312);
    FIELD_U32(a1, 7872) = v5;
    FIELD_U32(a1, 7868) = v6;
    FIELD_U32(a1, 7884) = 10;
    FIELD_U32(a1, 8168) = v3;
    FIELD_U32(a1, 8164) = v4;
    FIELD_U32(a1, 8176) = v5;
    FIELD_U32(a1, 8172) = v6;
    FIELD_U32(a1, 8188) = 10;
    FIELD_U32(a1, 7892) = 1024;
    FIELD_U32(a1, 8196) = 1024;
    return 8196;
  }
  return result;
}
