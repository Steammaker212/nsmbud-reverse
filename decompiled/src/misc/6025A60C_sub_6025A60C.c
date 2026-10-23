/* sub_6025A60C
 * address: 0x6025A60C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6025A60C(CollisionActor *a1)
{
  float v2; // s0
  int *result; // r0
  int v4; // r1
  int v5; // r1

  v2 = CollisionActor__handleSpeed(a1);
  result = &a1[1]._.aCollider.field_C8;
  v4 = a1[1]._.aCollider.field_C8;
  if ( !v4 )
    return (int *)(*(int (__fastcall **)(CollisionActor *, State *, float))(FIELD_U32(a1, 0x0)._.vtable + 192))(
                    a1,
                    &BobOmb_StateID_Walk,
                    v2);
  v5 = v4 - 1;
  *result = v5;
  if ( !v5 )
    return (int *)(*(int (__fastcall **)(CollisionActor *, State *, float))(FIELD_U32(a1, 0x0)._.vtable + 192))(
                    a1,
                    &BobOmb_StateID_Walk,
                    v2);
  return result;
}
