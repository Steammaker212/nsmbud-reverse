/* sub_6027A278
 * address: 0x6027A278   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027A278(int a1)
{
  int v2; // r6
  float v3; // s0
  int v4; // r5
  float32x2_t v5; // d0
  float32x2_t v6; // d2
  int v7; // r0
  char *v8; // r6
  char v9; // r0
  int v10; // r0
  int v11; // r2
  signed int v12; // r0
  bool v13; // zf
  int result; // r0

  v2 = a1 + 6300;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = a1 + 648;
  v5.n64_f32[0] = CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    sub_6027C688(a1, v5.n64_f32[0]);
  v6.n64_u32[0] = 1067869798;
  v7 = **(_DWORD **)(*(_DWORD *)v2 + 12);
  v5.n64_f32[0] = FIELD_F32(v7, 24) + 0.007;
  FIELD_U32(v7, 24) = vmin_f32(v5, v6).n64_u32[0];
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v8 = (char *)(a1 + 8865);
    if ( FIELD_U8(a1, 8865) )
      goto LABEL_8;
    SE_EMY_CHOROPU_LAND_ref(a1, 1.4, FIELD_F32(a1, 108), FIELD_F32(a1, 112), 4500.0);
    v9 = 1;
  }
  else
  {
    v8 = (char *)(a1 + 8865);
    v9 = 0;
  }
  *v8 = v9;
LABEL_8:
  v10 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v4 + 4 * ((v10 + 18) >> 5) + 2224) & (1 << ((v10 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v4 + 4 * ((v10 + 22) >> 5) + 2224) & (1 << ((v10 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v4 + 4 * ((v10 + 28) >> 5) + 2224) & (1 << ((v10 + 28) & 0x1F))) == 0 )
  {
    v13 = FIELD_U8(a1, 9325) == 0;
    if ( FIELD_U8(a1, 9325) )
      v13 = FIELD_U8(a1, 9324) == 0;
    if ( v13 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EED8);
    else
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F00C);
  }
  else
  {
    v11 = FIELD_U32(a1, 8548);
    FIELD_U32(a1, 8548) = v11 - 1;
    if ( v11 > 1 )
    {
      if ( !FIELD_U8(a1, 8864) )
        goto LABEL_23;
    }
    else if ( !FIELD_U8(a1, 8864) )
    {
      FIELD_U8(a1, 8864) = 1;
      FIELD_U32(a1, 8548) = 0;
    }
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      FIELD_U8(a1, 8852) = v10;
      v12 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      FIELD_U32(a1, 80) = v12;
      if ( v12 != FIELD_U8(a1, 8852) )
      {
        FIELD_U32(a1, 8796) = sub_6027C3C4(a1);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EF18);
      }
    }
  }
LABEL_23:
  result = sub_60001B14((StageActor *)a1, a1 + 648);
  if ( result == 1 )
    return sub_600020C4(a1, a1 + 648);
  return result;
}
