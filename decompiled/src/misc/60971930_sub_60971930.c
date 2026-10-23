/* sub_60971930
 * address: 0x60971930   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60971930(int a1, char a2, __int16 a3)
{
  agl_TextureData_ref(a1);
  FIELD_U32(a1, 272) = 255;
  FIELD_U16(a1, 276) = a3;
  FIELD_U8(a1, 278) = a2;
  sub_60917C1C((_DWORD *)(a1 + 280));
  dword_60CC7528(a1 + 288);
  return a1;
}
