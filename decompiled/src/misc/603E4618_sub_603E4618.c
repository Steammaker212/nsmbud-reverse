/* sub_603E4618
 * address: 0x603E4618   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E4618(int a1)
{
  int v1; // r4
  char v2; // r12

  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 24));
  if ( ((unsigned int)&dword_60C7B408 & ~(1614693968 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  return !v1 || (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B404) != 1 || (FIELD_U8(v1, 1239) & 8) == 0;
}
