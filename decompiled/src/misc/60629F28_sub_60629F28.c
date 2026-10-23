/* sub_60629F28
 * address: 0x60629F28   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60629F28(int a1)
{
  float v2; // s0
  float v3; // s0
  float result; // s0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r1

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 248))(a1, v2);
  result = sub_605CC4D8(a1, v3);
  v5 = FIELD_U32(a1, 2872);
  if ( (v5 & 1) != 0 )
  {
    v6 = FIELD_U32(a1, 6116);
    if ( v6 < 1 )
    {
      FIELD_U32(a1, 124) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB3C84);
      v5 = FIELD_U32(a1, 2872);
    }
    else
    {
      FIELD_U32(a1, 6116) = v6 - 1;
      result = FIELD_F32(a1, 120) * 0.5;
      FIELD_F32(a1, 120) = result;
      FIELD_U32(a1, 124) = 0x40000000;
    }
  }
  v7 = a1 + 648;
  if ( (v5 & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = -1090519040;
  v8 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v7 + 4 * ((v8 + 18) >> 5) + 2224) & (1 << ((v8 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v7 + 4 * ((v8 + 22) >> 5) + 2224) & (1 << ((v8 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v7 + 4 * ((v8 + 28) >> 5) + 2224) & (1 << ((v8 + 28) & 0x1F))) == 0 )
  {
    return sub_605CC8F8(a1);
  }
  return result;
}
