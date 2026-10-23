/* sub_60338500
 * address: 0x60338500   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60338500(int a1)
{
  int result; // r0
  float v3; // s2
  float v4; // s0
  float v5; // s2
  float v6; // s0
  float v7; // s2
  float *v8; // r5
  float v9; // s0
  float v10; // s4
  int *v11; // r1

  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = FIELD_U32(a1, 6856);
  if ( result == 1 )
  {
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_F32(a1, 6848);
    if ( fabsf(v5 - v6) <= 4.0 )
    {
      result = sub_6015907C((ActiveCollider *)(a1 + 188), 64);
      v6 = FIELD_F32(a1, 6848);
      v5 = FIELD_F32(a1, 112);
    }
    if ( v5 > v6 )
      return result;
    FIELD_F32(a1, 112) = v6;
LABEL_20:
    sub_6015907C((ActiveCollider *)(a1 + 188), 8);
    sub_6015907C((ActiveCollider *)(a1 + 188), 512);
    FIELD_F32(a1, 116) = (float)((float)(FIELD_U8(a1, 23) & 0xF) * 16.0) + -2500.0;
    if ( FIELD_U32(a1, 6856) == 1 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9431C);
    FIELD_U32(a1, 6148) &= ~0x10000u;
    if ( FIELD_U8(a1, 6705) )
      v11 = &dword_60C94278;
    else
      v11 = &dword_60C94470;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v11);
  }
  if ( result )
  {
    v7 = FIELD_F32(a1, 108);
    v8 = (float *)(a1 + 6844);
    v9 = FIELD_F32(a1, 6844);
    v10 = fabsf(v7 - v9);
    if ( result == 2 )
    {
      if ( v10 <= 4.0 )
      {
        result = sub_6015907C((ActiveCollider *)(a1 + 188), 64);
        v9 = *v8;
        v7 = FIELD_F32(a1, 108);
      }
      if ( v7 > v9 )
        return result;
    }
    else
    {
      if ( v10 <= 4.0 )
      {
        result = sub_6015907C((ActiveCollider *)(a1 + 188), 64);
        v9 = *v8;
        v7 = FIELD_F32(a1, 108);
      }
      if ( v7 < v9 )
        return result;
    }
    FIELD_F32(a1, 108) = v9;
    goto LABEL_20;
  }
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 6848);
  if ( fabsf(v3 - v4) <= 4.0 )
  {
    result = sub_6015907C((ActiveCollider *)(a1 + 188), 64);
    v4 = FIELD_F32(a1, 6848);
    v3 = FIELD_F32(a1, 112);
  }
  if ( v3 >= v4 )
  {
    FIELD_F32(a1, 112) = v4;
    goto LABEL_20;
  }
  return result;
}
