/* sub_6025FA10
 * address: 0x6025FA10   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025FA10(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r1

  v4 = **(_DWORD **)(a1 + 6352);
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 84))(v4, a3);
  return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 108))(v4, v5, a2);
}
