/* sub_605F3DC8
 * address: 0x605F3DC8   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605F3DC8(CollisionActor *a1)
{
  float v2; // s0
  signed int result; // r0
  bool v4; // zf
  signed int v5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity(a1);
  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  v2 = CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  sub_605F53A8(a1);
  if ( LOBYTE(a1[1]._.field_64) != 255 )
  {
    SE_OBJ_GET_DRAGON_COIN_ref((int)a1);
    (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 196))(a1);
  }
  if ( LOBYTE(a1[1]._.position.y) )
  {
    FIELD_U32(a1, 0xA0) += 0x3FD27D2;
  }
  else
  {
    FIELD_U32(a1, 0xA0) = FIELD_U32(dword_60CBD894, 32);
    if ( FIELD_U32(a1, 0xA4) )
    {
      v5 = 0x400;
      v6 = 0;
      if ( sub_6083246C(&FIELD_U32(a1, 0xA4), &v6, &v5) == 1 )
        FIELD_U32(a1, 0xA4) = 0;
    }
  }
  result = FIELD_U8(dword_60CC6D8C, 17);
  v4 = result == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = BYTE1(FIELD_U32(a1, 0x18));
    v4 = (result & 0x10) == 0;
  }
  if ( !v4 )
  {
    result = (float)(FIELD_F32(a1, 0x70) - FIELD_F32(a1, 0x24C)) > 0.0;
    LOBYTE(a1[1]._.speed.x) = result;
  }
  return result;
}
