/* sub_603727E8
 * address: 0x603727E8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603727E8(int a1, int a2)
{
  int v2; // r4
  int v3; // r5

  v2 = FIELD_U32(a2, 64);
  v3 = 0;
  if ( v2 && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 628))(v2) == 1 )
  {
    sub_602A3EFC(v2 + 11656, 24, 0.0625);
    ((void (__fastcall *)(int))loc_60373D84)(v2);
    return 1;
  }
  return v3;
}
