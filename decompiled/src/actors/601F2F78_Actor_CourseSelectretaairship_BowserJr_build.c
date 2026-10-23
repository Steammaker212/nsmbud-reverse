/* Actor_CourseSelectretaairship_BowserJr_build
 * address: 0x601F2F78   size: 160   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectretaairship_BowserJr_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x160u);
  sub_601A75F0((Actor *)v2, a1);
  *(_DWORD *)v2 = off_60BD7348;
  FIELD_U32(v2, 268) = &off_60BD73D4;
  FIELD_U32(v2, 272) = &off_60BD73E4;
  FIELD_U32(v2, 276) = &off_60BD7408;
  FIELD_U32(v2, 280) = v2;
  FIELD_U32(v2, 284) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 288), (StateExecuter *)(v2 + 272), &NullState);
  FIELD_U32(v2, 268) = &off_60BD73C4;
  memset((void *)(v2 + 304), 0, 48);
  return v2;
}
