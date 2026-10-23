/* sub_6063952C
 * address: 0x6063952C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6063952C(int a1)
{
  unsigned int v2; // r1
  bool v3; // cf
  __int16 v4; // r2
  int v5; // r1
  __int16 v6; // r2
  __int16 v7; // r1
  int v8; // r3
  int v9; // r12
  float v10; // s2
  float v11; // s0
  unsigned int v12; // r2
  __int16 v13; // r3
  int v14; // r2

  if ( FIELD_U8(a1, 7024) )
  {
    v2 = FIELD_U8(a1, 7025);
    if ( v2 != 2 )
    {
      v3 = v2 >= 4;
      v4 = FIELD_U8(a1, 7025);
      v5 = 9 * v2;
      if ( v3 )
        v4 = 0;
      *(_DWORD *)(116 * v4 + a1 + 6208) = &dword_60CB53D8[v5];
      FIELD_U8(a1, 7025) = 2;
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB54A0);
    }
  }
  else
  {
    v6 = FIELD_U16(a1, 7020);
    v7 = FIELD_U16(a1, 7022);
    if ( (v6 & 1) != 0 && (v7 & 1) == 0 && (v8 = FIELD_U32(PlayerMgr_instance, 48)) != 0
      || (v6 & 2) != 0 && (v7 & 2) == 0 && (v8 = FIELD_U32(PlayerMgr_instance, 52)) != 0
      || (v6 & 4) != 0 && (v7 & 4) == 0 && (v8 = FIELD_U32(PlayerMgr_instance, 56)) != 0
      || (v6 & 8) != 0 && (v7 & 8) == 0 && (v8 = FIELD_U32(PlayerMgr_instance, 60)) != 0 )
    {
      v9 = 0;
      v10 = FIELD_F32(a1, 7016);
      v11 = FIELD_F32(v8, 108) - FIELD_F32(a1, 108);
      if ( v11 >= v10 )
      {
        v9 = 1;
        if ( v11 >= (float)(v10 + v10) )
        {
          v9 = 2;
          if ( v11 >= (float)(v10 + (float)(v10 + v10)) )
            v9 = 3;
        }
      }
      v12 = FIELD_U8(a1, 7025);
      if ( v12 != v9 )
      {
        v3 = v12 >= 4;
        v13 = FIELD_U8(a1, 7025);
        v14 = 9 * v12;
        if ( v3 )
          v13 = 0;
        *(_DWORD *)(116 * v13 + a1 + 6208) = &dword_60CB53D8[v14];
        FIELD_U8(a1, 7025) = v9;
        StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB54A0);
      }
    }
    sub_6063A044(a1);
  }
  return CollisionActor__handleSpeed((CollisionActor *)a1);
}
