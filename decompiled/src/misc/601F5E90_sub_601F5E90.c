/* sub_601F5E90
 * address: 0x601F5E90   size: 1464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F5E90(int a1)
{
  StateMethodExecuter *result; // r0
  float v3; // s0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r0
  float v7; // s2
  float v8; // s4
  float v9; // s16
  float v10; // s0
  int v11; // r0
  float v12; // s2
  float v13; // s0
  int v14; // r0
  unsigned int v15; // r0
  _DWORD *v16; // r0
  float v17; // r1
  float v18; // r2
  signed int v19; // [sp+0h] [bp-40h] BYREF
  int speed; // [sp+4h] [bp-3Ch] BYREF
  Vec3 target; // [sp+8h] [bp-38h] BYREF

  result = *(StateMethodExecuter **)(a1 + 596);
  if ( result == (StateMethodExecuter *)2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 384))(a1);
    FIELD_U32(a1, 880) = sub_608332B0(a1 + 80, a1 + 840);
    target.x = 2.351e-38;
    speed = 0x200000;
    sub_608322C0((int *)(a1 + 192), (int *)(a1 + 880), (signed int *)&target, &speed);
    target.x = 1.5046e-36;
    speed = 0x40000;
    moveValueTo((int *)(a1 + 888), (int *)&target, &speed);
    FIELD_U32(a1, 180) += FIELD_U32(a1, 888);
    if ( sqrtf(
           (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848))
                 * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 848)))
         + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840))
                 * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 840)))) >= 550.0 )
    {
      v15 = FIELD_U32(a1, 900) - 49283072;
      FIELD_U32(a1, 900) = v15;
      FIELD_U32(a1, 176) = (int)(float)((float)(2147500000.0
                                                 * (float)(FIELD_F32(a1, 896)
                                                         * (float)(*(float *)((char *)sinLutTable + ((v15 >> 20) & 0xFF0))
                                                                 + (float)((float)((float)(v15 & 0xFFFFFF)
                                                                                 * *(float *)((char *)&sinLutTable[1]
                                                                                            + ((v15 >> 20) & 0xFF0)))
                                                                         * 0.000000059605))))
                                         / 180.0);
    }
    else
    {
      speed = 6291456;
      v19 = 0x200000;
      target.x = -2.7043e32;
      sub_608322C0((int *)(a1 + 176), (int *)&target, &speed, &v19);
      speed = 6291456;
      v19 = 0x200000;
      target.x = 2.2789e-30;
      sub_608322C0((int *)(a1 + 184), (int *)&target, &speed, &v19);
    }
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -4.1, 0.1, 0.12, 0.01);
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 5.1, 0.1, 0.1, 0.03);
    result = (StateMethodExecuter *)((int (__fastcall *)(int))loc_60168DF8)(a1);
    if ( FIELD_F32(a1, 84) < FIELD_F32(a1, 844) )
    {
      result = (StateMethodExecuter *)(FIELD_U32(a1, 180) + 1789569706);
      if ( (unsigned int)result <= 0xAAAAAA9 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        result = (StateMethodExecuter *)sub_601919B0((_DWORD *)dword_60C8996C, a1);
        if ( result == (StateMethodExecuter *)1 )
        {
          v16 = (_DWORD *)sub_601FEE28(dword_60C8C188);
          sub_6016E884(v16);
          v17 = FIELD_F32(a1, 84);
          v18 = FIELD_F32(a1, 88);
          target.x = FIELD_F32(a1, 80);
          target.y = v17;
          target.z = v18;
          EffectData_create(1130, &target, 0, 0);
          sub_6019B874(6, 0);
          sub_601E4C88((_DWORD *)dword_60C8B13C, 97, (_DWORD *)(a1 + 80));
          return StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&dword_60C8BC8C);
        }
      }
    }
  }
  else if ( result == (StateMethodExecuter *)1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 384))(a1);
    v7 = FIELD_F32(a1, 88) - FIELD_F32(a1, 848);
    v8 = FIELD_F32(a1, 80) - FIELD_F32(a1, 840);
    v9 = sqrtf((float)(v7 * v7) + (float)(v8 * v8));
    if ( v9 <= 150.0 )
    {
      target.x = 1.5046e-36;
      speed = 0x10000;
      moveValueTo((int *)(a1 + 888), (int *)&target, &speed);
      v12 = 0.06;
      v10 = 0.5;
      FIELD_U32(a1, 180) += FIELD_U32(a1, 888);
      v11 = a1 + 200;
    }
    else
    {
      target.x = 1.3224e-38;
      speed = 0x100000;
      sub_608322C0((int *)(a1 + 180), (int *)(a1 + 192), (signed int *)&target, &speed);
      v10 = 3.0;
      v11 = a1 + 200;
      v12 = 0.1;
    }
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v11, v10, 0.1, v12, 0.03);
    v13 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 844)) / (float)(v9 / FIELD_F32(a1, 200));
    FIELD_F32(a1, 584) = v13;
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v13, 0.1, 0.2, 0.1);
    result = (StateMethodExecuter *)((int (__fastcall *)(int))loc_60168DF8)(a1);
    if ( v9 < 100.0 )
    {
      FIELD_F32(a1, 840) = FIELD_F32(a1, 568) + -1100.0;
      FIELD_F32(a1, 844) = FIELD_F32(a1, 572) + -500.0;
      FIELD_F32(a1, 848) = FIELD_F32(a1, 576) + -1000.0;
      FIELD_U32(a1, 880) = sub_608332B0(a1 + 80, a1 + 840);
      FIELD_U32(a1, 120) = 0;
      v14 = sub_601CF9C0(dword_60C8AEF0);
      FIELD_U8(v14, 1232) |= 1u;
      sub_601E4C88((_DWORD *)dword_60C8B13C, 96, (_DWORD *)(a1 + 80));
      goto LABEL_13;
    }
  }
  else if ( !result )
  {
    result = (StateMethodExecuter *)sub_601F74B4(a1);
    v3 = FIELD_F32(a1, 84);
    if ( v3 > FIELD_F32(a1, 844) )
    {
      FIELD_F32(a1, 840) = FIELD_F32(a1, 568) + 700.0;
      FIELD_F32(a1, 848) = FIELD_F32(a1, 576) + -900.0;
      FIELD_F32(a1, 844) = v3 + -300.0;
      FIELD_F32(a1, 128) = FIELD_F32(a1, 128) * 0.8;
      FIELD_F32(a1, 132) = FIELD_F32(a1, 132) * 0.8;
      FIELD_F32(a1, 136) = FIELD_F32(a1, 136) * 0.8;
      v4 = sub_608332B0(a1 + 80, a1 + 840);
      FIELD_U32(a1, 880) = v4;
      FIELD_U32(a1, 192) = v4;
      FIELD_U32(a1, 888) = 0;
      FIELD_U32(a1, 120) = 0;
      v5 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
      sub_601B5110(v5, 3, 1, 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 380))(a1);
      v6 = FIELD_U32(a1, 760);
      FIELD_U32(a1, 304) = v6;
      FIELD_U32(a1, 308) = FIELD_U32(a1, 764);
      *(_DWORD *)(*(_DWORD *)v6 + 36) = 0;
      sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 304), 7, 0);
LABEL_13:
      result = (StateMethodExecuter *)(FIELD_U32(a1, 596) + 1);
      FIELD_U32(a1, 596) = result;
    }
  }
  return result;
}
