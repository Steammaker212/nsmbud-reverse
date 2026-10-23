/* SE_SYS_CE_BTN_OVER_ref_2
 * address: 0x6050090C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_BTN_OVER_ref_2(int a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  SE_SYS_CE_BTN_OVER_ref_2_helper();
  sub_60502210(a1 + 3588, &unk_60B036F8, 6);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "OverlayDialog";
  sead__SafeStringBase__operator_assign(a1 + 4600, (int)v3);
  sub_6047F28C((_DWORD *)(a1 + 3628), (int)"SE_SYS_DECIDE", 15);
  sub_6047F340((_DWORD *)(a1 + 3628), (int)"SE_SYS_CURSOR", 15);
  sub_6047F2C8((_DWORD *)(a1 + 3628), (int)"SE_SYS_CE_BTN_OVER", 15);
  sub_6047F304((_DWORD *)(a1 + 3628), (int)"SE_SYS_CE_BTN_OVER_OFF", 15);
  sub_6047F37C((_DWORD *)(a1 + 3628), 15);
  return SE_SYS_CE_BTN_OVER_ref_2_helper_500BDC(a1);
}
