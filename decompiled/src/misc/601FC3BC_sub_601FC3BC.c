/* sub_601FC3BC
 * address: 0x601FC3BC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FC3BC(int a1)
{
  float v2; // s2
  float v3; // s4

  sub_601861EC((Actor *)a1);
  v2 = FIELD_F32(a1, 156) + *(float *)&dword_60C8C12C;
  v3 = FIELD_F32(a1, 160) + *(float *)&dword_60C8C130;
  FIELD_F32(a1, 80) = FIELD_F32(a1, 152) + *(float *)&dword_60C8C128;
  FIELD_F32(a1, 84) = v2;
  FIELD_F32(a1, 88) = v3;
  sub_601FC414(a1);
  return 1;
}
