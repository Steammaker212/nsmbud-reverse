/* sub_6079D9A4
 * address: 0x6079D9A4   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_6079D9A4(int a1))(_DWORD, int *)
{
  unsigned int *v1; // r4
  int v2; // r5
  char v3; // r12
  int v4; // r0
  bool v5; // zf
  int (__fastcall ***v6)(_DWORD, int *); // r4
  char v7; // r12

  v1 = (unsigned int *)(a1 + 11408);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618598368 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v2 )
  {
    v4 = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B370);
    v5 = v4 == 1;
    if ( v4 == 1 )
      v5 = FIELD_U32(v2, 1320) == 4;
    if ( v5 )
      return (int (__fastcall ***)(_DWORD, int *))v2;
  }
  v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *v1);
  if ( ((unsigned int)&dword_60CBA820 & ~(1618598524 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA820) )
  {
    dword_60CBA81C = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60CBA820);
  }
  if ( v6 )
  {
    v2 = (**v6)(v6, &dword_60CBA81C);
    if ( v2 )
      return v6;
    return (int (__fastcall ***)(_DWORD, int *))v2;
  }
  return 0;
}
