/* SE_PLY_ATTACK_FENCE_ref
 * address: 0x607C2C90   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ATTACK_FENCE_ref(int a1)
{
  int v2; // r2
  int *v3; // r1
  int *v4; // r5
  int v5; // r0
  float v6; // s0
  int result; // r0
  float v8; // s16
  Vec3 v9; // [sp+4h] [bp-54h] BYREF
  float v10[3]; // [sp+10h] [bp-48h] BYREF
  float v11; // [sp+1Ch] [bp-3Ch]
  float v12; // [sp+20h] [bp-38h]
  float v13; // [sp+24h] [bp-34h]
  float v14; // [sp+28h] [bp-30h]
  float v15; // [sp+2Ch] [bp-2Ch]
  float v16; // [sp+30h] [bp-28h]
  float v17; // [sp+34h] [bp-24h]
  float v18; // [sp+38h] [bp-20h]
  float v19; // [sp+3Ch] [bp-1Ch]

  if ( (FIELD_U8(a1, 6907) & 8) != 0 && ((FIELD_U8(a1, 6900) & 1) == 0 || sub_60786738(a1 + 688)) )
  {
    v4 = (int *)(a1 + 11360);
    if ( sub_60793DA0(FIELD_U32(a1, 11360), 3.0) == 1 )
    {
      FIELD_U32(a1, 1216) |= 0x20000u;
      v5 = FIELD_U32(a1, 648);
      LODWORD(v9.x) = &sead__SafeStringBase__vtable;
      LODWORD(v9.y) = "wrist_r1";
      (*(void (__fastcall **)(_DWORD, float *, Vec3 *))(**(_DWORD **)(v5 + 4) + 144))(FIELD_U32(v5, 4), v10, &v9);
      v11 = v11 + (float)((float)((float)(v10[1] * 0.0) + (float)(v10[0] * 3.0)) + (float)(v10[2] * 0.0));
      v9.x = v11;
      v15 = v15 + (float)((float)((float)(v13 * 0.0) + (float)(v12 * 3.0)) + (float)(v14 * 0.0));
      v9.y = v15;
      v19 = v19 + (float)((float)((float)(v17 * 0.0) + (float)(v16 * 3.0)) + (float)(v18 * 0.0));
      v9.z = v19;
      sub_60236E40(FIELD_S8(a1, 84), 756, &v9, 0, 0);
      sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_ATTACK_FENCE", 0, 0);
    }
    FIELD_U32(a1, 160) = FIELD_U32(a1, 12264);
    v6 = sub_60793184(*v4);
    result = FIELD_U8(a1, 1222);
    v8 = v6;
    if ( (result & 2) == 0 )
    {
      if ( v6 >= 12.0 && sub_60786768(a1 + 688) || sub_60793CA8(*v4) == 1 )
      {
        FIELD_U32(a1, 9940) = 1;
        return 9940;
      }
      result = sub_60786A80(a1 + 688);
      if ( result == 1 )
      {
        result = 9948;
        FIELD_U32(a1, 9948) = 1;
      }
      if ( v8 >= 23.0 )
      {
        result = FIELD_U32(a1, 9948);
        if ( result )
        {
          sub_60793114((_DWORD *)*v4, 0.0);
          result = 0;
          FIELD_U32(a1, 9948) = 0;
        }
      }
    }
    if ( v8 < 24.0 )
    {
      FIELD_U32(a1, 1216) |= 0x40000u;
      return (int)sub_6079F2B0(a1);
    }
  }
  else
  {
    FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
    if ( (FIELD_U8(a1, 6906) & 0x80) != 0 )
    {
      v2 = 3;
      v3 = &dword_60CC508C;
    }
    else
    {
      v2 = 0;
      v3 = &dword_60CC4BBC;
    }
    return Player_changeState(a1, (StateBase *)v3, v2);
  }
  return result;
}
