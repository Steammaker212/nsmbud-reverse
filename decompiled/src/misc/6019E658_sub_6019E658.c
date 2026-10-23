/* sub_6019E658
 * address: 0x6019E658   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6019E658(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 544));
  if ( ((unsigned int)dword_60C89DB8 & ~(1612310160 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C89DB8) )
  {
    dword_60C89DB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C89DB8);
  }
  if ( v2 && (**v2)(v2, &dword_60C89DB4) == 1 )
    sub_6019D9FC((int)v2);
  v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 548));
  if ( ((unsigned int)dword_60C89DB8 & ~(1612310316 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C89DB8) )
  {
    dword_60C89DB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C89DB8);
  }
  if ( v4 )
  {
    if ( (**v4)(v4, &dword_60C89DB4) == 1 )
      sub_6019D9FC((int)v4);
  }
}
