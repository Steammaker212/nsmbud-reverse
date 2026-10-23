/* sub_605A158C
 * address: 0x605A158C   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A158C(int a1)
{
  int v2; // r5
  int v3; // r0
  float v4; // s0
  float v5; // r0
  float v6; // s0
  float *v7; // r5
  int v8; // r1
  _DWORD *v9; // r7
  __int64 v10; // r0
  int v11; // r3
  unsigned int v12; // r3
  float v13; // s0
  float *v14; // r0
  float v15; // s0
  float v16; // s2
  int v18; // [sp+4h] [bp-8h] BYREF
  float v19; // [sp+8h] [bp-4h] BYREF
  int v20; // [sp+Ch] [bp+0h] BYREF
  float v21; // [sp+10h] [bp+4h]
  int v22; // [sp+14h] [bp+8h]

  v2 = 1;
  v19 = 0.0;
  do
  {
    v3 = FIELD_U32(a1, 116);
    v4 = FIELD_F32(a1, 112);
    v20 = FIELD_U32(a1, 108);
    v21 = v4 + (float)((float)(v2 - 1) * -16.0);
    v22 = v3;
    ((void (__fastcall *)(int *, float *, int *, _DWORD))checkLiquidCollisions)(
      &v18,
      &v19,
      &v20,
      FIELD_U8(a1, 86));
    if ( v2 > 9 )
      break;
    ++v2;
  }
  while ( !v18 );
  if ( v19 == 0.0 )
  {
    StageActor__delete((StateActor *)a1, 1);
    v5 = v19;
  }
  else
  {
    v5 = v19;
    v6 = v19 + 12.0;
    if ( FIELD_F32(a1, 112) >= (float)(v19 + 12.0) && FIELD_F32(a1, 124) > 0.0 )
    {
      FIELD_U32(a1, 124) = -1098907648;
      FIELD_F32(a1, 112) = v6;
    }
  }
  FIELD_F32(a1, 6308) = v5;
  v7 = (float *)(a1 + 6308);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  SE_OBJ_TARU_LIFT_ROLL_ref(a1);
  StageActor__accelerateX((StageActor *)a1);
  FIELD_U32(a1, 6312) = FIELD_U32(a1, 112);
  v9 = (_DWORD *)(a1 + 6336);
  v8 = FIELD_U32(a1, 6336);
  LODWORD(v10) = 0;
  FIELD_U64(a1, 6336) = v10;
  for ( HIDWORD(v10) = FIELD_U32(a1, 6616); HIDWORD(v10); HIDWORD(v10) = *(_DWORD *)(HIDWORD(v10) + 4) )
  {
    if ( *(_DWORD *)HIDWORD(v10) )
    {
      v11 = *(_DWORD *)(*(_DWORD *)HIDWORD(v10) + 2196);
      if ( (unsigned int)FIELD_U8(v11, 533) - 1 <= 1 )
      {
        v12 = FIELD_S8(v11, 84);
        if ( v12 <= 3 )
        {
          LODWORD(v10) = v10 | (1 << v12);
          *v9 = v10;
        }
      }
    }
  }
  CollisionActor__handleSpeed((CollisionActor *)a1);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6360));
  sub_605A1410((_DWORD *)a1);
  if ( *v9 == FIELD_U32(a1, 6340) )
  {
    v13 = *v7;
  }
  else
  {
    v13 = *v7;
    if ( (float)(FIELD_F32(a1, 112) + 16.0) >= *v7 )
    {
      v20 = FIELD_U32(a1, 108);
      v21 = v13;
      v22 = 1166843904;
      goto LABEL_27;
    }
  }
  v14 = (float *)(a1 + 6312);
  v20 = FIELD_U32(a1, 108);
  v21 = v13;
  v15 = v13 + -12.0;
  v22 = 1170939904;
  v16 = FIELD_F32(a1, 124);
  if ( v16 > 0.0 )
  {
    if ( FIELD_F32(a1, 112) < v15 || *v14 >= v15 )
      goto LABEL_28;
LABEL_27:
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 108))(a1, &v20);
    goto LABEL_28;
  }
  if ( v16 < 0.0 && FIELD_F32(a1, 112) <= v15 && *v14 > v15 )
    goto LABEL_27;
LABEL_28:
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
