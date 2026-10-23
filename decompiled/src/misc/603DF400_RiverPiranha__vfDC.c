/* RiverPiranha__vfDC
 * address: 0x603DF400   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B4
// 
// Overridden by: None
StateMethodExecuter *__fastcall RiverPiranha__vfDC(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r1
  int v6; // [sp+4h] [bp-24h] BYREF
  int v7; // [sp+8h] [bp-20h] BYREF
  _DWORD v8[7]; // [sp+Ch] [bp-1Ch] BYREF

  if ( Actor__getProfileId((Actor *)a1) == 501 )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = FIELD_U32(a1, 116);
    v4 = FIELD_U32(a1, 108);
    v7 = 0;
    v8[0] = v4;
    *(float *)&v8[1] = v2 + -8.0;
    v8[2] = v3;
    ((void (__fastcall *)(int *, int *, _DWORD *, _DWORD))checkLiquidCollisions)(
      &v6,
      &v7,
      v8,
      FIELD_U8(a1, 86));
    if ( !v6 )
    {
      FIELD_U8(a1, 6672) = 1;
      FIELD_U8(a1, 6054) = 0;
      FIELD_U32(a1, 100) = -1114007142;
      FIELD_U32(a1, 6300) = 0;
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = -1073741824;
      FIELD_U32(a1, 140) = 0;
    }
  }
  return Enemy__vfDC((Enemy *)a1);
}
