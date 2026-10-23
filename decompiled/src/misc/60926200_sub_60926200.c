/* sub_60926200
 * address: 0x60926200   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60926200(int a1, unsigned int a2)
{
  unsigned int v2; // r2
  int v3; // r0

  v2 = *(_DWORD *)(a1 - 16);
  v3 = *(_DWORD *)(a1 - 12);
  if ( v2 > a2 )
    v3 += 4 * a2;
  return FIELD_U16(v3, 2);
}
