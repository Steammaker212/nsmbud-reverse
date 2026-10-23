/* HelpMenuScene_ref
 * address: 0x607EF3BC   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall HelpMenuScene_ref(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"HelpMenuScene");
  *(_DWORD *)a1 = off_60C26FFC;
  FIELD_U8(a1, 192) = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U32(a1, 2216) = &off_60C2708C;
  FIELD_U32(a1, 2220) = &off_60C2709C;
  FIELD_U32(a1, 2224) = &off_60C270C0;
  FIELD_U32(a1, 2228) = a1;
  FIELD_U32(a1, 2232) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 2236), (StateExecuter *)(a1 + 2220), (StateBase *)&dword_60CC5DF0);
  FIELD_U32(a1, 2216) = &off_60C2707C;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 2252));
  FIELD_U32(a1, 2268) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 2272) = &byte_60ABC94D;
  FIELD_U32(a1, 2252) = off_60C5E9A4;
  FIELD_U32(a1, 2276) = 0;
  FIELD_U32(a1, 2280) = 0;
  FIELD_U32(a1, 2284) = 1;
  FIELD_U32(a1, 2292) = 0;
  FIELD_U32(a1, 2296) = 0;
  FIELD_U32(a1, 2300) = 0;
  FIELD_U32(a1, 2288) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 2320));
  FIELD_U32(a1, 2336) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 2340) = &byte_60ABC94D;
  FIELD_U32(a1, 2320) = off_60C5E9A4;
  FIELD_U32(a1, 2344) = 0;
  FIELD_U32(a1, 2348) = 0;
  FIELD_U32(a1, 2352) = 1;
  FIELD_U32(a1, 2360) = 0;
  FIELD_U32(a1, 2364) = 0;
  FIELD_U32(a1, 2368) = 0;
  FIELD_U32(a1, 2356) = off_60BD8394;
  sub_6090A654((_DWORD *)(a1 + 2388));
  sub_6090C6DC(a1 + 2476);
  sub_604EBC10(a1 + 2648);
  return a1;
}
