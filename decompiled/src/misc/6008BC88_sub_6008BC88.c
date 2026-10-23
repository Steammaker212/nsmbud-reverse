/* sub_6008BC88
 * address: 0x6008BC88   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008BC88(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12
  unsigned int v6; // r1
  _DWORD *v7; // r4
  unsigned int v8; // t1
  int (__fastcall ***v9)(_DWORD, int *); // r5
  char v10; // r12
  int v11; // [sp+0h] [bp-20h] BYREF
  int v12; // [sp+4h] [bp-1Ch]

  result = 7672;
  v3 = FIELD_U32(a1, 7672);
  if ( v3 )
  {
    v11 = 1065353216;
    v12 = 1082130432;
    v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( ((unsigned int)&dword_60C810FC & ~(1611185384 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C810FC) )
    {
      dword_60C810F8 = (int)&off_60BC66C8;
      _cxa_guard_release(&dword_60C810FC);
    }
    if ( v4 && (**v4)(v4, &dword_60C810F8) == 1 )
      sub_60063AA0((int)v4, &v11);
    FIELD_U32(a1, 7672) = 0;
    result = 7676;
    v8 = FIELD_U32(a1, 7676);
    v7 = (_DWORD *)(a1 + 7676);
    v6 = v8;
    if ( v8 )
    {
      v11 = -1082130432;
      v12 = 1082130432;
      v9 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
      if ( ((unsigned int)&dword_60C810FC & ~(1611185576 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C810FC) )
      {
        dword_60C810F8 = (int)&off_60BC66C8;
        _cxa_guard_release(&dword_60C810FC);
      }
      if ( v9 )
      {
        if ( (**v9)(v9, &dword_60C810F8) == 1 )
          sub_60063AA0((int)v9, &v11);
      }
      *v7 = 0;
      return 0;
    }
  }
  return result;
}
