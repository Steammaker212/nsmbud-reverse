/* boss_cannon_gun_ref_C0040
 * address: 0x600C0040   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall boss_cannon_gun_ref_C0040(int a1)
{
  _DWORD **v1; // r4
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  char v5; // r12
  float result; // s0
  int *v7; // r6
  int v8; // r4
  int v9; // r0
  bool v10; // zf
  float v11; // s0
  float v12; // s2
  float v13; // s6
  _DWORD v15[21]; // [sp+Ch] [bp-54h] BYREF

  v1 = (_DWORD **)(a1 + 6100);
  v2 = **(_DWORD **)(a1 + 6100);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "boss_cannon_gun";
  v4 = v3(v2, v15);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v4, v15);
  v7 = *(int **)(ActorMgr__instance + 27172);
  if ( v7 != *(int **)(ActorMgr__instance + 27180) )
  {
    while ( 1 )
    {
      v8 = *v7;
      if ( ((unsigned int)&dword_60C83720 & ~(1611399448 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C83720) )
      {
        dword_60C8371C = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C83720);
      }
      if ( v8 )
      {
        v9 = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C8371C);
        v10 = v9 == 1;
        if ( v9 == 1 )
          v10 = FIELD_U8(v8, 19) == 0;
        if ( v10 )
          break;
      }
      if ( ++v7 == *(int **)(ActorMgr__instance + 27180) )
        return result;
    }
    sub_600BBD0C(v8, (float *)(a1 + 7484), 5 * FIELD_U32(a1, 7440) + 150);
    v11 = FIELD_F32(a1, 7484);
    v12 = FIELD_F32(a1, 7488) + 500.0;
    v13 = (float)(unsigned int)(5 * FIELD_U32(a1, 7440) + 30);
    FIELD_U32(a1, 7480) = FIELD_U32(a1, 7492);
    result = v11 + (float)(v13 * 3.0);
    FIELD_F32(a1, 7472) = result;
    FIELD_F32(a1, 7476) = v12;
  }
  return result;
}
