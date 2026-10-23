/* sub_6078CCE0
 * address: 0x6078CCE0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078CCE0(int a1)
{
  int v1; // r6
  int v2; // r7
  int v3; // r5
  int *v4; // r4
  int result; // r0

  v1 = a1 + 308;
  v2 = 0;
  v3 = **(_DWORD **)(a1 + 24);
  v4 = &dword_60CC4380;
  do
  {
    result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 84))(v3, v4);
    *(_DWORD *)(v1 + 4 * v2++) = result;
    v4 += 2;
  }
  while ( v2 != 24 );
  return result;
}
