/* sub_6011DEE8
 * address: 0x6011DEE8   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011DEE8(int a1)
{
  int result; // r0
  int v3; // r0
  float v4; // r0
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float v8; // s1
  int v9; // r1
  signed int v10; // r0
  int v11; // r0
  Vec2 v12; // [sp+0h] [bp-10h] BYREF

  result = StageActor__distanceToPlayer((StateActor *)a1, &v12);
  if ( result == -1 )
    return result;
  if ( (unsigned int)result >= 4 )
    result = 0;
  v3 = *(_DWORD *)(PlayerMgr_instance + 4 * result + 32);
  if ( v3 )
  {
    FIELD_U32(a1, 9012) = FIELD_U32(v3, 108);
    v4 = FIELD_F32(v3, 112);
    FIELD_F32(a1, 9016) = v4;
    v5 = v4;
    FIELD_U32(a1, 9020) = FIELD_U32(a1, 116);
  }
  else
  {
    v5 = FIELD_F32(a1, 9016);
  }
  v6 = FIELD_F32(a1, 112) + -48.0;
  if ( v5 >= v6 )
  {
    result = 9304;
    v9 = 0;
LABEL_19:
    FIELD_U32(a1, 9304) = v9;
    return result;
  }
  v7 = v5 - v6;
  v8 = FIELD_F32(a1, 9012) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 9036) = v8;
  FIELD_F32(a1, 9040) = v7;
  if ( !FIELD_U32(a1, 80) )
  {
    v10 = sub_6000F7B8(v7, v8);
    v9 = -357913949;
    v11 = v10 & (v10 >> 31);
    if ( v11 > -357913949 )
      v9 = v11;
    result = 9304;
    goto LABEL_19;
  }
  result = sub_6000F7B8(-v7, -v8);
  if ( result <= 0 )
    result = 0;
  if ( result >= 357913948 )
    result = 357913948;
  FIELD_U32(a1, 9304) = result;
  return result;
}
