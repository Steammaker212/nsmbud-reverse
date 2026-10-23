/* sub_607B6CB0
 * address: 0x607B6CB0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B6CB0(_BYTE *a1)
{
  int v2; // r4
  char v3; // r0
  bool v4; // zf

  v2 = 2;
  v3 = a1[6900];
  v4 = (v3 & 1) == 0;
  if ( (v3 & 1) == 0 )
    v4 = (a1[1205] & 0x10) == 0;
  if ( v4
    && (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 152))(a1) == 1
    && (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1464))(a1) == 1 )
  {
    return sub_60786934((int)(a1 + 688)) ^ 1;
  }
  return v2;
}
