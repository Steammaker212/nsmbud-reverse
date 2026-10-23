/* sub_607C4CAC
 * address: 0x607C4CAC   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4CAC(int a1)
{
  int result; // r0
  float v3; // s0
  int v4; // r6
  float *v5; // r5
  unsigned int v6; // r0
  int *v7; // r7
  float v8; // r0
  _BOOL4 v9; // r6
  _BOOL4 v10; // r1
  float v11; // s0
  int v12; // r5
  float **v13; // r7
  float *v14; // r0
  float v15; // s0
  _BOOL4 v16; // r1
  int v17; // [sp+0h] [bp-28h] BYREF
  int v18; // [sp+4h] [bp-24h] BYREF
  _BYTE v19[32]; // [sp+8h] [bp-20h] BYREF

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 972))(a1);
  if ( result )
    return result;
  v3 = FIELD_F32(a1, 88);
  v4 = 1;
  if ( v3 >= 0.0 )
  {
    v4 = 0;
    if ( v3 <= 0.0 )
      v4 = FIELD_U32(a1, 80);
  }
  v5 = (float *)&v17;
  sub_60772748(a1, &v17);
  v7 = (int *)(a1 + 9940);
  v6 = FIELD_U32(a1, 9940);
  if ( v6 >= 2 )
  {
    if ( v6 == 2 )
      FIELD_U32(a1, 104) = *(_DWORD *)&v19[4];
  }
  else
  {
    if ( (FIELD_U8(a1, 6906) & 1) != 0 )
    {
      if ( sub_607634E8(a1, v4) == 1 )
        v5 = (float *)&v18;
      else
        v5 = (float *)v19;
    }
    v8 = *v5;
    FIELD_F32(a1, 104) = *v5;
    if ( (FIELD_U8(a1, 1222) & 0x20) != 0 )
      FIELD_F32(a1, 104) = v8 * 3.0;
  }
  v9 = sub_607868D4(a1 + 688, 0) == 1 && FIELD_U32(a1, 1248) == FIELD_U32(a1, 80);
  result = *v7;
  if ( *v7 == 2 )
  {
    if ( sub_607868D4(a1 + 688, &v17) == 1 )
    {
      v12 = sub_607868A0(a1 + 688);
      v13 = (float **)(a1 + 1276);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) )
        v13 = (float **)(a1 + 1280);
      v14 = *v13;
      if ( v12 )
        v14 += 2;
      v15 = *v14 * flt_60B0A898[v17];
    }
    else
    {
      v15 = 0.0;
    }
    FIELD_F32(a1, 92) = v15;
    if ( !v9 )
      return sub_607745DC(a1);
    result = sub_60793CA8(FIELD_U32(a1, 11360));
    if ( result == 1 )
      return sub_607745DC(a1);
  }
  else if ( result == 1 )
  {
    FIELD_U32(a1, 92) = 0;
    SE_PLY_BRAKE_ref(a1);
    v16 = sub_60771D48(a1, 0) != 1;
    (*(void (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 1280))(a1, v16);
    if ( !v9 )
      return sub_607745DC(a1);
    result = FIELD_U32(a1, 9944);
    if ( !result )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1396))(a1);
  }
  else if ( !result )
  {
    FIELD_U32(a1, 92) = 0;
    SE_PLY_BRAKE_ref(a1);
    v10 = sub_60771D48(a1, 0) != 1;
    result = (*(int (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 1280))(a1, v10);
    v11 = FIELD_F32(a1, 88);
    if ( v11 == 0.0 )
    {
      FIELD_U32(a1, 9944) = 8;
      result = 1;
      *v7 = 1;
    }
    if ( !v9 )
    {
      if ( v11 != 0.0 )
        FIELD_U32(a1, 80) = v11 < 0.0;
      return sub_607745DC(a1);
    }
  }
  return result;
}
