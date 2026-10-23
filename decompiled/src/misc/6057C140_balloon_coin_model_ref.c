/* balloon_coin_model_ref
 * address: 0x6057C140   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_coin_model_ref(int a1)
{
  int result; // r0
  float v3; // r12
  unsigned int v4; // r1
  int *v5; // t1
  int v6; // r0
  int (__fastcall *v7)(int, _DWORD *); // r2
  int v8; // r0
  _DWORD v9[16]; // [sp+0h] [bp-40h] BYREF

  if ( sub_605D01D4() == 1 )
  {
    MovementBlockCoinBase__vf150(a1);
    if ( FIELD_U32(a1, 7524) )
    {
      return EffectData_create(442, (Vec3 *)(a1 + 7508), 0, 0);
    }
    else
    {
      v5 = *(int **)(a1 + 7484);
      v6 = *v5;
      v7 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v5 + 84);
      v9[0] = &sead__SafeStringBase__vtable;
      v9[1] = "balloon_coin_model";
      v8 = v7(v6, v9);
      (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 7484) + 108))(
        **(_DWORD **)(a1 + 7484),
        v8,
        v9);
      return sub_60236DF4(441, v9, 1);
    }
  }
  else
  {
    if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
    {
      FIELD_U32(a1, 112) = FIELD_U32(a1, 7520);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v3 = FIELD_F32(a1, 112);
      FIELD_F32(a1, 7520) = v3;
      v4 = FIELD_U32(a1, 7552);
      FIELD_F32(a1, 112) = v3
                           + (float)((float)(*(float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0))
                                           + (float)((float)((float)(v4 & 0xFFFFFF)
                                                           * *(float *)((char *)&sinLutTable[1] + ((v4 >> 20) & 0xFF0)))
                                                   * 0.000000059605))
                                   * 4.0);
      FIELD_U32(a1, 7552) = v4 + 0x1000000;
    }
    else
    {
      CollisionActor__handleSpeed((CollisionActor *)a1);
    }
    sub_6057A67C(a1);
    if ( FIELD_U32(a1, 7544) )
      ((void (__fastcall *)(int))loc_6057D09C)(a1);
    result = FIELD_U8(dword_60C9CF0C, 1361);
    if ( FIELD_U8(dword_60C9CF0C, 1361) )
    {
      result = FIELD_U32(a1, 7580);
      if ( !result )
        return sub_602A3EFC(a1 + 7556, 8, 0.0625);
    }
  }
  return result;
}
