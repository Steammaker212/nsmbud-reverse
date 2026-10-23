/* sub_6004D7B4
 * address: 0x6004D7B4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004D7B4(StateActor *a1)
{
  int result; // r0

  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1]._.collisionMgr[456]);
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 1276))(a1);
  sub_6004E178(a1);
  CollisionActor__handleGravity(&FIELD_U32(a1, 0x0));
  CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0));
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
  {
    FIELD_F32(a1, 0x7C) = 0.0;
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 1136))(a1);
  }
  result = *(_DWORD *)&a1[1]._.collisionMgr[1220];
  if ( result == 1 )
    return (*(int (__fastcall **)(StateActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C804F0);
  if ( !result )
  {
    FIELD_U32(a1, 0x50) = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
    result = sub_60052630(a1);
    if ( result == 1 )
    {
      result = 1;
      *(_DWORD *)&a1[1]._.collisionMgr[1220] = 1;
    }
  }
  return result;
}
