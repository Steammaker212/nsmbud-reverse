/* sub_601D75F4
 * address: 0x601D75F4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D75F4(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  float v4; // s0

  FIELD_U32(a1, 1100) = FIELD_U32(a1, 1092);
  v2 = (_DWORD *)sub_601DFFE4(a1 + 1032);
  FIELD_U32(a1, 944) = v2[18];
  FIELD_U32(a1, 948) = v2[19];
  FIELD_U32(a1, 952) = v2[20];
  v3 = (_DWORD *)sub_601DFFE4(a1 + 1044);
  FIELD_U32(a1, 956) = v3[18];
  FIELD_U32(a1, 960) = v3[19];
  FIELD_U32(a1, 964) = v3[20];
  sub_601B4788(a1, FIELD_U32(a1, 1092));
  sub_601D8094(a1);
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 120) = 0;
  sub_601691B0(a1);
  v4 = FIELD_F32(a1, 1240);
  if ( v4 <= 0.00000011921 && v4 >= -0.00000011921 )
  {
    FIELD_U32(a1, 1240) = *((_DWORD *)sub_601C6BF0(a1) + 257);
    FIELD_U32(a1, 200) = 0;
  }
  FIELD_U32(a1, 1112) = 0;
  return sub_601D7EF4(a1, a1 + 80, 0, 0);
}
