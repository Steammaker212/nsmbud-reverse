/* sub_602FCF68
 * address: 0x602FCF68   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602FCF68(int a1)
{
  float v2; // s0
  _BOOL4 result; // r0
  float v4; // s0
  float v5; // [sp+8h] [bp-18h] BYREF
  float v6; // [sp+Ch] [bp-14h] BYREF
  float v7; // [sp+10h] [bp-10h] BYREF
  float v8; // [sp+14h] [bp-Ch] BYREF

  sub_60301B94(a1, &v8, &v7, &v6, &v5);
  v2 = FIELD_F32(a1, 112);
  result = 0;
  if ( v2 <= (float)(v6 + -16.0) && (float)(v2 + 40.0) >= (float)(v5 + -16.0) )
  {
    v4 = FIELD_F32(a1, 108);
    if ( (float)(v4 + 24.0) >= v8 )
      return (float)(v4 + -24.0) <= v7;
  }
  return result;
}
