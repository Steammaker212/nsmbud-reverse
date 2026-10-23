/* sub_6064BA14
 * address: 0x6064BA14   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float sub_6064BA14()
{
  float v0; // s16
  float *v1; // r4
  float v2; // s0
  float v3; // s2
  float *v4; // r4
  float v5; // s0
  float v6; // s2
  float *v7; // r4
  float v8; // s0
  float v9; // s2
  float *v10; // r4
  float v11; // s0
  float v12; // s2

  v0 = 0.0;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    v1 = *(float **)(PlayerMgr_instance + 32);
    if ( (*(_BYTE *)((*(int (__fastcall **)(float *))(*(_DWORD *)v1 + 80))(v1) + 2224) & 1) != 0 )
    {
      v2 = v1[28];
      v3 = FIELD_F32(dword_60CC6484, 124);
      if ( v3 >= v2 )
      {
        v0 = 0.0;
        if ( (float)(v3 - FIELD_F32(dword_60CC6484, 108)) <= (float)(v2 + 0.0) )
          v0 = v1[28];
      }
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v4 = *(float **)(PlayerMgr_instance + 36);
    if ( (*(_BYTE *)((*(int (__fastcall **)(float *))(*(_DWORD *)v4 + 80))(v4) + 2224) & 1) != 0 )
    {
      v5 = v4[28];
      v6 = FIELD_F32(dword_60CC6484, 124);
      if ( v6 >= v5 && (float)(v6 - FIELD_F32(dword_60CC6484, 108)) <= (float)(v5 + 0.0) )
      {
        if ( v0 == 0.0 )
        {
          v0 = v4[28];
        }
        else if ( v0 >= v5 )
        {
          v0 = v4[28];
        }
      }
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v7 = *(float **)(PlayerMgr_instance + 40);
    if ( (*(_BYTE *)((*(int (__fastcall **)(float *))(*(_DWORD *)v7 + 80))(v7) + 2224) & 1) != 0 )
    {
      v8 = v7[28];
      v9 = FIELD_F32(dword_60CC6484, 124);
      if ( v9 >= v8 && (float)(v9 - FIELD_F32(dword_60CC6484, 108)) <= (float)(v8 + 0.0) )
      {
        if ( v0 == 0.0 )
        {
          v0 = v7[28];
        }
        else if ( v0 >= v8 )
        {
          v0 = v7[28];
        }
      }
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    v10 = *(float **)(PlayerMgr_instance + 44);
    if ( (*(_BYTE *)((*(int (__fastcall **)(float *))(*(_DWORD *)v10 + 80))(v10) + 2224) & 1) != 0 )
    {
      v11 = v10[28];
      v12 = FIELD_F32(dword_60CC6484, 124);
      if ( v12 >= v11 && (float)(v12 - FIELD_F32(dword_60CC6484, 108)) <= (float)(v11 + 0.0) )
      {
        if ( v0 == 0.0 )
        {
          return v10[28];
        }
        else if ( v0 >= v11 )
        {
          return v10[28];
        }
      }
    }
  }
  return v0;
}
