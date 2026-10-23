/* sub_6010CB84
 * address: 0x6010CB84   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010CB84(int a1)
{
  int v2; // r0
  float *v3; // r4
  unsigned int v4; // t1
  float v5; // s6
  int v6; // r0
  float v7; // s0
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v4 = FIELD_U16(a1, 6276);
  v3 = (float *)(a1 + 6276);
  v2 = v4;
  if ( v4 <= 1 )
    v2 = 1;
  v5 = (float)v2;
  v6 = dword_60CC6484;
  v7 = v3[472] + (float)((float)(v3[471] - v3[472]) * (float)(1.0 / v5));
  v3[472] = v7;
  v3[469] = v3[469] + (float)((float)(FIELD_F32(v6, 248) - v3[469]) * (float)(1.0 / v5));
  v3[470] = v3[470] + (float)((float)(FIELD_F32(v6, 252) - v3[470]) * (float)(1.0 / v5));
  FIELD_F32(v6, 260) = v7;
  FIELD_F32(v6, 264) = v3[469];
  FIELD_F32(v6, 268) = v3[470];
  result = *(unsigned __int16 *)v3;
  if ( !*(_WORD *)v3 )
  {
    result = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( result )
      FIELD_U8(result, 6136) = 1;
  }
  return result;
}
