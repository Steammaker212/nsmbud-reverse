/* BootScene_ctor
 * address: 0x607DEED0   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BootScene_ctor(int a1, int a2)
{
  sead_IDisposer *v3; // r0

  CalculateTask3_ctor(a1, a2, (int)"BootScene");
  *(_DWORD *)a1 = off_60C26504;
  FIELD_U32(a1, 192) = &off_60C265A4;
  FIELD_U32(a1, 196) = &off_60C265B4;
  FIELD_U32(a1, 200) = &off_60C265D8;
  FIELD_U32(a1, 204) = a1;
  FIELD_U32(a1, 208) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 212), (StateExecuter *)(a1 + 196), (StateBase *)&dword_60CC5774);
  FIELD_U32(a1, 192) = &off_60C26594;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 228));
  FIELD_U32(a1, 244) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 248) = &byte_60ABC94D;
  FIELD_U32(a1, 228) = off_60C5E9A4;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 1;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 264) = off_60BD8394;
  v3 = sead_IDisposer_ctor((sead_IDisposer *)(a1 + 296));
  FIELD_U32(a1, 296) = off_60C26570;
  FIELD_U32(a1, 312) = 0;
  FIELD_U32(a1, 316) = 0;
  FIELD_U32(a1, 320) = v3;
  FIELD_U32(a1, 324) = 0;
  FIELD_U8(a1, 352) = 0;
  FIELD_U32(a1, 336) = a1;
  FIELD_U32(a1, 340) = sub_607DF058;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 332) = off_60C265F0;
  FIELD_U32(a1, 328) = a1 + 332;
  BootScene_ctor_helper(a1 + 356);
  FIELD_U8(a1, 3952) = 0;
  return a1;
}
