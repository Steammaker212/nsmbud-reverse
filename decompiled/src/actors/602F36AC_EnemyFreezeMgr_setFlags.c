/* EnemyFreezeMgr_setFlags
 * address: 0x602F36AC   size: 48   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

EnemyFreezeMgr *__fastcall EnemyFreezeMgr_setFlags(EnemyFreezeMgr *this, EnemyFreezeMgr_Flags *flags)
{
  char flags_0; // r12
  char flags_2; // r2

  flags_0 = FIELD_U8(flags, 0x0);
  flags_2 = FIELD_U8(flags, 0x2);
  FIELD_U8(this, 0x35) = FIELD_U8(flags, 0x1);
  FIELD_U8(this, 0x34) = flags_0;
  FIELD_U8(this, 0x36) = flags_2;
  FIELD_U32(this, 0x38) = (int)&dword_60AFEDE4[(unsigned __int8)FIELD_U8(flags, 0x0)];
  return this;
}
