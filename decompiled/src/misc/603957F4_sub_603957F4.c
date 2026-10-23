/* sub_603957F4
 * address: 0x603957F4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603957F4(int a1)
{
  int v2; // r1
  int v3; // r1

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  v2 = byte_60AFE3F4[FIELD_U32(a1, 80)];
  if ( ((float (__fastcall *)(int, int, float, float, float, float))loc_60832560)(
         a1 + 108,
         v2,
         FIELD_F32(a1, 6424) + (float)((float)v2 * 32.0),
         0.5,
         1.25,
         0.05) < 0.5 )
  {
    v3 = dword_60C96478;
    FIELD_U32(dword_60C96478, 112) = FIELD_U8(a1, 6397);
    FIELD_U32(v3, 116) = 0;
    FIELD_U8(a1, 19) = 1;
  }
}
