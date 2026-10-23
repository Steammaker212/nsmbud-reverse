/* sub_60063774
 * address: 0x60063774   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60063774(CollisionActor *a1)
{
  int result; // r0

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  CollisionActor__sub_600034C8(a1);
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 && FIELD_F32(a1, 0x7C) <= 0.0 )
    return (*(int (__fastcall **)(CollisionActor *, State *))(FIELD_U32(a1, 0x0) + 192))(a1, &BobOmb_StateID_Walk);
  return result;
}
