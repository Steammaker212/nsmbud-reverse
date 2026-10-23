/* sub_6058CE4C
 * address: 0x6058CE4C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058CE4C(int a1)
{
  float v2; // s0

  FIELD_U32(a1, 7388) = 3;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U8(a1, 6876) = 1;
  FIELD_U8(a1, 7339) = 1;
  FIELD_U32(a1, 7392) = (FIELD_U32(a1, 20) >> 8) & 0xF;
  sub_60579AE4(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
  v2 = FIELD_F32(a1, 112) + -8.0;
  FIELD_F32(a1, 112) = v2;
  FIELD_U32(a1, 7324) = 1;
  FIELD_U32(a1, 3200) &= ~0x40000000u;
  FIELD_U32(a1, 7300) = 0;
  FIELD_U32(a1, 7304) = 0;
  FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
  FIELD_U32(a1, 500) = 1132462080;
  FIELD_U32(a1, 504) = 1140850688;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_F32(a1, 7368) = v2;
  FIELD_U16(a1, 7376) = 0;
  sub_6057A244(a1, 1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF464);
  return 1;
}
