/* sub_607D7AE4
 * address: 0x607D7AE4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7AE4(int a1)
{
  _BOOL4 v2; // r5
  int v3; // r0
  int result; // r0

  FIELD_U32(a1, 9940) = 0;
  sub_60794954(a1 + 11364, 14, 0.0, 0.0);
  v2 = FIELD_F32(a1, 88) < 0.0;
  FIELD_U32(a1, 160) = sub_60773F3C(a1, v2);
  FIELD_U32(a1, 80) = !v2;
  FIELD_U32(a1, 11004) = !v2;
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 96) = -1065353216;
  sub_607D7BA4(a1);
  v3 = sub_607D6C28(a1);
  if ( v3 )
    sub_6078667C((_DWORD *)(v3 + 688), 9);
  result = FIELD_U32(a1, 1236) | 0x1000000;
  FIELD_U32(a1, 1236) = result;
  return result;
}
