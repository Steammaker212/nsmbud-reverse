/* sub_6083D24C
 * address: 0x6083D24C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D24C(int a1, int *a2, unsigned __int8 *a3, _DWORD *a4, int a5, int a6)
{
  _BYTE v10[152]; // [sp+8h] [bp-98h] BYREF

  sub_6083CFA0((int)v10, *a2, a3);
  dword_60CC74CC(v10, *a4, a5);
  nullsub_76(v10, a3, a4, a5, a6);
  FIELD_U32(a1, 8) = a1 + 16;
  dword_60CC7560();
  FIELD_U8(a1, 1) &= ~1u;
  *(_BYTE *)a1 = 1;
  return 1;
}
