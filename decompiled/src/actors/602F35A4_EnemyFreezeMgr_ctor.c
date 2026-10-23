/* EnemyFreezeMgr_ctor
 * address: 0x602F35A4   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

EnemyFreezeMgr *__fastcall EnemyFreezeMgr_ctor(EnemyFreezeMgr *this, Enemy *owner)
{
  char v4; // r12
  char v5; // r1^1

  FIELD_U8(this, 0x0) = 0;
  memset(FIELD_U32(this, 0x4), 0, 50);
  FIELD_U8(this, 0x36) = 4;
  FIELD_U32(this, 0x38) = 0;
  FIELD_U32(this, 0x3C) = owner;
  FIELD_U32(this, 0x40) = -1;
  FIELD_U32(this, 0x44) = 0;
  FIELD_U32(this, 0x42) = 0;
  FIELD_U8(this, 0x48) = 0;
  FIELD_U32(this, 0x46) = 0;
  FIELD_U8(this, 0x49) = 3;
  FIELD_U8(this, 0x4A) = 0;
  FIELD_U8(this, 0x4B) = -1;
  FIELD_U8(this, 0x4C) = 0;
  if ( ((unsigned int)&algn_60C927DB[1] & ~(1613706780 << v4) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C927DB[1]) )
  {
    word_60C927D8 = 0;
    byte_60C927DA = 4;
    _cxa_guard_release((__guard *)&algn_60C927DB[1]);
  }
  v5 = HIBYTE(word_60C927D8);
  FIELD_U8(this, 0x34) = word_60C927D8;
  FIELD_U8(this, 0x36) = byte_60C927DA;
  FIELD_U8(this, 0x35) = v5;
  FIELD_U32(this, 0x38) = (int)&dword_60AFEDE4[(unsigned __int8)word_60C927D8];
  return this;
}
