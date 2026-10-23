/* sub_60926190
 * address: 0x60926190   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60926190(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r12
  unsigned __int16 *v4; // r3
  int v5; // r0
  int v6; // r0

  v3 = a1[3];
  v4 = (unsigned __int16 *)a1[4];
  v5 = a1[6];
  if ( v3 > a3 )
    v4 += 2 * a3;
  v6 = *(_DWORD *)(v5 + 4 * (*v4 + a2));
  return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 64))(v6);
}
