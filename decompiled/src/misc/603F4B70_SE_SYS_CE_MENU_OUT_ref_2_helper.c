/* SE_SYS_CE_MENU_OUT_ref_2_helper
 * address: 0x603F4B70   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_MENU_OUT_ref_2_helper(int a1, int a2)
{
  int v3; // r5
  int v4; // r6
  int result; // r0
  unsigned __int8 v6; // [sp+7h] [bp-19h] BYREF

  v3 = LevelInfo_instance;
  v6 = 0;
  v4 = SE_SYS_CE_MENU_OUT_ref_2_helper_helper_3F4A10((2 * a2) | 1, (unsigned __int8)(2 * a2) | 1, (char *)&v6);
  sub_6040D3A4(v3, FIELD_U8(v3, 16));
  sub_6040D3B8(v3, FIELD_U8(v3, 17));
  sub_6040D3CC(v3, v6);
  sub_6040D3E0(v3, FIELD_U8(v4, 8));
  result = sub_6040D3F4(v3, 3);
  FIELD_U8(a1, 1861) = 1;
  return result;
}
