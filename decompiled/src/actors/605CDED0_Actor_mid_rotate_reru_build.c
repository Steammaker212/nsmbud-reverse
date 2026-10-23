/* Actor_mid_rotate_reru_build
 * address: 0x605CDED0   size: 236   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mid_rotate_reru_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1868u);
  sub_606C103C((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0AAB8;
  FIELD_U32(v2, 6120) = &off_60C0AA58;
  FIELD_U32(v2, 6124) = &off_60C0AA68;
  FIELD_U32(v2, 6128) = &off_60C0AA8C;
  FIELD_U32(v2, 6132) = v2 + 6120;
  FIELD_U32(v2, 6136) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6140), (StateExecuter *)(v2 + 6124), &NullState);
  FIELD_U32(v2, 6120) = &off_60C0AA48;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6160) = 0;
  memset(v2 + 6168, 0, 61);
  FIELD_U32(v2, 6232) = 0;
  FIELD_U32(v2, 6236) = 0;
  FIELD_U32(v2, 6240) = 0;
  return v2;
}
