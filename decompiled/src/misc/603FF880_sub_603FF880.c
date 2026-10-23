/* sub_603FF880
 * address: 0x603FF880   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF880(int a1, _DWORD *a2)
{
  int result; // r0
  bool v5; // zf
  _DWORD *v6; // r6
  int v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r0
  _DWORD *v11; // r6
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  _DWORD v17[3]; // [sp+4h] [bp-3Ch] BYREF
  int v18; // [sp+10h] [bp-30h] BYREF
  int v19; // [sp+14h] [bp-2Ch]
  int v20; // [sp+18h] [bp-28h]
  _BYTE v21[8]; // [sp+1Ch] [bp-24h] BYREF
  float v22; // [sp+24h] [bp-1Ch]

  result = a2[1];
  v5 = result == 0;
  if ( result )
  {
    result = a2[3];
    v5 = result == 0;
  }
  if ( !v5 )
  {
    v6 = (_DWORD *)sub_60834644();
    result = a2[2];
    v7 = 0;
    if ( v6[8] == result
      || (v7 = 1, v6[26] == result)
      || (v7 = 2, v6[44] == result)
      || (v7 = 3, v6[62] == result)
      || (v7 = 4, v6[80] == result)
      || (v7 = 5, v6[98] == result) )
    {
      sub_6090A260(a2[1], v21);
      v8 = a2[3];
      v9 = FIELD_U32(v8, 92);
      v10 = FIELD_U32(v8, 108);
      v17[0] = v9;
      v17[1] = v10;
      *(float *)&v17[2] = -v22;
      sub_6090A384(a2[1], &v18, v17);
      FIELD_U32(a1, 2540) = *a2;
      FIELD_U8(a1, 2689) = 1;
      v11 = &v6[18 * v7];
      sub_604056C4(a1, v11[7]);
      if ( v11[7] == 8 )
        sub_604058BC(a1);
      v12 = **(_DWORD **)(FIELD_U32(a1, 16) + 4);
      if ( *((_BYTE *)v11 + 50) )
      {
        (*(void (**)(void))(v12 + 156))();
        sub_604056E8(a1, 10);
      }
      else
      {
        (*(void (**)(void))(v12 + 160))();
        sub_60405888(a1);
      }
      v13 = v18;
      FIELD_U32(a1, 416) = v18;
      v14 = v19;
      FIELD_U32(a1, 420) = v19;
      v15 = v20;
      FIELD_U32(a1, 424) = v20;
      v16 = *a2;
      FIELD_U32(a1, 2540) = *a2;
      FIELD_U32(a1, 180) = v16;
      FIELD_U32(a1, 380) = v13;
      FIELD_U32(a1, 384) = v14;
      FIELD_U32(a1, 388) = v15;
      if ( !FIELD_U8(a1, 2690) && !FIELD_U8(a1, 2691) )
      {
        FIELD_U8(a1, 2699) = 1;
        FIELD_U8(a1, 2691) = 1;
        FIELD_U32(a1, 500) = 0;
        FIELD_U32(a1, 2532) = 0;
        FIELD_U32(a1, 2560) = 1065353216;
        FIELD_U8(a1, 2693) = 1;
      }
      FIELD_U32(a1, 488) = 0;
      FIELD_U32(a1, 492) = 0;
      FIELD_U32(a1, 496) = 0;
      FIELD_U32(a1, 2588) = 1086324736;
      FIELD_U32(a1, 2592) = 1090519040;
      FIELD_U32(a1, 2596) = 1098907648;
      FIELD_U32(a1, 2600) = 1120403456;
      FIELD_U32(a1, 2604) = 1120403456;
      FIELD_U32(a1, 2608) = 1120403456;
      FIELD_U32(a1, 2612) = 1120403456;
      FIELD_U32(a1, 2616) = 1120403456;
      FIELD_U32(a1, 2620) = 1120403456;
      FIELD_U32(a1, 2624) = 1065353216;
      FIELD_U32(a1, 396) = -1034158080;
      FIELD_U32(a1, 2632) = 1077936128;
      FIELD_U32(a1, 2636) = 1077936128;
      FIELD_U32(a1, 2584) = -1077936128;
      FIELD_U32(a1, 2576) = -1041235968;
      FIELD_U32(a1, 2640) = 1103626240;
      FIELD_U32(a1, 2644) = -1077936128;
      FIELD_U32(a1, 2652) = -1041235968;
      FIELD_U32(a1, 2656) = 1103626240;
      FIELD_U32(a1, 2660) = 1064514355;
      FIELD_U32(a1, 2668) = 353670632;
      FIELD_U32(a1, 2672) = 739442823;
      FIELD_U32(a1, 2676) = 147287092;
      FIELD_U32(a1, 2680) = 505876302;
      FIELD_U32(a1, 2684) = 0;
      return 0;
    }
  }
  return result;
}
