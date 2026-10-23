/* sub_60394E64
 * address: 0x60394E64   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60394E64(int a1)
{
  int v2; // r1
  int v3; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  target = 0;
  v3 = (int)(float)((float)(2147500000.0 * 60.0) / 180.0) / 10;
  moveValueTo((int *)(a1 + 160), &target, &v3);
  if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
         a1 + 108,
         FIELD_F32(a1, 6424),
         0.5,
         1.0,
         0.05) < 0.5 )
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6424);
  if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
         a1 + 112,
         FIELD_F32(a1, 6428) + 8.0,
         0.5,
         1.25,
         0.05) < 0.5 )
  {
    v2 = dword_60C96478;
    FIELD_U32(dword_60C96478, 112) = FIELD_U8(a1, 6397);
    FIELD_U32(v2, 116) = 0;
    FIELD_U8(a1, 19) = 1;
  }
}
