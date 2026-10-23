/* sub_60688374
 * address: 0x60688374   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60688374(float *a1)
{
  int v2; // r5
  char v3; // r8
  int v4; // r11
  float v5; // s18
  float v6; // s26
  char v7; // r1
  unsigned __int16 v8; // r0
  char v9; // r1
  float v10; // s26
  unsigned int result; // r0
  char v12; // r1
  unsigned __int16 v13; // r0
  char v14; // r1
  char v15; // r1
  float v16; // s0
  float v17; // [sp+18h] [bp-70h] BYREF
  float v18; // [sp+1Ch] [bp-6Ch]
  Vec3 v19; // [sp+20h] [bp-68h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = a1[27] + -56.0;
  v6 = a1[1907] + -112.0;
  v17 = v5;
  v18 = v6;
  do
  {
    sub_607160F4(TileMgr_instance, (int)v5, (unsigned __int16)(int)(float)-v6, 0, 1);
    if ( v2 == 7 )
    {
      if ( (v7 & 0xF) != 0 )
      {
        v3 = 1;
        v8 = sub_607160F4(TileMgr_instance, (int)(float)(v5 + 16.0), (unsigned __int16)(int)(float)-v6, 0, 1);
        SE_KOOPA_HAND_BREAK_ref_2(a1, &v17, 7, (v9 & 0xF | v8) == 0, (unsigned __int8)v4++);
      }
      v10 = v6 + -16.0;
      v18 = v10;
      result = sub_607160F4(TileMgr_instance, (int)v5, (unsigned __int16)(int)(float)-v10, 0, 1);
      if ( (v12 & 0xF) != 0 )
      {
        v3 = 1;
        v13 = sub_607160F4(TileMgr_instance, (int)(float)(v5 + 16.0), (unsigned __int16)(int)(float)-v10, 0, 1);
        result = SE_KOOPA_HAND_BREAK_ref_2(a1, &v17, 7, (v14 & 0xF | v13) == 0, (unsigned __int8)v4++);
      }
    }
    else
    {
      if ( (v7 & 0xF) != 0 )
      {
        SE_KOOPA_HAND_BREAK_ref_2(a1, &v17, (unsigned __int8)v2, 0, (unsigned __int8)v4++);
        v3 = 1;
      }
      v10 = v6 + -16.0;
      v18 = v10;
      result = sub_607160F4(TileMgr_instance, (int)v5, (unsigned __int16)(int)(float)-v10, 0, 1);
      if ( (v15 & 0xF) != 0 )
      {
        result = SE_KOOPA_HAND_BREAK_ref_2(a1, &v17, (unsigned __int8)v2, 0, (unsigned __int8)v4++);
        v3 = 1;
      }
    }
    v5 = v5 + 16.0;
    ++v2;
    v6 = (float)(v10 + -16.0) + 32.0;
    v17 = v5;
    v18 = v6;
  }
  while ( v2 != 8 );
  if ( (v3 & 1) != 0 )
  {
    v16 = a1[1907];
    v19.x = a1[1906];
    v19.y = v16 + -112.0;
    v19.z = 4500.0;
    return EffectData_create(1118, &v19, 0, 0);
  }
  return result;
}
