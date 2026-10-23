/* sub_6019180C
 * address: 0x6019180C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019180C(int a1)
{
  unsigned int *v1; // r1
  int (__fastcall ***v2)(_DWORD, int *); // r4
  char v3; // r12
  int result; // r0

  v1 = (unsigned int *)(a1 + 1308);
  if ( !FIELD_U32(a1, 1296) )
    v1 = (unsigned int *)&dword_60C89970;
  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *v1);
  if ( ((unsigned int)&dword_60C88AA0 & ~(1612257372 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
  {
    dword_60C88A9C = (int)&off_60BD4BB0;
    _cxa_guard_release(&dword_60C88AA0);
  }
  if ( !v2 )
    return 0;
  result = (**v2)(v2, &dword_60C88A9C);
  if ( result )
    return (int)v2;
  return result;
}
