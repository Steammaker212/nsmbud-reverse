/* MovieScene_ref
 * address: 0x607F10E0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MovieScene_ref(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"MovieScene");
  *(_DWORD *)a1 = off_60C27344;
  FIELD_U8(a1, 192) = 0;
  FIELD_U32(a1, 196) = &off_60C273D4;
  FIELD_U32(a1, 200) = &off_60C273E4;
  FIELD_U32(a1, 204) = &off_60C27408;
  FIELD_U32(a1, 208) = a1;
  FIELD_U32(a1, 212) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 216), (StateExecuter *)(a1 + 200), (StateBase *)&dword_60CC5E5C);
  FIELD_U32(a1, 196) = &off_60C273C4;
  return a1;
}
