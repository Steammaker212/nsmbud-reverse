/* sub_6058F788
 * address: 0x6058F788   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058F788(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s6
  float v6; // s0
  char v7; // r12
  ShapedColliderInfo v8; // [sp+0h] [bp-60h] BYREF
  _DWORD v9[14]; // [sp+28h] [bp-38h] BYREF

  result = 2;
  if ( !FIELD_U8(dword_60C99DD4, 194) )
  {
    FIELD_U32(a1, 680) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 116) = -985137152;
    v3 = (float)(unsigned __int8)BYTE1(FIELD_U32(a1, 24));
    FIELD_F32(a1, 660) = v3;
    v4 = (float)(v3 * 0.5) * 16.0;
    FIELD_F32(a1, 664) = v4;
    FIELD_F32(a1, 120) = (float)((unsigned __int16)FIELD_U32(a1, 20) >> 12) * -0.1;
    v5 = FIELD_F32(a1, 108);
    FIELD_F32(a1, 668) = v5 + 136.0;
    FIELD_F32(a1, 672) = (float)(v5 + 144.0) + v4;
    FIELD_F32(a1, 676) = (float)(v5 + 136.0) + (float)(v3 * 16.0);
    sub_6058FA30(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 132))(a1);
    sub_60590014(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 136))(a1);
    v6 = (float)(FIELD_F32(a1, 660) * 16.0) + 300.0;
    FIELD_F32(a1, 492) = (float)(v6 * 0.5) + -200.0;
    FIELD_U32(a1, 496) = 0;
    FIELD_F32(a1, 508) = v6;
    FIELD_U32(a1, 512) = 1142292480;
    if ( ((unsigned int)&dword_60CAF6A0 & ~(1616443556 << v7) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60CAF6A0) )
      {
        dword_60CAF6A4 = 1124335616;
        dword_60CAF6A8 = 1132462080;
        dword_60CAF6AC = 1124335616;
        dword_60CAF6B0 = 0;
        dword_60CAF6B4 = 1114636288;
        dword_60CAF6B8 = 1077936128;
        dword_60CAF6BC = -1032847360;
        dword_60CAF6C0 = 1112276992;
        dword_60CAF6C4 = -1023148032;
        dword_60CAF6C8 = 1124073472;
        dword_60CAF6CC = -1023148032;
        dword_60CAF6D0 = 1132462080;
        _cxa_guard_release(&dword_60CAF6A0);
      }
    }
    memset(v9, 0, 16);
    memset(&v8, 0, 16);
    v9[4] = &dword_60CAF6A4;
    v9[5] = 0;
    v8.topLeft.x = 132.0;
    v8.topLeft.y = 256.0;
    v8.bottomRight.x = (float)(FIELD_F32(a1, 660) * 16.0) + 145.0;
    v8.bottomRight.y = 0.0;
    v8.rotation = 0;
    sub_60161E18((_DWORD *)(a1 + 712), a1, v9);
    ShapedCollider_init((ShapedCollider *)(a1 + 1512), (StageActor *)a1, &v8);
    FIELD_U32(a1, 1736) = 4;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 712));
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1512));
    return 1;
  }
  return result;
}
