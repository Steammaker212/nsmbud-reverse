/* sub_6074B298
 * address: 0x6074B298   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074B298(int a1)
{
  void (__fastcall *v2)(int, int); // r5
  int v3; // r0

  v2 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 132);
  v3 = sub_6081D3DC(dword_60CC6C3C);
  v2(a1, v3);
  ((void (__fastcall *)(int))loc_6074B2F0)(a1);
  FIELD_U8(dword_60CBC000, 163) = 1;
  return 1;
}
