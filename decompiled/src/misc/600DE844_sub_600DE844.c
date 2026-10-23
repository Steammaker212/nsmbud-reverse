/* sub_600DE844
 * address: 0x600DE844   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600DE844(int a1)
{
  char v1; // r12
  unsigned int v2; // r1
  int v3; // r4

  v2 = FIELD_U32(a1, 7136);
  if ( v2 )
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  else
    v3 = 0;
  if ( ((unsigned int)&dword_60C84B5C & ~(1611524236 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B5C) )
  {
    dword_60C84B58 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B5C);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B58) == 1 )
      FIELD_U8(v3, 6552) = 1;
  }
}
