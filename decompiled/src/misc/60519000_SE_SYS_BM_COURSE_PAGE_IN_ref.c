/* SE_SYS_BM_COURSE_PAGE_IN_ref
 * address: 0x60519000   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BM_COURSE_PAGE_IN_ref(int a1)
{
  _DWORD *v1; // r4
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U16(a1, 18300) = 257;
  v1 = (_DWORD *)(a1 + 36);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_6051A8DC(0);
  sub_60473DE4(v1, 0, v3, 0);
  sub_60473B58(v1, 0xEu, 0);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_BM_COURSE_PAGE_IN", 0, 1);
}
