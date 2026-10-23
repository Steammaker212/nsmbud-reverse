/* sub_60111E1C
 * address: 0x60111E1C   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60111E1C(float *a1)
{
  float *v2; // r1
  float v3; // s0
  float v4; // s0
  int v5; // r1
  float *hasPlayer; // r1
  bool v7; // zf
  float v8; // s0
  float v9; // s0
  float *v10; // r1
  float v11; // s0
  float v12; // s0
  float *v13; // r0
  float v14; // s0
  float v15; // s0

  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1 )
  {
    v2 = *(float **)(PlayerMgr_instance + 48);
    if ( v2 )
    {
      v3 = v2[27] + v2[143];
      if ( a1[162] <= v3 && v3 <= a1[164] )
      {
        v4 = v2[28] + v2[144];
        if ( a1[163] <= v4 )
        {
          v5 = 1;
          if ( v4 <= a1[165] )
            return v5;
        }
      }
    }
  }
  hasPlayer = (float *)PlayerMgr_hasPlayer(PlayerMgr_instance, 1u);
  v7 = hasPlayer == 0;
  if ( hasPlayer )
  {
    hasPlayer = *(float **)(PlayerMgr_instance + 52);
    v7 = hasPlayer == 0;
  }
  if ( !v7 )
  {
    v8 = hasPlayer[27] + hasPlayer[143];
    if ( a1[162] <= v8 && v8 <= a1[164] )
    {
      v9 = hasPlayer[28] + hasPlayer[144];
      if ( a1[163] <= v9 )
      {
        v5 = 1;
        if ( v9 <= a1[165] )
          return v5;
      }
    }
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1 )
  {
    v10 = *(float **)(PlayerMgr_instance + 56);
    if ( v10 )
    {
      v11 = v10[27] + v10[143];
      if ( a1[162] <= v11 && v11 <= a1[164] )
      {
        v12 = v10[28] + v10[144];
        if ( a1[163] <= v12 )
        {
          v5 = 1;
          if ( v12 <= a1[165] )
            return v5;
        }
      }
    }
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) != 1 )
    return 0;
  v13 = *(float **)(PlayerMgr_instance + 60);
  if ( !v13 )
    return 0;
  v14 = v13[27] + v13[143];
  if ( a1[162] > v14 )
    return 0;
  if ( v14 > a1[164] )
    return 0;
  v15 = v13[28] + v13[144];
  if ( a1[163] > v15 )
    return 0;
  return v15 <= a1[165];
}
