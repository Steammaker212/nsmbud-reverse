/* Actor_CourseSelect_Miibarun_build
 * address: 0x601A4F88   size: 164   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelect_Miibarun_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x1F0u);
  sub_60185C70((Actor *)v2, a1);
  *(_DWORD *)v2 = &off_60BD5F3C;
  FIELD_U32(v2, 264) = &off_60BD5FBC;
  FIELD_U32(v2, 268) = &off_60BD5FCC;
  FIELD_U32(v2, 272) = &off_60BD5FF0;
  FIELD_U32(v2, 276) = v2;
  FIELD_U32(v2, 280) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 284), (StateExecuter *)(v2 + 268), &NullState);
  FIELD_U32(v2, 264) = &off_60BD5FAC;
  FIELD_U8(v2, 308) = 0;
  FIELD_U8(v2, 309) = 0;
  FIELD_U32(v2, 480) = 0;
  FIELD_U32(v2, 484) = 0;
  FIELD_U32(v2, 488) = 0;
  return v2;
}
