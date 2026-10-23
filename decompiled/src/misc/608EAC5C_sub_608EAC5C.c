/* sub_608EAC5C
 * address: 0x608EAC5C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EAC5C(_QWORD *a1)
{
  __int64 v3; // [sp+0h] [bp-10h] BYREF

  (*(void (__fastcall **)(_QWORD *))(*(_DWORD *)a1 + 100))(a1);
  nn__os__GetSystemTick((nn__os *)&v3);
  a1[21] = v3;
  return (*(int (__fastcall **)(_QWORD *))(*(_DWORD *)a1 + 112))(a1);
}
