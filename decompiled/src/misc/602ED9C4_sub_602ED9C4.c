/* sub_602ED9C4
 * address: 0x602ED9C4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602ED9C4(int a1, float *a2)
{
  unsigned int v3; // r1
  int v4; // r2
  int v5; // r5
  float result; // s0
  float *v7; // r0
  float v8; // s4
  float v9; // s6

  v3 = FIELD_U8(a1, 84);
  v4 = 0;
  if ( v3 < 4 )
    v4 = (char)v3;
  v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
  if ( !v5 || (FIELD_U8(v5, 1205) & 0x40) != 0 )
  {
    *a2 = FIELD_F32(a1, 108);
    a2[1] = FIELD_F32(a1, 112);
    a2[2] = FIELD_F32(a1, 116);
    return result;
  }
  sub_6079D4B0(*(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32), a2);
  if ( sub_6075EDF8(v5) == 1 )
  {
    v7 = (float *)&unk_60B0AFE4;
  }
  else
  {
    if ( FIELD_U32(v5, 1320) != 9 )
      return result;
    v7 = (float *)&unk_60B0B038;
  }
  v8 = v7[1];
  v9 = v7[2];
  *a2 = *v7 + *a2;
  a2[1] = v8 + a2[1];
  result = v9 + a2[2];
  a2[2] = result;
  return result;
}
