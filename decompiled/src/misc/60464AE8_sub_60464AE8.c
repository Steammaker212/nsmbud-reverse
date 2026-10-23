/* sub_60464AE8
 * address: 0x60464AE8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60464AE8(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  float v4; // s18
  float v5; // s0
  float v6; // s20
  float v7; // s16
  float v8; // s22
  float v9; // s26
  float v10; // s24
  _BYTE *v11; // r5
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int result; // r0
  int v17; // s0
  int *v18; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = sub_6014C4A4(a1 + 648);
  v3 = (v2 >> 20) & 0xFF0;
  v4 = FIELD_F32(a1, 120);
  v5 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v6 = *(float *)((char *)&sinLutTable[2] + v3) + (float)(v5 * *(float *)((char *)&sinLutTable[3] + v3));
  v7 = *(float *)((char *)sinLutTable + v3) + (float)(*(float *)((char *)&sinLutTable[1] + v3) * v5);
  if ( FIELD_U8(a1, 6054) || FIELD_U8(a1, 6053) )
    v4 = v4 * 0.5;
  v8 = FIELD_F32(a1, 124);
  v9 = FIELD_F32(a1, 6024);
  v10 = FIELD_F32(a1, 6028);
  sub_600037A0(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)(v9 + (float)(v6 * v4)) + FIELD_F32(a1, 6000));
  FIELD_F32(a1, 112) = (float)((float)(v8 + (float)(v7 * v4)) + v10) + FIELD_F32(a1, 112);
  v11 = (_BYTE *)(a1 + 6197);
  if ( FIELD_U8(a1, 6197) )
  {
    v12 = FIELD_U32(a1, 6204);
    if ( !v12 || (v13 = v12 - 1, (FIELD_U32(a1, 6204) = v13) == 0) )
      *v11 = 0;
  }
  if ( FIELD_U32(a1, 6224) != 2 )
  {
    v14 = FIELD_U32(a1, 6228);
    if ( !v14 || (v15 = v14 - 1, (FIELD_U32(a1, 6228) = v15) == 0) )
      EffectWrapper_update((EffectWrapper *)(a1 + 6684), 90, (Vec3 *)(a1 + 6124), 0, (Vec3 *)(a1 + 144));
  }
  SE_OBJ_CMN_SPLASH_ref_462370(a1);
  if ( (CollisionActor__sub_600034C8((CollisionActor *)a1) & 1) != 0 )
  {
    FIELD_U32(a1, 6192) = 1;
    sub_60462A58(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  }
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    return SE_OBJ_ITEM_DISAPP_ref(a1, 1, 1);
  if ( FIELD_U8(a1, 86) == 1 )
  {
    v17 = -987594752;
  }
  else
  {
    v18 = dword_60464D34;
    if ( FIELD_U32(a1, 6168) == 5 )
      v18 = &dword_60464D34[1];
    v17 = *v18;
  }
  FIELD_U32(a1, 116) = v17;
  result = (unsigned __int8)*v11;
  if ( !*v11 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  return result;
}
