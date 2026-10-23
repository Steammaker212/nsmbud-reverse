/* sub_6046CE38
 * address: 0x6046CE38   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046CE38(int a1)
{
  float v2; // s0
  float v3; // s2
  int result; // r0
  int v5; // [sp+4h] [bp-Ch] BYREF

  if ( !FIELD_U8(a1, 6856) )
  {
    v2 = FIELD_F32(a1, 124);
    v3 = FIELD_F32(a1, 136);
    if ( v2 >= v3 )
    {
      if ( v2 > v3 )
      {
        v2 = v2 - FIELD_F32(a1, 100);
        if ( v2 < v3 )
          v2 = FIELD_F32(a1, 136);
      }
    }
    else
    {
      v2 = v2 + FIELD_F32(a1, 100);
      if ( v2 > v3 )
        v2 = FIELD_F32(a1, 136);
    }
    FIELD_F32(a1, 124) = v2;
    CollisionActor__handleSpeed((CollisionActor *)a1);
  }
  sub_6046313C(a1);
  sub_60463584(a1);
  result = FIELD_U8(a1, 6197);
  if ( !FIELD_U8(a1, 6197) )
  {
    if ( sub_60463998((Actor *)a1, &v5, 4, 1) == 1 )
      SE_PLY_GET_ITEM_AGAIN_ref(a1, v5, FIELD_U32(a1, 6208));
    return sub_6046C3AC(a1);
  }
  return result;
}
