/* sub_605CFF00
 * address: 0x605CFF00   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CFF00(int a1)
{
  int result; // r0
  int v3; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 160) += 0x10000000;
  result = a1 + 7332;
  if ( FIELD_U16(a1, 7332) )
  {
    *(_WORD *)result = FIELD_U16(a1, 7332) - 1;
  }
  else
  {
    sub_60584408(dword_60CAF15C, FIELD_S8(a1, 7328), 1);
    if ( FIELD_U8(a1, 7339) )
      ++FIELD_U32(dword_60CAF15C, 33812);
    if ( FIELD_U32(a1, 7288) == 1 )
    {
      sub_605BA078(dword_60CB061C, a1 + 6980, 2, FIELD_U8(LevelInfo_instance, 18));
    }
    else
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 336))(a1);
      v3 = FIELD_U32(a1, 7308);
      if ( v3 )
        sub_6058568C(dword_60CAF15C, v3, FIELD_U32(a1, 7316));
    }
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
