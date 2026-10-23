/* jc_demo_W8_magic_ref_62270
 * address: 0x60062270   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W8_magic_ref_62270(int a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_demo_W8_magic";
  sub_60421AE4(v2, v4, 1);
  FIELD_F32(a1, 112) = FIELD_F32(dword_60CC6484, 128) + 96.0;
  FIELD_U32(a1, 136) = -1070945620;
  FIELD_U64(a1, 120) = 0xC02AAAAC40C00000LL;
  if ( FIELD_U32(a1, 80) == 1 )
    FIELD_U32(a1, 120) = -1061158912;
  FIELD_U32(a1, 100) = 1026951913;
  FIELD_U16(a1, 6276) = 120;
  return 6276;
}
