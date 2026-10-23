/* sub_603D27D0
 * address: 0x603D27D0   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603D27D0(int a1)
{
  int v1; // r1
  bool v2; // zf
  int v3; // r1
  int v4; // r1
  float *v5; // r2
  float v6; // s0
  float v7; // s0
  float *v8; // r2
  float v9; // s0
  float v10; // s0
  float *v11; // r2
  float v12; // s0
  float v13; // s0
  float *v14; // r2
  float v15; // s0
  float v16; // s0

  v1 = FIELD_U32(a1, 644);
  if ( !v1 || (v3 = v1 - 1, v2 = v3 == 0, FIELD_U32(a1, 644) = v3, v4 = 0, v2) )
  {
    v5 = *(float **)(PlayerMgr_instance + 48);
    if ( v5 )
    {
      v6 = v5[27] + v5[143];
      if ( FIELD_F32(a1, 648) <= v6 && v6 <= FIELD_F32(a1, 656) )
      {
        v7 = v5[28] + v5[144];
        if ( FIELD_F32(a1, 652) <= v7 && v7 <= FIELD_F32(a1, 660) )
          return (unsigned int)sub_600085D0(ActorMgr__instance, 540) < 8;
      }
    }
    v8 = *(float **)(PlayerMgr_instance + 52);
    if ( v8 )
    {
      v9 = v8[27] + v8[143];
      if ( FIELD_F32(a1, 648) <= v9 && v9 <= FIELD_F32(a1, 656) )
      {
        v10 = v8[28] + v8[144];
        if ( FIELD_F32(a1, 652) <= v10 && v10 <= FIELD_F32(a1, 660) )
          return (unsigned int)sub_600085D0(ActorMgr__instance, 540) < 8;
      }
    }
    v11 = *(float **)(PlayerMgr_instance + 56);
    if ( v11 )
    {
      v12 = v11[27] + v11[143];
      if ( FIELD_F32(a1, 648) <= v12 && v12 <= FIELD_F32(a1, 656) )
      {
        v13 = v11[28] + v11[144];
        if ( FIELD_F32(a1, 652) <= v13 && v13 <= FIELD_F32(a1, 660) )
          return (unsigned int)sub_600085D0(ActorMgr__instance, 540) < 8;
      }
    }
    v14 = *(float **)(PlayerMgr_instance + 60);
    v4 = 0;
    if ( v14 )
    {
      v15 = v14[27] + v14[143];
      if ( FIELD_F32(a1, 648) <= v15 && v15 <= FIELD_F32(a1, 656) )
      {
        v16 = v14[28] + v14[144];
        if ( FIELD_F32(a1, 652) <= v16 && v16 <= FIELD_F32(a1, 660) )
          return (unsigned int)sub_600085D0(ActorMgr__instance, 540) < 8;
      }
    }
  }
  return v4;
}
