/* sub_605C9E44
 * address: 0x605C9E44   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C9E44(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  int result; // r0
  int v10; // r0
  int v11; // r2

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 248))(a1, v2);
  sub_605CC4D8(a1);
  v3 = FIELD_U32(a1, 2872);
  v4 = a1 + 648;
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) == 0 )
      goto LABEL_20;
    v5 = sub_6014B69C(a1 + 648);
    if ( !v5 )
      goto LABEL_20;
    v6 = FIELD_U32(v5, 144);
    v7 = v6 == 0;
    if ( v6 )
      v7 = (FIELD_U8(v6, 569) & 8) == 0;
    if ( !v7 )
    {
      FIELD_U32(a1, 6116) = 1;
      FIELD_U32(a1, 120) = dword_60B057D4[sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1];
      FIELD_U32(a1, 124) = 1080033280;
      FIELD_U32(a1, 128) = 0;
    }
    else
    {
LABEL_20:
      if ( (FIELD_U8(a1, 2872) & 1) != 0 && (v8 = FIELD_U32(a1, 6116)) != 0 )
      {
        FIELD_U32(a1, 6116) = v8 - 1;
        FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.5;
        FIELD_U32(a1, 124) = 0x40000000;
      }
      else
      {
        FIELD_U32(a1, 124) = 0;
        StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0ECC._._);
      }
    }
  }
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = -1090519040;
  result = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(v4 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v4 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v10 = result + 28;
    v11 = v10 >> 5;
    result = v10 & 0x1F;
    if ( (*(_DWORD *)(v4 + 4 * v11 + 2224) & (1 << result)) == 0 )
      return sub_605CC8F8(a1);
  }
  return result;
}
