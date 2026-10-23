/* sub_6024C5FC
 * address: 0x6024C5FC   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024C5FC(int a1)
{
  int v1; // r6
  int i; // r5
  unsigned int v3; // r1
  int v4; // r4
  char v5; // r12
  int v6; // r4
  int result; // r0

  v1 = a1 + 15424;
  for ( i = 0; i != 4; ++i )
  {
    v3 = *(_DWORD *)(v1 + 4 * i);
    if ( v3 )
    {
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)dword_60C8DD54 & ~(1613022848 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
      {
        dword_60C8DD50 = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C8DD54);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8DD50) == 1 && FIELD_U8(v4, 6324) )
        FIELD_U8(v4, 6327) = 1;
    }
  }
  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v6 != result )
  {
    sub_602C1B2C(a1, 3, 0, 5.0, 1.0);
    FIELD_U16(a1, 15452) = -1;
    FIELD_U32(a1, 15456) = 1610612736;
    FIELD_U8(a1, 15462) = 0;
    FIELD_U32(a1, 15444) = 1065353216;
    FIELD_U32(a1, 15448) = 1065353216;
    return 15448;
  }
  return result;
}
