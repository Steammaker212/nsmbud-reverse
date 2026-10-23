/* sub_609853F8
 * address: 0x609853F8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609853F8(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  sub_6085C99C(a1, a2, a3, a4, a5);
  return (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 168))(a1, FIELD_U32(a4, 24));
}
