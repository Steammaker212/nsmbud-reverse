/* StageActor__beforeExecute
 * address: 0x600006C4   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F0C
// 
// Overridden by:
//   - 0x60003310 : CollisionActor
signed int __fastcall StageActor__beforeExecute(StageActor *this)
{
  int v2; // r1
  signed int result; // r0
  int v4; // r1

  FIELD_U32(this, 0x248) = FIELD_U32(this, 0x260);
  v2 = Actor__beforeExecute(&FIELD_U32(this, 0x0));
  result = 0;
  if ( v2 == 1 && FIELD_U8(this, 0x216) )
  {
    FIELD_U32(this, 0x6C).x = *(float *)&FIELD_U32(this, 0xB4) + FIELD_U32(this, 0x6C).x;
    FIELD_U32(this, 0x6C).y = *(float *)&FIELD_U32(this, 0xB8) + FIELD_U32(this, 0x6C).y;
    v4 = FIELD_U32(this, 0x220);
    if ( v4 == 8 )
    {
      sub_6040A81C(dword_60C9A1F0);
      (*(void (__fastcall **)(StageActor *))(FIELD_U32(this, 0x0).vtable + 128))(this);
      v4 = FIELD_U32(this, 0x220);
    }
    result = 1;
    if ( v4 )
      FIELD_U32(this, 0x220) = v4 - 1;
  }
  return result;
}
