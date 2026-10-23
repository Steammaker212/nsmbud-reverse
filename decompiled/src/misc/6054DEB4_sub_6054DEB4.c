/* sub_6054DEB4
 * address: 0x6054DEB4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6054DEB4(int a1)
{
  int v2; // r5
  int v3; // r0
  float *v4; // r0
  float result; // s0

  v2 = a1 + 40;
  sub_60473DE4((_DWORD *)(a1 + 40), 1u, &dword_60CACBD4, 0);
  sub_6047455C(v2, 1u, (float)(FIELD_U32(a1, 3792) - 26));
  v3 = sub_6047482C(v2, 1u);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)v3 + 96))(v3, (float)(FIELD_U32(a1, 3792) - 26));
  FIELD_U32(a1, 3796) = 0;
  FIELD_U32(a1, 3800) = FIELD_U32(dword_60C9A1E8, 231392);
  sub_6054EDD8(a1);
  v4 = (float *)(dword_60C9A1E8 + 231396);
  FIELD_F32(a1, 3744) = FIELD_F32(dword_60C9A1E8, 231400) * FIELD_F32(a1, 3744);
  result = *v4 * FIELD_F32(a1, 3752);
  FIELD_F32(a1, 3752) = result;
  FIELD_U32(a1, 3836) = 0;
  return result;
}
