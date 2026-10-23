/* sub_604641B8
 * address: 0x604641B8   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604641B8(int *a1)
{
  int v2; // r0
  int *v3; // r6
  int v4; // r0
  Actor *v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // s0
  int *v9; // r1
  unsigned int v10; // r0
  float v11; // s18
  float *v12; // r1
  float v13; // s0
  float v14; // s20
  float v15; // s16
  float v16; // s22
  float v17; // s26
  float v18; // s24
  int v19; // r1
  int v20; // r1
  float v21; // s0
  int v22; // r5
  int v23; // r0
  int result; // r0
  int v25; // s0
  int *v26; // r1

  v3 = a1 + 1555;
  v2 = a1[1555];
  if ( v2 )
  {
    v4 = v2 - 1;
    *v3 = v4;
    if ( v4 == 1 )
    {
      (*(void (__fastcall **)(int *))(*a1 + 244))(a1);
      if ( a1[1699] )
      {
        v5 = (Actor *)a1[14];
        if ( v5 )
          Actor__removeChild(v5, (Actor *)a1);
        a1[1699] = 0;
      }
    }
  }
  v6 = a1[1561];
  if ( v6 )
  {
    v7 = v6 - 1;
    a1[1561] = v7;
    if ( v7 == 1 )
    {
      if ( *((_BYTE *)a1 + 86) == 1 )
      {
        v8 = -987594752;
      }
      else
      {
        v9 = dword_60464524;
        if ( a1[1542] == 5 )
          v9 = &dword_60464524[1];
        v8 = *v9;
      }
      a1[29] = v8;
    }
  }
  if ( *((_BYTE *)a1 + 6804) )
  {
    if ( *((float *)a1 + 31) <= 0.0 )
    {
      *((_BYTE *)a1 + 6804) = 0;
LABEL_19:
      a1[800] &= ~0x40000000u;
    }
  }
  else if ( *v3 == 1 )
  {
    goto LABEL_19;
  }
  (*(void (__fastcall **)(int *))(*a1 + 224))(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v10 = sub_6014C4A4((int)(a1 + 162));
  v11 = *((float *)a1 + 30);
  v12 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v13 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
  v14 = v12[2] + (float)(v13 * v12[3]);
  v15 = *v12 + (float)(v12[1] * v13);
  if ( *((_BYTE *)a1 + 6054) || *((_BYTE *)a1 + 6053) )
    v11 = v11 * 0.5;
  v16 = *((float *)a1 + 31);
  v17 = *((float *)a1 + 1506);
  v18 = *((float *)a1 + 1507);
  sub_600037A0((int)a1);
  *((float *)a1 + 27) = *((float *)a1 + 27) + (float)((float)(v17 + (float)(v14 * v11)) + *((float *)a1 + 1500));
  *((float *)a1 + 28) = (float)((float)(v16 + (float)(v15 * v11)) + v18) + *((float *)a1 + 28);
  if ( a1[1556] != 2 )
  {
    v19 = a1[1557];
    if ( !v19 || (v20 = v19 - 1, (a1[1557] = v20) == 0) )
      EffectWrapper_update((EffectWrapper *)(a1 + 1671), 90, (Vec3 *)(a1 + 1531), 0, (Vec3 *)a1 + 12);
  }
  SE_OBJ_CMN_SPLASH_ref_462370((int)a1);
  CollisionMgr_process((_BYTE *)a1 + 648, v21);
  if ( *((_BYTE *)a1 + 6255) && *((float *)a1 + 31) < 0.0 )
    a1[31] = 1082130432;
  v22 = 0;
  if ( *v3 <= 1 )
  {
    v22 = 0;
    v23 = a1[718] & 0x10400;
    if ( (a1[718] & 1) != 0 )
    {
      v22 = 1;
      a1[31] = 0;
    }
    if ( *((_BYTE *)a1 + 6200) )
      v22 = 1;
    if ( v23 == 1024 )
    {
      v22 |= 2u;
      a1[31] = 0;
    }
  }
  result = sub_6000346C((int)a1);
  if ( result == 1 )
  {
    *((float *)a1 + 30) = -*((float *)a1 + 30);
  }
  else if ( v22 == 1 )
  {
    (*(void (__fastcall **)(int *))(*a1 + 208))(a1);
    if ( *((_BYTE *)a1 + 86) == 1 )
    {
      v25 = -987594752;
    }
    else
    {
      v26 = dword_60464524;
      if ( a1[1542] == 5 )
        v26 = &dword_60464524[1];
      v25 = *v26;
    }
    a1[29] = v25;
    (*(void (__fastcall **)(int *))(*a1 + 196))(a1);
    result = *((unsigned __int8 *)a1 + 2872);
    if ( (result & 8) != 0 )
    {
      a1[31] = 1082130432;
      return 1082130432;
    }
  }
  return result;
}
