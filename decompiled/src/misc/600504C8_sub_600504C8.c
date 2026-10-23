/* sub_600504C8
 * address: 0x600504C8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600504C8(CollisionActor *a1)
{
  int result; // r0

  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 1116))(a1);
  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U8(a1, 0x288), &stru_60AF529C, 3);
    (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0)._.vtable + 1124))(a1, 6.0);
    (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 1156))(a1);
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C8071C);
  }
  return result;
}
