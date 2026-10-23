/* Player_ReleaseCarryableEnemy
 * address: 0x6079E960   size: 212   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall Player_ReleaseCarryableEnemy(_DWORD *a1, int a2)
{
  int *result; // r0
  int *v4; // r5
  _BOOL4 v5; // r0
  bool v6; // zf
  _BOOL4 v7; // r1
  int v8; // r0
  int v9; // r1
  float v10; // s0

  if ( a2 )
  {
    result = a1 + 2852;
    if ( FIELD_U32(a2, 8) != a1[2852] )
      return result;
  }
  else
  {
    result = a1 + 2852;
  }
  *result = 0;
  v4 = a1 + 2840;
  result = (int *)sub_60793198(a1[2840]);
  if ( result == (int *)1 )
  {
    Player_ReleaseCarryableEnemy_helper(*v4);
    Player_ReleaseCarryableEnemy_helper_794678(*v4);
    v5 = sub_6075EE0C((int)a1);
    v6 = v5;
    if ( v5 )
      v6 = a1[330] == 9;
    if ( v6 )
    {
      v10 = 5.0;
      v9 = *(_DWORD *)*v4;
    }
    else
    {
      v7 = sub_6075EDF8((int)a1);
      v8 = *v4;
      if ( v7 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 0x60))(v8);
        v8 = *v4;
      }
      v9 = *(_DWORD *)v8;
      v10 = 0.0;
    }
    (*(void (__fastcall **)(float))(v9 + 0x5C))(v10);
    result = (int *)*v4;
    *(_DWORD *)(*v4 + 40) = 0;
  }
  return result;
}
