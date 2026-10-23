/* sub_601A29FC
 * address: 0x601A29FC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A29FC(int a1)
{
  sub_603F7FF8(0);
  sub_60401BB8(0);
  sub_604C4E30(a1 + 2880);
  sub_60544F4C(a1 + 31488);
  T_InvalidItem_00_ref(a1 + 64996);
  N_ConfirmWinPos_00_ref(a1 + 139476);
  T_Kinopio_ref(a1 + 149128);
  sub_60552550(a1 + 157360);
  sub_60515864(a1 + 268980);
  FIELD_U32(a1, 298948) = 8;
  sub_605159B8(a1 + 268980);
  sub_6054C4A4(a1 + 153252);
  T_Text_00_ref(a1 + 227624);
  sub_6055DF38(a1 + 240464);
  T_WorldName_00_ref(a1 + 261300);
  sub_604E028C(a1 + 264900);
  sub_603F807C(dword_60C99DD0);
  return sub_60401ED4(dword_60C99E68);
}
