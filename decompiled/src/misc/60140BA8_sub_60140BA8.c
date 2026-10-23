/* sub_60140BA8
 * address: 0x60140BA8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60140BA8(int a1)
{
  int *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // t1
  int v11; // r3
  float v12; // s0
  float v13; // s2
  int v14; // r0
  int v15; // s0
  _DWORD *v16; // r5
  int result; // r0
  float v18[6]; // [sp+0h] [bp-18h] BYREF

  v4 = FIELD_U32(a1, 6736);
  v2 = (int *)(a1 + 6736);
  v3 = v4;
  if ( v4 >= 1 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( !v5 )
    {
      v6 = FIELD_U32(a1, 6744);
      if ( v6 >= 4 )
        v6 = 0;
      v7 = EnemyCounterMaybe_instance + 8 * v6;
      v10 = FIELD_U32(v7, 136);
      v8 = (_DWORD *)(v7 + 136);
      v9 = v10;
      if ( v10 >= 1 )
        *v8 = v9 - 1;
    }
  }
  StageActor__accelerateX((StageActor *)a1);
  ((void (__fastcall *)(int, float, float))loc_60001018)(a1, FIELD_F32(a1, 100), FIELD_F32(a1, 96));
  v12 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = v12;
  v13 = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 112) = v13;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  if ( FIELD_U8(a1, 86) == 1 )
  {
    v15 = -991887360;
  }
  else
  {
    if ( FIELD_U8(a1, 86) )
      goto LABEL_15;
    v18[0] = v12;
    v18[1] = v13;
    v14 = ((int (__fastcall *)(int, float *, _DWORD, int))sub_60151960)(a1 + 648, v18, 0, v11);
    v15 = 1162756096;
    if ( v14 == 1 && FIELD_F32(a1, 6116) < 0.0 )
      v15 = FIELD_U32(a1, 6116);
  }
  FIELD_U32(a1, 116) = v15;
LABEL_15:
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v16 = (_DWORD *)(a1 + 6740);
  if ( FIELD_S32(a1, 6740) >= 5 && (FIELD_U8(a1, 2872) & 1) != 0 )
    return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  if ( SE_OBJ_FIREBALL_SPLASH_ref_3(a1) == 1 )
    return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  if ( sub_60141890(a1) == 1 )
    return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  result = (*v16)++;
  if ( result >= 599 )
    return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  return result;
}
