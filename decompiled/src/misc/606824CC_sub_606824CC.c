/* sub_606824CC
 * address: 0x606824CC   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606824CC(int a1)
{
  int v2; // r5
  unsigned __int8 v3; // r4
  char v4; // r11
  float v5; // s16
  float v6; // s18
  unsigned int v7; // r6
  int result; // r0
  char v9; // r1
  _BOOL4 v10; // r2
  unsigned __int16 v11; // r0
  char v12; // r1
  float v13; // s0
  int v14; // t1
  int v15; // r0
  Vec3 v16; // [sp+4h] [bp-4Ch] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = FIELD_F32(a1, 112) + -65.0;
  v6 = FIELD_F32(a1, 108) + -56.0;
  v7 = (unsigned __int16)(int)(float)-v5;
  do
  {
    result = sub_607160F4(TileMgr_instance, (int)v6, v7, 0, 1);
    if ( (v9 & 0xF) == 1 )
    {
      result = (unsigned __int16)result;
      if ( (unsigned __int16)result != 6 )
      {
        v10 = 0;
        if ( v2 == 7 )
        {
          v11 = sub_607160F4(TileMgr_instance, (int)(float)(v6 + 16.0), v7, 0, 1);
          v10 = (v12 & 0xF | v11) == 0;
        }
        result = SE_KOOPA_HAND_BREAK_ref(a1, v2, v10, v3++, v6, v5);
        v4 = 1;
      }
    }
    v6 = v6 + 16.0;
    ++v2;
  }
  while ( v2 != 8 );
  if ( (v4 & 1) != 0 )
  {
    v13 = FIELD_F32(a1, 112);
    v16.x = FIELD_F32(a1, 108);
    v16.z = 4500.0;
    v14 = FIELD_U32(a1, 7508);
    v15 = dword_60AF2210[v14];
    v16.y = v13 + flt_60AF2218[v14];
    EffectData_create(v15, &v16, 0, 0);
    result = FIELD_U32(a1, 7508);
    if ( result == 1 )
      return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 3, 0, 0);
  }
  return result;
}
