/* sub_6021C610
 * address: 0x6021C610   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021C610(int a1)
{
  float v2; // lr
  float v3; // r1
  float v4; // r12
  int result; // r0

  if ( FIELD_U8(a1, 1442) )
  {
    FIELD_U32(a1, 856) = 4;
    v2 = FIELD_F32(a1, 700);
    FIELD_F32(a1, 880) = v2;
    v3 = FIELD_F32(a1, 704);
    FIELD_F32(a1, 884) = v3;
    v4 = FIELD_F32(a1, 708);
    FIELD_F32(a1, 888) = v4;
    FIELD_U32(a1, 868) = 0;
    FIELD_U32(a1, 872) = 0;
    FIELD_U32(a1, 876) = 0;
    FIELD_F32(a1, 892) = (float)(v2 + 0.0) * 0.5;
    FIELD_F32(a1, 896) = (float)(v3 + 0.0) * 0.5;
    FIELD_F32(a1, 900) = (float)(v4 + 0.0) * 0.5;
    FIELD_U32(a1, 860) = 0;
    sub_601FEE28(dword_60C8C188);
    result = sub_60170540();
    FIELD_U32(a1, 864) = result;
  }
  else
  {
    FIELD_U32(a1, 856) = 0;
    FIELD_U32(a1, 700) = 0;
    FIELD_U32(a1, 704) = 0;
    FIELD_U32(a1, 708) = 0;
    FIELD_U8(a1, 1449) = 0;
    FIELD_U8(a1, 1447) = 0;
    FIELD_U8(a1, 1452) = 0;
    FIELD_U8(a1, 1442) = 0;
    return 0;
  }
  return result;
}
