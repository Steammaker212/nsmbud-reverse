/* sub_601D07C8
 * address: 0x601D07C8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D07C8(int a1)
{
  int v2; // r4
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r0

  v2 = sub_601D06BC(a1);
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612515336 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C88AAC);
    if ( v5 )
      v5 = (int)v3;
    if ( v2 != 1 )
      return sub_601D9B54(v5);
    return sub_601D9B20(v5);
  }
  v5 = 0;
  if ( v2 == 1 )
    return sub_601D9B20(v5);
  return sub_601D9B54(v5);
}
