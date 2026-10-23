/* sub_601F5848
 * address: 0x601F5848   size: 1516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F5848(int a1)
{
  int v2; // r0
  int v3; // r0
  float v4; // r1
  float v5; // r2
  int result; // r0
  int *v7; // r5
  int v8; // r2
  __int64 v9; // r0
  int v10; // r6
  int v11; // r2
  float v12; // s2
  int v13; // r0
  int *v14; // r4
  int v15; // t1
  int v16; // r2
  int v17; // r0
  int *v18; // r1
  int v19; // r0
  float v20; // s2
  float v21; // s0
  float v22; // s6
  float v23; // s0
  float v24; // s0
  int *v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r0
  Vec3 v29[4]; // [sp+4h] [bp-34h] BYREF

  v2 = FIELD_U32(a1, 912);
  if ( v2 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 912) = v3;
    if ( !v3 )
    {
      v4 = FIELD_F32(a1, 88);
      v5 = FIELD_F32(a1, 572);
      v29[0].x = FIELD_F32(a1, 80);
      v29[0].y = v5;
      v29[0].z = v4;
      EffectData_create(1127, v29, 0, 0);
    }
  }
  v7 = (int *)(a1 + 596);
  result = FIELD_U32(a1, 596);
  switch ( result )
  {
    case 0:
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 320))(a1, 0);
      result = FIELD_U32(a1, 180);
      if ( result <= 238609293 )
      {
        if ( result < -178956970 )
        {
          result += 0x1FFFFFFF;
          if ( (unsigned int)result <= 0x15555554 )
          {
            FIELD_U32(a1, 696) = 0;
            FIELD_U32(a1, 708) = 240;
            goto LABEL_26;
          }
        }
        else
        {
          v8 = FIELD_U32(a1, 624) + 4;
          FIELD_U32(a1, 624) = v8;
          v9 = 0x100000000LL / v8;
          FIELD_U32(a1, 588) = v9;
          ((void (__fastcall *)(int, _DWORD, float, float, float, float))loc_60832560)(
            a1 + 696,
            HIDWORD(v9),
            0.15,
            0.1,
            0.015,
            0.0001);
          result = ((int (__fastcall *)(int, float, float, float, float))loc_60832560)(
                     a1 + 200,
                     7.0,
                     0.1,
                     FIELD_F32(a1, 696),
                     0.0001);
        }
      }
      break;
    case 1:
      v10 = 1;
      v11 = FIELD_U32(a1, 624) + 4;
      FIELD_U32(a1, 624) = v11;
      FIELD_U32(a1, 588) = 0x100000000LL / v11;
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 320))(a1, 0);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 696, 0.09, 0.1, 0.0012, 0.0001);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(
        a1 + 120,
        -FIELD_F32(a1, 584),
        0.1,
        FIELD_F32(a1, 696),
        0.0001);
      v12 = FIELD_F32(a1, 120);
      FIELD_F32(a1, 84) = v12 + FIELD_F32(a1, 84);
      FIELD_F32(a1, 88) = FIELD_F32(a1, 88) + (float)(v12 * 0.8);
      v15 = FIELD_U32(a1, 708);
      v14 = (int *)(a1 + 708);
      v13 = v15;
      if ( v15 )
      {
        v7 = v14;
        v10 = -1;
      }
      else
      {
        *v14 = 30;
        v13 = *v7;
      }
      result = v13 + v10;
      *v7 = result;
      break;
    case 2:
      v16 = -1;
      v18 = (int *)(a1 + 708);
      v17 = FIELD_U32(a1, 708);
      if ( !v17 )
      {
        v19 = sub_601CF9C0(dword_60C8AEF0);
        v16 = 1;
        FIELD_U8(v19, 1232) |= 1u;
        v18 = (int *)(a1 + 596);
        v20 = FIELD_F32(a1, 568);
        FIELD_F32(a1, 80) = v20 + -1100.0;
        v21 = FIELD_F32(a1, 572) + 280.0;
        FIELD_F32(a1, 84) = v21;
        v22 = FIELD_F32(a1, 576);
        FIELD_F32(a1, 88) = v22 + 1400.0;
        FIELD_U32(a1, 200) = 1094713344;
        FIELD_F32(a1, 840) = v20 + 1100.0;
        FIELD_F32(a1, 844) = v21 + 800.0;
        FIELD_F32(a1, 848) = (float)(v22 + -1400.0) + -600.0;
        FIELD_U32(a1, 192) = 1252698794;
        FIELD_U32(a1, 180) = 1252698794;
        v17 = FIELD_U32(a1, 596);
      }
      result = v17 + v16;
      *v18 = result;
      break;
    case 3:
      v23 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 844))
          / (float)(sqrtf(
                      (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848))
                            * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848)))
                    + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))
                            * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))))
                  / FIELD_F32(a1, 200));
      FIELD_F32(a1, 584) = v23;
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v23, 0.1, 0.2, 0.1);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 18.0, 0.1, 0.07, 0.03);
      result = ((int (__fastcall *)(int))loc_60168DF8)(a1);
      if ( FIELD_F32(a1, 80) > (float)(FIELD_F32(a1, 568) + -300.0) )
      {
        FIELD_F32(a1, 844) = FIELD_F32(a1, 844) + 700.0;
        FIELD_F32(a1, 848) = FIELD_F32(a1, 848) + -600.0;
LABEL_26:
        result = FIELD_U32(a1, 596) + 1;
        FIELD_U32(a1, 596) = result;
      }
      break;
    case 4:
      v24 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 844))
          / (float)(sqrtf(
                      (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848))
                            * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848)))
                    + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))
                            * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))))
                  / FIELD_F32(a1, 200));
      FIELD_F32(a1, 584) = v24;
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v24, 0.1, 0.2, 0.1);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 18.0, 0.1, 0.07, 0.03);
      result = ((int (__fastcall *)(int))loc_60168DF8)(a1);
      if ( FIELD_F32(a1, 80) > (float)(FIELD_F32(a1, 568) + 1100.0) )
      {
        result = *v7 + 1;
        *v7 = result;
      }
      break;
    case 5:
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 584) = 0;
      FIELD_F32(a1, 200) = (*(float (__fastcall **)(int, int))(*(_DWORD *)a1 + 332))(a1, 1200);
      FIELD_U32(a1, 588) = 3579139;
      FIELD_U32(a1, 192) = 0;
      sub_601F2688(a1, 0, 1, 0, 5.0, 1.0);
      memset(v29, 255, 12);
      sub_601FA238(dword_60C8BF58, v29, 0x80000, 7);
      FIELD_F32(a1, 248) = v29[0].z;
      FIELD_U32(a1, 240) = 7;
      FIELD_U32(a1, 592) = 0;
      sub_6019EC34((_DWORD *)(dword_60CC6D78 + 456), v29);
      v25 = (int *)sub_601E0040((int)v29);
      v26 = *v25;
      FIELD_U32(a1, 568) = *v25;
      v27 = v25[1];
      FIELD_U32(a1, 572) = v27;
      v28 = v25[2];
      FIELD_U32(a1, 576) = v28;
      FIELD_U32(a1, 80) = v26;
      FIELD_U32(a1, 84) = v27;
      FIELD_U32(a1, 88) = v28;
      FIELD_U32(a1, 632) = 1143930880;
      FIELD_U32(a1, 624) = 1200;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 344))(a1);
      if ( sub_601919B0((_DWORD *)dword_60C8996C, a1) == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      if ( sub_6019B154(6u, 0x16u) == 1 )
      {
        FIELD_U8(a1, 932) = 0;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
      }
      result = (int)StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&dword_60C8BA6C);
      break;
    default:
      return result;
  }
  return result;
}
