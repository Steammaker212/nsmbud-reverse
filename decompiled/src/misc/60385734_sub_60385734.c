/* sub_60385734
 * address: 0x60385734   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60385734(_DWORD *a1)
{
  int v1; // r1

  v1 = a1[40] >> 31;
  a1[20] = v1;
  a1[1571] = v1;
  return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C96BA4);
}
