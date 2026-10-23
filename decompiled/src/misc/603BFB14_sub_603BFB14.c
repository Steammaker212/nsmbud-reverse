/* sub_603BFB14
 * address: 0x603BFB14   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BFB14(int a1)
{
  int v2; // r0
  int v3; // r1

  sub_602A7CEC((char *)a1);
  v2 = FIELD_U32(a1, 6108);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = v2;
  FIELD_U32(a1, 128) = 0;
  v3 = FIELD_U32(a1, 6112);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = v3;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 6284) = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = FIELD_U32(a1, 6116);
  FIELD_U32(a1, 116) = 1167867904;
  FIELD_U32(a1, 160) = dword_60AF1F20[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 164) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
}
