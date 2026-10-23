/* LineFollower_init
 * address: 0x6000F198   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall LineFollower_init(
        LineFollower *this,
        Vec2 *position,
        int layer,
        int noReverseOnStop,
        int reversed)
{
  char v5; // r12
  float farg_lineSpeed; // s0
  float v8; // s16
  char layer_1; // r8

  v8 = farg_lineSpeed;
  layer_1 = layer;
  FIELD_U8(this, 0x8C) = noReverseOnStop;
  FIELD_U32(this, 0x24)[0].x = 0.0;
  FIELD_U32(this, 0x24)[0].y = 0.0;
  FIELD_U32(this, 0x24)[1].x = 0.0;
  FIELD_U32(this, 0x24)[1].y = 0.0;
  FIELD_U32(this, 0x24)[2].x = 0.0;
  FIELD_U32(this, 0x24)[2].y = 0.0;
  if ( ((unsigned int)&dword_60C7B790 & ~(1610674656 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B790) )
  {
    *(_QWORD *)&qword_60C7B794 = 0x3DCCCCCDBDCCCCCDLL;
    *(_QWORD *)&qword_60C7B79C = 0x3DCCCCCD3DCCCCCDLL;
    *(_QWORD *)&qword_60C7B7A4 = 0xBDCCCCCDBDCCCCCDLL;
    *(_QWORD *)&qword_60C7B7AC = 0xBDCCCCCD3DCCCCCDLL;
    _cxa_guard_release(&dword_60C7B790);
  }
  FIELD_U32(this, 0x24)[3] = *(Vec2 *)&qword_60C7B794;
  FIELD_U32(this, 0x24)[4] = *(Vec2 *)&qword_60C7B79C;
  FIELD_U32(this, 0x24)[5] = *(Vec2 *)&qword_60C7B7A4;
  FIELD_U32(this, 0x24)[6] = *(Vec2 *)&qword_60C7B7AC;
  FIELD_F32(this, 0x5C) = 0.0;
  FIELD_F32(this, 0x60) = 0.0;
  FIELD_U32(this, 0x64) = *position;
  FIELD_U32(this, 0x6C) = *position;
  FIELD_F32(this, 0x74) = (float)(int)(float)(FIELD_F32(position, 0x0) * 0.0625) * 16.0;
  FIELD_F32(this, 0x78) = (float)(int)(float)(FIELD_F32(position, 0x4) * 0.0625) * 16.0;
  FIELD_F32(this, 0x88) = v8;
  FIELD_U32(this, 0x84) = 0;
  FIELD_U8(this, 0x8D) = layer_1;
  FIELD_U8(this, 0x8E) = 0;
  FIELD_U8(this, 0x8F) = 0;
  if ( reversed == 1 )
  {
    FIELD_F32(this, 0x88) = -v8;
    FIELD_U8(this, 0x8E) = 1;
  }
  return StateMgr__changeState(&FIELD_U32(this, 0x14), &LineFollower_StateID_Idle._);
}
