/* sub_601F4884
 * address: 0x601F4884   size: 1476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F4884(int a1)
{
  int result; // r0
  int *v3; // r7
  int v4; // r0
  int v5; // r0
  int v6; // r0
  float v7; // r1
  float v8; // r2
  float v9; // s0
  float v10; // s2
  float v11; // s6
  int v12; // r0
  float v13; // s0
  int v14; // r2
  int v15; // r0
  int *v16; // r1
  float v17; // r0
  float v18; // s2
  int v19; // r0
  float v20; // s0
  int v21; // r2
  const char *v22; // r1
  signed int v23[2]; // [sp+8h] [bp-38h] BYREF
  Vec3 v24; // [sp+10h] [bp-30h] BYREF

  v3 = (int *)(a1 + 596);
  result = FIELD_U32(a1, 596);
  switch ( result )
  {
    case 0:
      result = ((int (__fastcall *)(int))loc_60168DF8)(a1);
      if ( FIELD_F32(a1, 80) < (float)(FIELD_F32(a1, 840) + -900.0) )
      {
        FIELD_U32(a1, 708) = 120;
        ++FIELD_U32(a1, 596);
        result = sub_601CF9C0(dword_60C8AEF0);
        FIELD_U8(result, 1232) |= 2u;
      }
      break;
    case 1:
      v4 = FIELD_U32(a1, 708);
      if ( v4 )
      {
        result = v4 - 1;
        FIELD_U32(a1, 708) = result;
      }
      else
      {
        FIELD_F32(a1, 80) = (float)(FIELD_F32(a1, 840) + -900.0) + -200.0;
        v17 = FIELD_F32(a1, 848);
        FIELD_F32(a1, 88) = v17;
        v18 = FIELD_F32(a1, 844);
        FIELD_F32(a1, 84) = v18 + 500.0;
        FIELD_F32(a1, 844) = v18 + 150.0;
        FIELD_F32(a1, 848) = v17 + 200.0;
        v19 = sub_608332B0(a1 + 80, a1 + 840);
        FIELD_U32(a1, 192) = v19;
        FIELD_U32(a1, 180) = v19;
        FIELD_U32(a1, 200) = 1092616192;
        v20 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 844))
            / (float)(sqrtf(
                        (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848))
                              * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848)))
                      + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))
                              * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))))
                    / FIELD_F32(a1, 200));
        FIELD_F32(a1, 584) = v20;
        FIELD_F32(a1, 120) = v20 * -2.0;
        FIELD_U32(a1, 880) = 0x40000000;
        FIELD_U32(a1, 912) = 15;
        if ( FIELD_U32(a1, 592) == 10 )
        {
          v21 = 4;
          v23[0] = (signed int)&sead__SafeStringBase__vtable;
          v22 = "W5A0";
        }
        else
        {
          v21 = 6;
          v23[0] = (signed int)&sead__SafeStringBase__vtable;
          v22 = "W7A0";
        }
        v23[1] = (signed int)v22;
        sub_601A02B0(dword_60C89E00, &v24, v21, 0, (int)v23);
        sub_601E4C88((_DWORD *)dword_60C8B13C, 164, &v24);
        result = *v3 + 1;
        *v3 = result;
      }
      break;
    case 2:
      v5 = FIELD_U32(a1, 912);
      if ( v5 )
      {
        v6 = v5 - 1;
        FIELD_U32(a1, 912) = v6;
        if ( !v6 )
        {
          v7 = FIELD_F32(a1, 844);
          v8 = FIELD_F32(a1, 848);
          v24.x = FIELD_F32(a1, 840);
          v24.y = v7;
          v24.z = v8;
          EffectData_create(1126, &v24, 0, 0);
        }
      }
      v9 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 844))
         / (float)(sqrtf(
                     (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848))
                           * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848)))
                   + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))
                           * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))))
                 / FIELD_F32(a1, 200));
      FIELD_F32(a1, 584) = v9;
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v9, 0.1, 0.2, 0.1);
      result = ((int (__fastcall *)(int))loc_60168DF8)(a1);
      v10 = FIELD_F32(a1, 84) - FIELD_F32(a1, 844);
      v11 = FIELD_F32(a1, 80) - FIELD_F32(a1, 840);
      if ( sqrtf(
             (float)((float)(v10 * v10) + (float)(v11 * v11))
           + (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848))
                   * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848)))) < 700.0 )
      {
        LODWORD(v24.x) = 2883584;
        v23[0] = 1835008;
        sub_608322C0((int *)(a1 + 192), (int *)(a1 + 880), (signed int *)&v24, v23);
        LODWORD(v24.x) = 2228224;
        v23[0] = 1703936;
        sub_608322C0((int *)(a1 + 180), (int *)(a1 + 192), (signed int *)&v24, v23);
        result = ((int (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 4.5, 0.1, 0.04, 0.01);
      }
      if ( FIELD_F32(a1, 80) > (float)(FIELD_F32(a1, 840) + -24.0) )
      {
        sub_601D0230(dword_60C8AEF0, 0, 1);
        v12 = sub_601CF9C0(dword_60C8AEF0);
        sub_601CED18(v12, 16);
        FIELD_F32(a1, 840) = FIELD_F32(a1, 840) + 800.0;
        FIELD_F32(a1, 848) = FIELD_F32(a1, 848) + -700.0;
        FIELD_F32(a1, 844) = FIELD_F32(a1, 844) + 1000.0;
        FIELD_U32(a1, 696) = 0;
        FIELD_U32(a1, 708) = 240;
        result = FIELD_U32(a1, 596) + 1;
        FIELD_U32(a1, 596) = result;
      }
      break;
    case 3:
      v13 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 844))
          / (float)(sqrtf(
                      (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848))
                            * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848)))
                    + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))
                            * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))))
                  / FIELD_F32(a1, 200));
      FIELD_F32(a1, 584) = v13;
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v13, 0.1, 0.2, 0.1);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 696, 0.12, 0.1, 0.06, 0.03);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(
        a1 + 200,
        14.0,
        0.1,
        FIELD_F32(a1, 696),
        FIELD_F32(a1, 696) + -0.005);
      FIELD_U32(a1, 880) = sub_608332B0(a1 + 80, a1 + 840);
      v24.x = 2.351e-38;
      v23[0] = 0x200000;
      sub_608322C0((int *)(a1 + 192), (int *)(a1 + 880), (signed int *)&v24, v23);
      v24.x = 1.9102e-38;
      v23[0] = 0x100000;
      sub_608322C0((int *)(a1 + 180), (int *)(a1 + 192), (signed int *)&v24, v23);
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      v14 = -1;
      v16 = (int *)(a1 + 708);
      v15 = FIELD_U32(a1, 708);
      if ( !v15 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        result = sub_601919B0((_DWORD *)dword_60C8996C, a1);
        if ( result != 1 )
          return result;
        v15 = *v3;
        v14 = 1;
        v16 = v3;
      }
      result = v15 + v14;
      *v16 = result;
      break;
    default:
      return result;
  }
  return result;
}
