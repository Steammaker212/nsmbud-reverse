/* sub_601557EC
 * address: 0x601557EC   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601557EC(int a1, float *a2)
{
  float v3; // s16
  float *v4; // r0
  float v5; // s18
  float v6; // s20
  float v7; // s22
  float v8; // s16
  float v10; // [sp+8h] [bp-48h] BYREF
  float v11; // [sp+Ch] [bp-44h]

  v3 = *a2;
  v4 = *(float **)(a1 + 2204);
  v5 = *v4;
  v6 = v4[1] + a2[1];
  v7 = *v4 - (float)(*a2 + 1.0);
  v11 = v6;
  v10 = v7;
  v8 = v5 + v3;
  if ( (unsigned __int16)sub_607160F4(TileMgr_instance, (int)v7, (unsigned __int16)(int)(float)-v6, 0, 1) != 0x16 )
  {
LABEL_4:
    v11 = v6;
    v10 = v7;
    if ( (unsigned __int16)sub_607160F4(TileMgr_instance, (int)v7, (unsigned __int16)(int)(float)-v6, 1u, 1) != 0x16 )
      return 0;
    while ( !((int (__fastcall *)(int, float *, float, float))loc_601518D4)(a1, &v10, v8, 16.0) )
    {
      if ( (unsigned __int16)sub_607160F4(TileMgr_instance, (int)v10, (unsigned __int16)(int)(float)-v11, 1u, 1) != 0x16 )
        return 0;
    }
  }
  else
  {
    while ( ((int (__fastcall *)(int, float *, float, float))loc_601518D4)(a1, &v10, v8, 16.0) != 1 )
    {
      if ( (unsigned __int16)sub_607160F4(TileMgr_instance, (int)v10, (unsigned __int16)(int)(float)-v11, 0, 1) != 0x16 )
        goto LABEL_4;
    }
  }
  return 1;
}
