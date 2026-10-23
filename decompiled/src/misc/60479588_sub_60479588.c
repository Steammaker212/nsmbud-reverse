/* sub_60479588
 * address: 0x60479588   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60479588(int a1, int a2, _DWORD *a3, void *a4)
{
  _DWORD *v6; // r7

  v6 = (_DWORD *)(a1 + 12);
  sub_604734E4((_DWORD *)(a1 + 12), a4);
  sub_60475C8C((int)v6);
  message_ref(v6, a3, 0, 0, 0);
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3532)
                                                                                             + 12))(
           FIELD_U32(a1, 3532),
           sub_609909D8,
           0);
}
