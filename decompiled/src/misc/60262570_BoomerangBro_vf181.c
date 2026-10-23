/* BoomerangBro_vf181
 * address: 0x60262570   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall BoomerangBro_vf181(int a1)
{
  float v2; // s2
  int v3; // r3
  float v4; // s4
  _BOOL4 result; // r0
  float v6; // s0
  float v7; // s2
  float v8; // s4

  v2 = FIELD_F32(a1, 112);
  v3 = *(_DWORD *)(FIELD_U32(a1, 12) + 12);
  v4 = FIELD_F32(dword_60CC6484, 124);
  result = 0;
  v6 = (float)FIELD_S32(v3, 16);
  if ( v2 <= (float)(v4 + -16.0)
    && (float)(v2 + (float)(2 * FIELD_U32(v3, 20))) >= (float)((float)(v4 - FIELD_F32(dword_60CC6484, 108)) + -16.0) )
  {
    v7 = FIELD_F32(a1, 108);
    v8 = FIELD_F32(dword_60CC6484, 112);
    if ( (float)(v6 + v7) >= v8 )
      return (float)(v7 - v6) <= (float)(v8 + FIELD_F32(dword_60CC6484, 104));
  }
  return result;
}
