/* sub_602FB1FC
 * address: 0x602FB1FC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602FB1FC(int a1)
{
  _BOOL4 result; // r0
  float v3; // s0
  float v4; // s0
  float v5; // [sp+8h] [bp-18h] BYREF
  float v6; // [sp+Ch] [bp-14h] BYREF
  float v7; // [sp+10h] [bp-10h] BYREF
  float v8; // [sp+14h] [bp-Ch] BYREF

  sub_60301B94(a1, &v8, &v7, &v6, &v5);
  result = 0;
  v3 = FIELD_F32(a1, 8472);
  if ( v3 <= (float)(v6 + -32.0) && (float)(v3 + 56.0) >= (float)(v5 + -48.0) )
  {
    v4 = FIELD_F32(a1, 8468);
    if ( (float)(v4 + 40.0) >= (float)(v8 + -24.0) )
      return (float)(v4 + -40.0) <= (float)(v7 + 24.0);
  }
  return result;
}
