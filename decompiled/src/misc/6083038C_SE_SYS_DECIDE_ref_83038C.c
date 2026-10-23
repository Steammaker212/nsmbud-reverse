/* SE_SYS_DECIDE_ref_83038C
 * address: 0x6083038C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DECIDE_ref_83038C(int a1, int a2)
{
  FIELD_U8(a1, 648) = 0;
  FIELD_U8(a1, 656) = 0;
  sub_603FBCA4(dword_60C99DD4);
  sub_603FBCF0(dword_60C99DD4);
  sub_603F4740(AreaTask_intance, a2);
  return sub_60807EF0((_DWORD *)SoundSystem_instance, (int)"SE_SYS_DECIDE", 0);
}
