/* sub_606C6AA0
 * address: 0x606C6AA0   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C6AA0(int r0_0)
{
  float v2; // s0
  int v3; // r1
  int result; // r0
  float v5; // r1
  unsigned int v6; // r0
  Vec3 *v7; // r5
  char v8; // r12
  unsigned int v9; // r0
  unsigned int v10; // r1
  Vec2 a1; // [sp+4h] [bp-5Ch] BYREF
  unsigned int v12[3]; // [sp+Ch] [bp-54h] BYREF
  Vec2 a2; // [sp+18h] [bp-48h] BYREF

  v2 = FIELD_F32(r0_0, 108);
  if ( (FIELD_U8(r0_0, 20) & 1) != 0 )
  {
    v2 = v2 + 8.0;
    FIELD_F32(r0_0, 108) = v2;
  }
  v3 = sub_603FD6E0(dword_60C99DF4, FIELD_U8(LevelInfo_instance, 18), v2, FIELD_F32(r0_0, 112));
  result = 2;
  if ( !v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)r0_0 + 196))(r0_0);
    (*(void (__fastcall **)(int))(*(_DWORD *)r0_0 + 228))(r0_0);
    v5 = FIELD_F32(r0_0, 112);
    a2.x = FIELD_F32(r0_0, 108);
    a2.y = v5;
    v6 = distanceToPLayer(&a1, &a2);
    FIELD_U32(r0_0, 80) = v6 < 4 && a1.x < 0.0;
    FIELD_U32(r0_0, 144) = 1065353216;
    v7 = (Vec3 *)(r0_0 + 144);
    FIELD_U32(r0_0, 148) = 1065353216;
    FIELD_U32(r0_0, 152) = 1065353216;
    if ( ((unsigned int)dword_60CBAC2C & ~(1617718148 << v8) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(dword_60CBAC2C) )
      {
        dword_60CBAC2C[1] = 0x20000000;
        dword_60CBAC2C[2] = -536870912;
        _cxa_guard_release(dword_60CBAC2C);
      }
    }
    FIELD_U32(r0_0, 160) = dword_60CBAC2C[FIELD_U32(r0_0, 80) + 1];
    FIELD_U32(r0_0, 116) = 1140948992;
    (*(void (__fastcall **)(int))(*(_DWORD *)r0_0 + 200))(r0_0);
    (*(void (__fastcall **)(int))(*(_DWORD *)r0_0 + 208))(r0_0);
    (*(void (__fastcall **)(int))(*(_DWORD *)r0_0 + 212))(r0_0);
    v9 = FIELD_U32(r0_0, 160);
    v10 = FIELD_U32(r0_0, 164);
    v12[0] = FIELD_U32(r0_0, 156);
    v12[1] = v9;
    v12[2] = v10;
    sub_601927EC((int)&a2, (float *)(r0_0 + 144), v12, (_DWORD *)(r0_0 + 108));
    (*(void (__fastcall **)(_DWORD, Vec2 *))(***(_DWORD ***)(r0_0 + 6328) + 60))(**(_DWORD **)(r0_0 + 6328), &a2);
    ModelWrapper_updateModel(*(ModelWrapper **)(r0_0 + 6328));
    (*(void (__fastcall **)(int))(*(_DWORD *)r0_0 + 204))(r0_0);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)r0_0 + 192))(r0_0, &dword_60CBABEC);
    sub_60237208(r0_0 + 6120, (Vec3 *)(r0_0 + 6108), (Vec3i *)(r0_0 + 156), v7);
    sub_60237208(r0_0 + 6224, (Vec3 *)(r0_0 + 6108), (Vec3i *)(r0_0 + 156), v7);
    return 1;
  }
  return result;
}
