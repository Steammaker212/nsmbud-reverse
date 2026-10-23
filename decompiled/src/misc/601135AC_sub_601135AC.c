/* sub_601135AC
 * address: 0x601135AC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601135AC(int *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int v6; // r1

  v2 = (_DWORD *)a1[1775];
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  a1[1813] = *(_DWORD *)(*(_DWORD *)v3 + 20);
  (*(void (__fastcall **)(int *))(*a1 + 1068))(a1);
  v6 = (*(int (__fastcall **)(int *))(*a1 + 1064))(a1);
  return sub_600CEB84(a1, v6);
}
