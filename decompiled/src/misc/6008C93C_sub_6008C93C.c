/* sub_6008C93C
 * address: 0x6008C93C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008C93C(_DWORD *a1, int a2)
{
  a1[1923] = FIELD_S8(a2, 84);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C81D4C);
}
