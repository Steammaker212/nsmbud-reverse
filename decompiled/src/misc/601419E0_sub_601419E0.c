/* sub_601419E0
 * address: 0x601419E0   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601419E0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  unsigned int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // t1
  int v9; // r3
  float v10; // s0
  float v11; // s2
  int v12; // r0
  int v13; // s0
  int result; // r0
  float v15[4]; // [sp+0h] [bp-10h] BYREF

  v4 = FIELD_U32(a1, 6736);
  v2 = (_DWORD *)(a1 + 6736);
  v3 = v4;
  if ( v4 >= 1 )
  {
    *v2 = --v3;
    if ( !v3 )
    {
      v5 = FIELD_U32(a1, 6744);
      if ( v5 >= 4 )
        v5 = 0;
      v6 = EnemyCounterMaybe_instance + 8 * v5;
      v8 = FIELD_U32(v6, 136);
      v7 = (_DWORD *)(v6 + 136);
      v3 = v8;
      if ( v8 >= 1 )
        *v7 = --v3;
    }
  }
  ((void (__fastcall *)(int, int, float, float))loc_60001018)(a1, v3, FIELD_F32(a1, 100), FIELD_F32(a1, 96));
  v10 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = v10;
  v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 112) = v11;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  if ( FIELD_U8(a1, 86) == 1 )
  {
    v13 = -991887360;
  }
  else
  {
    if ( FIELD_U8(a1, 86) )
      goto LABEL_15;
    v15[0] = v10;
    v15[1] = v11;
    v12 = ((int (__fastcall *)(int, float *, _DWORD, int))sub_60151960)(a1 + 648, v15, 0, v9);
    v13 = 1162756096;
    if ( v12 == 1 && FIELD_F32(a1, 6116) < 0.0 )
      v13 = FIELD_U32(a1, 6116);
  }
  FIELD_U32(a1, 116) = v13;
LABEL_15:
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( sub_60141890((_DWORD *)a1) )
    return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  result = sub_60142A90(a1);
  if ( !result )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87D84);
    }
    else
    {
      if ( SE_OBJ_FIREBALL_SPLASH_ref_3(a1) == 1 )
        return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
      result = FIELD_U32(a1, 6740);
      FIELD_U32(a1, 6740) = result + 1;
      if ( result >= 599 )
        return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
    }
  }
  return result;
}
