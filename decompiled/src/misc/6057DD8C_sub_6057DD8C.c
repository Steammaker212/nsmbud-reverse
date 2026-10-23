/* sub_6057DD8C
 * address: 0x6057DD8C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057DD8C(CollisionActor *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r1

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  FIELD_U32(a1, 0x0).rotation.y += 0x10000000;
  result = (int)&a1[1]._._.field_2C;
  v3 = a1[1]._._.field_2C;
  if ( v3 )
  {
    *(_DWORD *)result = v3 - 1;
  }
  else
  {
    if ( a1[1]._._.parent == (Actor *)3 )
      FIELD_U32(a1, 0x0).position.y = FIELD_U32(a1, 0x0).position.y + 12.0;
    v4 = a1[1]._._.field_30;
    if ( v4 != 15 )
    {
      sub_60584408(dword_60CAF15C, (char)v4, 0);
      sub_60022760(0.0, 0.0, dword_60C7F52C, (int)a1, 0, a1[1]._._.field_30);
    }
    FIELD_U32(a1, 0x0)._.isDeleted = 1;
    return 1;
  }
  return result;
}
