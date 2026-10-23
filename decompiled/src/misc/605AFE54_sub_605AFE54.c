/* sub_605AFE54
 * address: 0x605AFE54   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605AFE54(int a1, int a2, int a3)
{
  double v5; // d0

  v5 = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 240))(a1);
  *(_DWORD *)a2 = LODWORD(v5);
  FIELD_F32(a2, 4) = *((float *)&v5 + 1) + 16.0;
  *(_DWORD *)a3 = LODWORD(v5);
  FIELD_F32(a3, 4) = *((float *)&v5 + 1) + -4.0;
}
