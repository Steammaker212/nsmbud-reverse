/* sub_6031AB9C
 * address: 0x6031AB9C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031AB9C(unsigned int *a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r6
  char v3; // r12

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( ((unsigned int)dword_60C93780 & ~(1613867992 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C93780) )
  {
    dword_60C9377C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C93780);
  }
  if ( v2 && (**v2)(v2, &dword_60C9377C) == 1 )
    sub_6031AC74(v2, 0);
  sub_6000C0F4(a1);
  return 1;
}
