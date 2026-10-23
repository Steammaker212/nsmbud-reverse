/* sub_605FF59C
 * address: 0x605FF59C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605FF59C(int a1)
{
  int v1; // r1
  float v2; // s0
  int v3; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  float v6; // [sp+4h] [bp-14h]
  int v7; // [sp+8h] [bp-10h] BYREF
  float v8; // [sp+Ch] [bp-Ch]

  v1 = FIELD_U32(a1, 6908);
  v2 = FIELD_F32(a1, 148) * 16.0;
  if ( v1 )
  {
    v3 = a1 + 6168;
    if ( v1 == 1 )
    {
      v7 = -1056964608;
      v8 = 8.0;
      v5 = 1090519040;
      v6 = (float)(v2 * -2.0) + 8.0;
    }
    else
    {
      v5 = 1090519040;
      v7 = -1056964608;
      v6 = -8.0;
      v8 = (float)(v2 + v2) + -8.0;
    }
  }
  else
  {
    v7 = -1056964608;
    v8 = v2;
    v5 = 1090519040;
    v3 = a1 + 6168;
    v6 = -v2;
  }
  return sub_60165340(v3, &v7, &v5);
}
