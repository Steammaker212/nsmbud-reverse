/* sub_60462A58
 * address: 0x60462A58   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60462A58(int a1)
{
  float v1; // r2
  float v2; // r3
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v5; // r1
  int v6; // r3
  int v7; // r0
  Vec3 v9; // [sp+0h] [bp-18h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 116);
  v9.x = FIELD_F32(a1, 108);
  v9.y = v1;
  v9.z = v2 + 80.0;
  v3 = FIELD_U32(a1, 5956);
  v4 = v3 >> 8;
  v5 = BYTE1(v3);
  if ( FIELD_U32(a1, 6168) == 13 )
  {
    if ( v5 == 2 )
    {
      v6 = a1 + 144;
      v7 = 1187;
    }
    else if ( (unsigned int)(unsigned __int8)v4 - 3 >= 2 )
    {
      v6 = a1 + 144;
      if ( (unsigned __int8)v4 == 1 )
      {
        v7 = 1188;
      }
      else if ( v5 == 11 )
      {
        v7 = 1189;
      }
      else
      {
        v7 = 1185;
      }
    }
    else
    {
      v6 = a1 + 144;
      v7 = 1186;
    }
  }
  else if ( v5 == 2 )
  {
    v6 = a1 + 144;
    v7 = 938;
  }
  else if ( (unsigned int)(unsigned __int8)v4 - 3 >= 2 )
  {
    v6 = a1 + 144;
    if ( (unsigned __int8)v4 == 1 )
    {
      v7 = 939;
    }
    else if ( v5 == 11 )
    {
      v7 = 940;
    }
    else
    {
      v7 = 936;
    }
  }
  else
  {
    v6 = a1 + 144;
    v7 = 937;
  }
  return EffectData_create(v7, &v9, 0, v6);
}
