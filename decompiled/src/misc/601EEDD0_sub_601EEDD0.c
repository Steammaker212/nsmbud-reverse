/* sub_601EEDD0
 * address: 0x601EEDD0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EEDD0(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r4
  float v5; // t1
  float v6; // r0
  int v7; // r4
  float v8; // t1
  float v9; // r0
  int v10; // [sp+4h] [bp-2Ch] BYREF
  int v11; // [sp+8h] [bp-28h]
  int v12; // [sp+Ch] [bp-24h]
  Vec3 v13[2]; // [sp+10h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 376);
  if ( v2 )
  {
    result = v2 - 1;
    FIELD_U32(a1, 376) = result;
    if ( !result )
    {
      v5 = FIELD_F32(a1, 80);
      v4 = a1 + 80;
      v13[0].x = v5;
      v6 = FIELD_F32(v4, 4);
      v13[0].z = FIELD_F32(v4, 8);
      v10 = 1065353216;
      v11 = 1065353216;
      v12 = 1065353216;
      v13[0].y = v6 + 40.0;
      EffectData_create(902, v13, 0, (int)&v10);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 125, (_DWORD *)v4);
      return sub_601E4C88((_DWORD *)dword_60C8B13C, 144, (_DWORD *)v4);
    }
  }
  else
  {
    sub_601687DC(a1, 131235111, 0);
    result = sub_601860F8(a1);
    if ( result == 1 )
    {
      v8 = FIELD_F32(a1, 80);
      v7 = a1 + 80;
      v13[0].x = v8;
      v9 = FIELD_F32(v7, 4);
      v13[0].z = FIELD_F32(v7, 8);
      v13[0].y = v9;
      v10 = 1065353216;
      v11 = 1065353216;
      v12 = 1065353216;
      EffectData_create(903, v13, 0, (int)&v10);
      result = sub_601E4C88((_DWORD *)dword_60C8B13C, 145, (_DWORD *)v7);
      *(_BYTE *)(v7 - 61) = 1;
    }
  }
  return result;
}
