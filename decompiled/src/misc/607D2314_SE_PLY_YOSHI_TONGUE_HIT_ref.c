/* SE_PLY_YOSHI_TONGUE_HIT_ref
 * address: 0x607D2314   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_PLY_YOSHI_TONGUE_HIT_ref(int a1, float *a2)
{
  _BYTE *result; // r0
  int v4; // t1
  float v5; // r0
  float v6; // r1
  float v7; // s0
  Vec3i v8; // [sp+8h] [bp-20h] BYREF
  Vec3 v9; // [sp+14h] [bp-14h] BYREF

  v4 = FIELD_U8(a1, 11462);
  result = (_BYTE *)(a1 + 11462);
  if ( !v4 )
  {
    *result = 1;
    v5 = *a2;
    v6 = a2[1];
    v7 = FIELD_F32(a1, 116);
    v9.x = v5;
    v9.y = v6;
    memset(&v8, 0, sizeof(v8));
    v9.z = v7 + -8.0;
    if ( FIELD_U32(a1, 80) == 1 )
      v8.y = 0x80000000;
    sub_60236E40(FIELD_S8(a1, 84), 429, &v9, &v8, 0);
    return (_BYTE *)sub_60814010(a1 + 840, "SE_PLY_YOSHI_TONGUE_HIT", 0);
  }
  return result;
}
