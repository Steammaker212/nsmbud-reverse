/* sub_6057EA98
 * address: 0x6057EA98   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057EA98(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r0

  FIELD_U32(a1, 7388) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = 0;
  FIELD_U8(a1, 6876) = 1;
  FIELD_U8(a1, 7339) = 1;
  sub_60579AE4(a1);
  sub_6057A244(a1, 1);
  v2 = FIELD_F32(a1, 108) + 8.0;
  FIELD_F32(a1, 108) = v2;
  v3 = FIELD_F32(a1, 112) + -8.0;
  FIELD_F32(a1, 112) = v3;
  FIELD_U32(a1, 7300) = 0;
  FIELD_U32(a1, 7304) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  v4 = dword_60CC6484;
  FIELD_F32(a1, 7484) = v2 - FIELD_F32(dword_60CC6484, 112);
  FIELD_F32(a1, 7488) = v3 - FIELD_F32(v4, 124);
  FIELD_U16(a1, 7376) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
  return 1;
}
