/* jc_damage_s_ref_FC3AC
 * address: 0x600FC3AC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_damage_s_ref_FC3AC(int a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  BowserJrBase__vf450((_DWORD *)a1);
  FIELD_U32(a1, 6300) = 18;
  v2 = FIELD_U32(a1, 7100);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_damage_s";
  sub_60421AE4(v2, v4, 1);
  FIELD_U16(a1, 6276) = 40;
  FIELD_U8(a1, 7608) = 0;
  return 7608;
}
