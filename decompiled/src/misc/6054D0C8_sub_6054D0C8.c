/* sub_6054D0C8
 * address: 0x6054D0C8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054D0C8(int a1)
{
  _DWORD *v2; // r5
  _DWORD v4[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 4);
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60475C8C((int)v2);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "Skip.bflyt";
  message_ref(v2, v4, 0, 0, 0);
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3524)
                                                                                             + 12))(
           FIELD_U32(a1, 3524),
           sub_609909D8,
           0);
}
