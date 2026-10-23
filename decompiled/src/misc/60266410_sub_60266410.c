/* sub_60266410
 * address: 0x60266410   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60266410(int a1, float a2, float a3)
{
  float v4; // s4
  int v5; // r3
  _BOOL4 result; // r0
  float v7; // s2
  float v8; // s0

  v4 = FIELD_F32(a1, 112);
  v5 = *(_DWORD *)(FIELD_U32(a1, 12) + 12);
  result = 0;
  v7 = (float)FIELD_S32(v5, 16);
  if ( v4 <= (float)(FIELD_F32(dword_60CC6484, 124) - a2)
    && (float)(v4 + (float)(2 * FIELD_U32(v5, 20))) >= (float)(FIELD_F32(dword_60CC6484, 132) - a3) )
  {
    v8 = FIELD_F32(a1, 108);
    if ( (float)(v7 + v8) >= FIELD_F32(dword_60CC6484, 112) )
      return (float)(v8 - v7) <= FIELD_F32(dword_60CC6484, 120);
  }
  return result;
}
