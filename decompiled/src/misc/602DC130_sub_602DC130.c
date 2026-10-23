/* sub_602DC130
 * address: 0x602DC130   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DC130(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  int category; // r0
  bool v8; // zf
  int v9; // r1
  int v10; // r1
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  if ( (FIELD_U8(a1, 569) & 2) != 0 )
    return Enemy__collisionPlayer(a1, (int)a2, (int)a3);
  result = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
  if ( !result )
    return Enemy__collisionPlayer(a1, (int)a2, (int)a3);
  if ( result != 2 )
  {
    if ( a3 )
    {
      category = FIELD_U32(a3, 0x74).category;
      if ( category )
      {
        v8 = category == 13;
        if ( category != 13 )
          v8 = category == 7;
        if ( v8 )
          v10 = 1;
        else
          v10 = 2;
      }
      else
      {
        v10 = 0;
      }
      return SE_EMY_KALON_ref_2DC488(a1, v10, &FIELD_U32(a3, 0x54), FIELD_U32(a3, 0x40));
    }
    else
    {
      v9 = FIELD_U32(a1, 112);
      v11[0] = FIELD_U32(a1, 108);
      v11[1] = v9;
      return SE_EMY_KALON_ref_2DC488(a1, 2, v11, 0);
    }
  }
  return result;
}
