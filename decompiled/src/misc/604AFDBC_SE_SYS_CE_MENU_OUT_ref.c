/* SE_SYS_CE_MENU_OUT_ref
 * address: 0x604AFDBC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_MENU_OUT_ref(_DWORD *a1)
{
  int result; // r0

  sub_603F5010(AreaTask_intance);
  sub_60473DE4(a1 + 5, 0, &dword_60CA191C, 0);
  sub_60807EF0(SoundSystem_instance, "SE_SYS_CE_MENU_OUT", 0, 1);
  *(_BYTE *)(a1[1542] + 64) &= ~1u;
  *(_BYTE *)(a1[1543] + 64) &= ~1u;
  *(_BYTE *)(a1[1544] + 64) &= ~1u;
  *(_BYTE *)(a1[1545] + 64) &= ~1u;
  *(_BYTE *)(a1[1546] + 64) &= ~1u;
  *(_BYTE *)(a1[1547] + 64) &= ~1u;
  *(_BYTE *)(a1[1548] + 64) &= ~1u;
  *(_BYTE *)(a1[1549] + 64) &= ~1u;
  result = a1[1550];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
