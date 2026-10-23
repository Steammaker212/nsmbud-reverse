/* SE_PLY_MSSB_CATCHWALL_ref
 * address: 0x607C6730   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_PLY_MSSB_CATCHWALL_ref(int a1)
{
  int v2; // r0
  float result; // s0
  int v4; // r1

  FIELD_U32(a1, 1228) |= 0x400u;
  FIELD_U32(a1, 1208) |= 0x10u;
  FIELD_U32(a1, 1224) |= 0x444u;
  FIELD_U16(a1, 6690) |= 2u;
  FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 104) = 0;
  if ( sub_607B9488((_DWORD *)a1) != 7 || FIELD_U8(a1, 12916) || FIELD_U32(a1, 1320) == 9 )
  {
    sub_60794954(a1 + 11356, 32, 0.0, 0.0);
    FIELD_U32(a1, 9940) = 0;
    FIELD_U32(a1, 1208) &= ~0x10000000u;
    FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
    FIELD_U32(a1, 9948) = 0;
  }
  else
  {
    sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_MSSB_CATCHWALL", 0, 0);
    sub_60236E40(FIELD_S8(a1, 84), dword_60AF22B8[FIELD_U32(a1, 80) ^ 1], (Vec3 *)(a1 + 108), 0, 0);
    FIELD_U32(a1, 9940) = 1;
    FIELD_U32(a1, 1208) |= 0x10000000u;
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 124) = 0;
    if ( FIELD_U32(a1, 80) )
      v4 = 180;
    else
      v4 = 181;
    sub_60794954(a1 + 11356, v4, 0.0, 0.0);
    FIELD_U32(a1, 9944) = 90;
    FIELD_U8(a1, 12916) = 1;
  }
  v2 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 12144) = v2;
  v2 ^= 1u;
  FIELD_U32(a1, 80) = v2;
  result = flt_60B0A898[v2] * -2.0;
  FIELD_F32(a1, 11392) = result;
  return result;
}
