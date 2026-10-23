/* SE_SYS_RECORD_PAGE_IN_ref
 * address: 0x6051E754   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_RECORD_PAGE_IN_ref(int a1)
{
  int v1; // r4
  int v2; // r0

  v1 = a1 + 40;
  FIELD_U8(a1, 13005) = 1;
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA8FD4, 0);
  sub_60807EF0(SoundSystem_instance, "SE_SYS_RECORD_PAGE_IN", 0, 1);
  v2 = sub_60473B4C(v1);
  return sub_6098F1D4(v2);
}
