/* SE_OBJ_BOSS_WARP_CANNON_SHOT_ref
 * address: 0x600C0214   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOSS_WARP_CANNON_SHOT_ref(int result, unsigned int a2)
{
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r6
  int v6; // r0
  int (__fastcall *v7)(int, Vec3 *); // r2
  int v8; // r0
  int *v9; // r5
  float v10; // r1
  unsigned __int8 *p_out; // r7
  int v12; // r6
  char v13; // r12
  int *i; // r5
  bool v15; // zf
  Vec2 out; // [sp+Ch] [bp-6Ch] BYREF
  int v17; // [sp+14h] [bp-64h]
  Vec3 position; // [sp+18h] [bp-60h] BYREF
  float v19; // [sp+24h] [bp-54h]
  float v20; // [sp+34h] [bp-44h]

  v3 = result;
  if ( a2 <= 4 )
  {
    v4 = a2;
    if ( a2 == 4 )
      v4 = 0;
    v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
    if ( v5 )
    {
      v6 = **(_DWORD **)(v3 + 6100);
      v7 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v6 + 84);
      LODWORD(position.x) = &sead__SafeStringBase__vtable;
      LODWORD(position.y) = "boss_cannon_gun";
      v8 = v7(v6, &position);
      (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)(v3 + 6100) + 108))(
        **(_DWORD **)(v3 + 6100),
        v8,
        &position);
      out.x = v19 + -10.0;
      out.y = v20 + 32.0;
      v17 = -991887360;
      position.x = -2.5;
      position.y = 10.0;
      sub_6079C9D8(v5, &out, &position, 1);
      sub_6079D158(v5, -477218588);
      FIELD_U32(v5, 160) = 0x80000000 - dword_60C83938;
    }
    LODWORD(position.x) = 42;
    v9 = sub_60002B90(a2, unk_60C2641C);
    v10 = FIELD_F32(v3, 112);
    p_out = (unsigned __int8 *)&out;
    v12 = Global_BasicSoundActor2;
    position.x = FIELD_F32(v3, 108);
    position.y = v10;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v12, "SE_OBJ_BOSS_WARP_CANNON_SHOT", &out.x, (int)v9);
    result = 6360;
    for ( i = *(int **)(v3 + 6360); i; i = (int *)i[1] )
    {
      result = *i;
      v15 = *i == 0;
      if ( *i )
      {
        p_out = *(unsigned __int8 **)(result + 2196);
        v15 = p_out == 0;
      }
      if ( !v15 )
      {
        result = p_out[533];
        if ( result == 1 )
        {
          if ( ((unsigned int)&dword_60C7B374 & ~(1611400204 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
          {
            dword_60C7B370 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B374);
          }
          result = (**(int (__fastcall ***)(unsigned __int8 *, int *))p_out)(p_out, &dword_60C7B370);
          if ( result == 1 )
            result = (*(int (__fastcall **)(unsigned __int8 *, int, int, _DWORD, float, float, _DWORD))(*(_DWORD *)p_out + 1176))(
                       p_out,
                       4,
                       1,
                       0,
                       3.0,
                       3.0,
                       0);
        }
      }
    }
  }
  return result;
}
