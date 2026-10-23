/* sub_602970EC
 * address: 0x602970EC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602970EC(int a1, int a2)
{
  char v2; // r12
  char *v5; // r1
  float v6; // s2
  float result; // s0

  if ( ((unsigned int)&algn_60C8FF03[5] & ~(1613328652 << v2) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C8FF03[5]) )
  {
    dword_60C8FF10 = 0;
    dword_60C8FF14 = 1065353216;
    dword_60C8FF18 = 0;
    dword_60C8FF1C = -1082130432;
    dword_60C8FF20 = 1065353216;
    dword_60C8FF24 = 0;
    dword_60C8FF28 = -1082130432;
    dword_60C8FF2C = 0;
    _cxa_guard_release((__guard *)&algn_60C8FF03[5]);
  }
  v5 = &byte_60C8FF00[8 * FIELD_U32(a1, 6668)];
  v6 = *(float *)&dword_60AF1F60[a2];
  FIELD_F32(a1, 120) = v6 * *((float *)v5 + 4);
  result = v6 * *((float *)v5 + 5);
  FIELD_F32(a1, 124) = result;
  FIELD_U32(a1, 128) = 0;
  return result;
}
