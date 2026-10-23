/* sub_6085277C
 * address: 0x6085277C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085277C(_DWORD *a1, int a2, int a3)
{
  (*(void (__fastcall **)(_DWORD *, int, _DWORD))(*a1 + 40))(a1, a2, 0);
  a1[12] = a2;
  return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, a3);
}
