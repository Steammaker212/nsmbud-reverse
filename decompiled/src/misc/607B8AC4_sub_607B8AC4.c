/* sub_607B8AC4
 * address: 0x607B8AC4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607B8AC4(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  __int64 *v4; // r0
  _QWORD *v5; // r1
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d17
  __int64 v9; // d17

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
  if ( ((unsigned int)&dword_60C81104 & ~(1618709248 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v2 )
  {
    if ( (**v2)(v2, &dword_60C81100) == 1 )
    {
      v4 = (__int64 *)sub_6009514C((int)v2);
      v5 = v4 + 4;
      v6 = *v4;
      v7 = v4[1];
      v4 += 2;
      FIELD_U64(a1, 13004) = v6;
      FIELD_U64(a1, 13012) = v7;
      v8 = v4[1];
      FIELD_U64(a1, 13020) = *v4;
      FIELD_U64(a1, 13028) = v8;
      v9 = v5[1];
      FIELD_U64(a1, 13036) = *v5;
      FIELD_U64(a1, 13044) = v9;
    }
  }
}
