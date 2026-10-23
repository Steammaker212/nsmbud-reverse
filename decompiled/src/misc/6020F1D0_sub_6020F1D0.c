/* sub_6020F1D0
 * address: 0x6020F1D0   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020F1D0(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  float v5; // r1
  float32x2_t v6; // d2
  float32x2_t v7; // d0
  float v8; // s0
  float *v9; // r0
  signed int v10; // r1
  int v11; // r1
  int v12; // r2
  float v13; // s2
  float v14; // s4
  float v15; // s16
  float v16; // s0
  signed int v17; // [sp+0h] [bp-18h] BYREF
  signed int v18; // [sp+4h] [bp-14h] BYREF

  ++FIELD_U32(a1, 432);
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  result = FIELD_U32(a1, 420);
  switch ( result )
  {
    case 0:
      v3 = FIELD_U32(a1, 416);
      if ( v3 < 1 )
      {
        FIELD_U32(a1, 420) = 1;
        result = 1;
      }
      else
      {
        result = v3 - 1;
        FIELD_U32(a1, 416) = result;
      }
      break;
    case 1:
      v4 = sub_601DFFE4(a1 + 300);
      FIELD_U32(a1, 392) = FIELD_U32(a1, 80);
      FIELD_U32(a1, 396) = FIELD_U32(a1, 84);
      FIELD_U32(a1, 400) = FIELD_U32(a1, 88);
      FIELD_U32(a1, 404) = FIELD_U32(v4, 72);
      v5 = FIELD_F32(v4, 76);
      FIELD_F32(a1, 408) = v5;
      FIELD_U32(a1, 412) = FIELD_U32(v4, 80);
      FIELD_F32(a1, 408) = FIELD_F32(a1, 440) + v5;
      FIELD_U32(a1, 204) = 0;
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 420) = 2;
      result = 2;
      break;
    case 2:
      result = ((int (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, 9.0, 0.2, 2.0, 0.2);
      v6.n64_u32[0] = 3.0;
      v7.n64_f32[0] = FIELD_F32(a1, 128) + 0.1;
      v7.n64_u32[0] = vmin_f32(v7, v6).n64_u32[0];
      FIELD_U32(a1, 128) = v7.n64_u32[0];
      FIELD_U32(a1, 132) = v7.n64_u32[0];
      FIELD_U32(a1, 136) = v7.n64_u32[0];
      v8 = FIELD_F32(a1, 408);
      if ( FIELD_F32(a1, 84) > v8 )
      {
        FIELD_U32(a1, 432) = 0;
        FIELD_F32(a1, 84) = v8;
        FIELD_U32(a1, 120) = 0;
        FIELD_F32(a1, 436) = v8;
        sub_60210A38(a1, 0);
        FIELD_U32(a1, 420) = 3;
        FIELD_U8(a1, 468) = 1;
        result = 1;
      }
      break;
    case 3:
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 3.0, 0.05, 1.0, 0.1);
      v9 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 432) << 6) & 0xFC0));
      FIELD_F32(a1, 84) = FIELD_F32(a1, 436)
                          + (float)((float)(*v9 + (float)((float)(v9[1] * 0.0) * 0.000000059605)) * 12.0);
      v10 = FIELD_U32(a1, 452);
      v18 = FIELD_U32(a1, 448);
      v17 = v10;
      FIELD_U32(a1, 384) = sub_608332B0(a1 + 80, a1 + 404);
      sub_608322C0((int *)(a1 + 192), (int *)(a1 + 384), &v18, &v17);
      v11 = FIELD_U32(a1, 192);
      v12 = FIELD_U32(a1, 196);
      FIELD_U32(a1, 176) = FIELD_U32(a1, 188);
      FIELD_U32(a1, 180) = v11;
      FIELD_U32(a1, 184) = v12;
      v13 = FIELD_F32(a1, 88) - FIELD_F32(a1, 412);
      v14 = FIELD_F32(a1, 80) - FIELD_F32(a1, 404);
      v15 = sqrtf((float)(v13 * v13) + (float)(v14 * v14));
      v16 = sqrtf(
              (float)((float)(FIELD_F32(a1, 100) - FIELD_F32(a1, 412))
                    * (float)(FIELD_F32(a1, 100) - FIELD_F32(a1, 412)))
            + (float)((float)(FIELD_F32(a1, 92) - FIELD_F32(a1, 404))
                    * (float)(FIELD_F32(a1, 92) - FIELD_F32(a1, 404))));
      if ( FIELD_U8(a1, 424) )
      {
        if ( v15 >= v16 )
          sub_60210A38(a1, 0);
      }
      else if ( v15 < v16 )
      {
        FIELD_U8(a1, 424) = 1;
      }
      result = FIELD_U8(a1, 469);
      if ( FIELD_U8(a1, 469) )
      {
        FIELD_U8(a1, 469) = 0;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      }
      break;
    default:
      return result;
  }
  return result;
}
