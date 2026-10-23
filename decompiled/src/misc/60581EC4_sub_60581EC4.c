/* sub_60581EC4
 * address: 0x60581EC4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60581EC4(int a1)
{
  int v2; // r1
  int result; // r0

  FIELD_U32(a1, 7388) = 0;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U8(a1, 7400) = 1;
  FIELD_U8(a1, 7339) = 1;
  sub_60579AE4(a1);
  v2 = sub_605D00B8(a1);
  result = 2;
  if ( !v2 )
  {
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
    sub_6057A244(a1, 1);
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 7300) = 11;
    FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    sub_60579FC8(a1);
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U16(a1, 7376) = 0;
    FIELD_U32(a1, 7280) = 1124073472;
    FIELD_U32(a1, 7284) = 1132462080;
    sub_605D0024(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    return 1;
  }
  return result;
}
