/* Actor_CSbone_kosuta_build
 * address: 0x6019BB74   size: 372   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSbone_kosuta_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x3260u);
  sub_60185C70((Actor *)v2, a1);
  *(_DWORD *)v2 = &off_60BD5DBC;
  FIELD_U32(v2, 264) = &off_60BD5E40;
  FIELD_U32(v2, 268) = &off_60BD5E50;
  FIELD_U32(v2, 272) = &off_60BD5E74;
  FIELD_U32(v2, 276) = v2;
  FIELD_U32(v2, 280) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 284), (StateExecuter *)(v2 + 268), &NullState);
  FIELD_U32(v2, 264) = &off_60BD5E30;
  FIELD_U32(v2, 12588) = 0;
  memset((void *)(v2 + 12624), 0, 244);
  FIELD_U32(v2, 12868) = 1086324736;
  FIELD_U32(v2, 12872) = 0;
  FIELD_U32(v2, 12876) = 0;
  FIELD_U32(v2, 12880) = -1;
  FIELD_U32(v2, 12884) = -1;
  FIELD_U16(v2, 12888) = 0;
  FIELD_U8(v2, 12890) = -1;
  FIELD_U8(v2, 12891) = 0;
  FIELD_U8(v2, 12892) = 0;
  FIELD_U8(v2, 12893) = 0;
  FIELD_U32(v2, 128) = 1075838976;
  FIELD_U32(v2, 132) = 1075838976;
  FIELD_U32(v2, 136) = 1075838976;
  FIELD_U32(v2, 12612) = 1074161254;
  FIELD_U32(v2, 12616) = 1075838976;
  FIELD_U32(v2, 12620) = 1075838976;
  memset((void *)(v2 + 300), 0, 12288);
  FIELD_U32(v2, 12604) = 0;
  FIELD_U32(v2, 12600) = 0;
  FIELD_U32(v2, 12596) = 0;
  FIELD_U32(v2, 12592) = 0;
  FIELD_U32(v2, 12608) = 4;
  return v2;
}
