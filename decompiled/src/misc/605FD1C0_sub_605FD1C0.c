/* sub_605FD1C0
 * address: 0x605FD1C0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605FD1C0(int a1)
{
  int v1; // r2
  float v2; // s0
  int v3; // r0
  float v4; // s0
  float v6; // [sp+0h] [bp-18h] BYREF
  int v7; // [sp+4h] [bp-14h]
  float v8; // [sp+8h] [bp-10h] BYREF
  int v9; // [sp+Ch] [bp-Ch]

  v1 = FIELD_U32(a1, 6900);
  if ( v1 )
  {
    v2 = FIELD_F32(a1, 144);
    v3 = a1 + 6168;
    if ( v1 == 1 )
    {
      v6 = 8.0;
      v8 = (float)(v2 * -32.0) + 8.0;
      v9 = 1090519040;
    }
    else
    {
      v8 = -8.0;
      v9 = 1090519040;
      v6 = (float)(v2 * 32.0) + -8.0;
    }
    v7 = -1056964608;
  }
  else
  {
    v4 = FIELD_F32(a1, 144);
    v8 = v4 * -16.0;
    v9 = 1090519040;
    v6 = v4 * 16.0;
    v7 = -1056964608;
    v3 = a1 + 6168;
  }
  return sub_60165340(v3, &v8, &v6);
}
