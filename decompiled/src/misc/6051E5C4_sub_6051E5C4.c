/* sub_6051E5C4
 * address: 0x6051E5C4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6051E5C4(int a1)
{
  float v2; // s0
  int v3; // r0
  float result; // s0

  sub_60473DE4((_DWORD *)a1, 0, &dword_60CA8FC4, 0);
  v2 = sub_604745C0(a1, 0);
  sub_6047455C(a1, 0, v2);
  sub_6047459C(a1, 0);
  FIELD_U8(a1, 3552) = 1;
  FIELD_U16(a1, 3554) = 45;
  v3 = dword_60CC6484;
  FIELD_F32(a1, 3624) = FIELD_F32(dword_60CC6484, 48) + -48.0;
  result = FIELD_F32(v3, 44) + 16.0;
  FIELD_F32(a1, 3628) = result;
  FIELD_U32(a1, 3632) = 0;
  return result;
}
