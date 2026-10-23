/* sub_605E4A14
 * address: 0x605E4A14   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605E4A14(int a1)
{
  _BOOL4 v2; // r9
  signed int result; // r0
  int *v4; // r7
  float v5; // s16
  float v6; // s16
  int v7; // r5
  EffectWrapper *v8; // r6
  int v9; // r4
  Vec3 v10[5]; // [sp+4h] [bp-3Ch] BYREF

  v2 = 0;
  if ( sub_605DD6E8(a1) )
    v2 = (FIELD_U8(a1, 6268) & 2) == 0;
  v4 = (int *)(a1 + 7764);
  result = FIELD_U32(a1, 7764);
  if ( result == 2 )
  {
    v5 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 480))(a1);
    if ( v5 >= 0.0 )
    {
      if ( v5 > 1.0 )
        v5 = 1.0;
    }
    else
    {
      v5 = 0.0;
    }
    v10[0].x = (float)(v5 + v5) + 1.0;
    v10[0].y = v10[0].x;
    v10[0].z = v10[0].x;
    sub_60236290(a1 + 7912, (int)v10);
    v10[0].x = (float)(v5 * 0.5) + 1.0;
    v10[0].y = v10[0].x;
    sub_602362F4(a1 + 7912, (unsigned __int64 *)v10);
    (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 476))(a1, v10);
    result = sub_60237208(a1 + 7896, v10, 0, 0);
    if ( !result )
    {
      result = sub_60237560(a1 + 7896);
      *v4 = 0;
    }
LABEL_15:
    if ( v2 )
    {
      result = 1;
      *v4 = 1;
    }
    return result;
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
    goto LABEL_15;
  }
  v6 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 480))(a1);
  if ( v6 >= 0.0 )
  {
    if ( v6 > 1.0 )
      v6 = 1.0;
  }
  else
  {
    v6 = 0.0;
  }
  v7 = a1 + 7912;
  v10[0].x = (float)(v6 + v6) + 1.0;
  v10[0].y = v10[0].x;
  v10[0].z = v10[0].x;
  sub_60236290(a1 + 7912, (int)v10);
  v10[0].x = (float)(v6 * 0.5) + 1.0;
  v10[0].y = v10[0].x;
  sub_602362F4(a1 + 7912, (unsigned __int64 *)v10);
  v8 = (EffectWrapper *)(a1 + 7896);
  (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 476))(a1, v10);
  v9 = 0;
  result = EffectWrapper_update(v8, 1120, v10, 0, 0);
  if ( result == 1 )
  {
    if ( v2 )
      return result;
    result = sub_60236074(v7);
    v9 = 2;
  }
  *v4 = v9;
  return result;
}
