/* SE_PLY_BALLOON_BRAKE_ref_2
 * address: 0x60798044   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_BALLOON_BRAKE_ref_2(int a1, unsigned int a2)
{
  float32x2_t v4; // d3
  float32x2_t v5; // d7
  int v6; // r0
  int v7; // r5
  float *v8; // r0
  float *v9; // r0

  FIELD_U32(a1, 1204) &= ~0x10u;
  sub_60773630(a1, 38, 0);
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_BALLOON_BRAKE", 0, 0);
  AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 4, 0, 0);
  FIELD_U32(a1, 9964) = 30;
  FIELD_U32(a1, 9584) = 30;
  FIELD_U32(a1, 9588) = 30;
  FIELD_U32(a1, 9580) = 30;
  if ( (FIELD_U8(a1, 6902) & 4) == 0 )
  {
    v5.n64_u32[0] = 0;
    v6 = (a2 >> 20) & 0xFF0;
    v7 = a2 & 0xFFFFFF;
    v8 = (float *)((char *)sinLutTable + v6);
    v4.n64_f32[0] = 3.628 * (float)(v8[2] + (float)((float)((float)(unsigned int)v7 * v8[3]) * 0.000000059605));
    (*(void (__fastcall **)(int, int, int, _DWORD, float, float, float))(*(_DWORD *)a1 + 748))(
      a1,
      1,
      1,
      0,
      vmax_f32(v4, v5).n64_f32[0],
      (float)(*v8 + (float)((float)((float)(unsigned int)v7 * v8[1]) * 0.000000059605)) * 4.0,
      (float)(*v8 + (float)((float)((float)(unsigned int)v7 * v8[1]) * 0.000000059605)) * 4.0);
    JUMPOUT(0x6077288C);
  }
  Player_changeState(a1, (StateBase *)&dword_60CC4D24, 0);
  v9 = (float *)((char *)sinLutTable + ((a2 >> 20) & 0xFF0));
  return sub_607BBA94(
           a1,
           (float)(v9[2] + (float)((float)((float)(a2 & 0xFFFFFF) * v9[3]) * 0.000000059605))
         + (float)(v9[2] + (float)((float)((float)(a2 & 0xFFFFFF) * v9[3]) * 0.000000059605)),
           (float)(*v9 + (float)((float)((float)(a2 & 0xFFFFFF) * v9[1]) * 0.000000059605))
         + (float)(*v9 + (float)((float)((float)(a2 & 0xFFFFFF) * v9[1]) * 0.000000059605)));
}
