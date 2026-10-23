/* sub_6020ADB8
 * address: 0x6020ADB8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6020ADB8(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int v8; // r5

  ((void (__fastcall *)(int, int, _DWORD, _DWORD, float, float, float, _DWORD, int *))loc_60185F9C)(
    a1,
    a1 + 80,
    0,
    FIELD_S16(a2, 8),
    FIELD_F32(a2, 4),
    FIELD_F32(a2, 12) * FIELD_F32(a1, 128),
    FIELD_F32(a1, 128) * FIELD_F32(a2, 16),
    FIELD_S16(a2, 10),
    &dword_60B3B974);
  result = (_DWORD *)(a1 + 380);
  v5 = FIELD_U32(a2, 4);
  v6 = FIELD_U32(a2, 8);
  v7 = FIELD_U32(a2, 12);
  v8 = FIELD_U32(a2, 16);
  *result = *(_DWORD *)a2;
  result[1] = v5;
  result[2] = v6;
  result[3] = v7;
  result[4] = v8;
  return result;
}
