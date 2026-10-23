/* sub_604E7C78
 * address: 0x604E7C78   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E7C78(int a1, int a2)
{
  int result; // r0
  int v5; // r4
  int v6; // r1
  float v7; // r0
  float *v8; // r0
  float v9; // r1
  float v10; // r2
  float v11; // r0
  Vec3 v12[2]; // [sp+4h] [bp-1Ch] BYREF

  result = dword_60CC6D78;
  if ( dword_60CC6D78 )
  {
    v5 = *(_DWORD *)(sub_60834614(dword_60CC6D78) + 452);
    if ( !a2 )
    {
      result = FIELD_U32(a1, 544);
      if ( result == v5 )
        return result;
      LODWORD(v12[0].x) = &sead__SafeStringBase__vtable;
      LODWORD(v12[0].y) = dword_60CA5A70;
      sub_6047467C(*(_DWORD **)(a1 + 4), 6u, v12, (int)&dword_60CA5C50, 1.0, 0);
      if ( (FIELD_U8(dword_60CC6D78, 44) & 1) == 0 )
      {
        v8 = *(float **)(a1 + 62820);
        if ( v8 )
        {
          v9 = v8[23];
          v10 = v8[27];
          v11 = v8[31];
          v12[0].x = v9;
          v12[0].y = v10;
          v12[0].z = v11;
          EffectData_create(652, v12, 0, 0);
        }
      }
      if ( FIELD_U32(a1, 544) > v5 )
      {
        LODWORD(v12[0].x) = &sead__SafeStringBase__vtable;
        LODWORD(v12[0].y) = dword_60CA5A60;
        sub_6047467C(*(_DWORD **)(a1 + 4), 0, v12, (int)dword_60CA5C20, 1.0, 0);
      }
    }
    FIELD_U32(a1, 544) = v5;
    result = 62840;
    v6 = FIELD_U32(a1, 62840);
    if ( v6 )
    {
      v7 = FIELD_F32(v6, 176);
      LODWORD(v12[0].x) = &sead__SafeStringBase__vtable;
      v12[0].y = v7;
      return sub_6047E0EC(v12, v6, 1, v5);
    }
  }
  return result;
}
