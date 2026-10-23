/* registerProfile_sub_606F1CE8_6F207C
 * address: 0x606F207C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sub_606F1CE8_6F207C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD846F;
  Profile__ctor(&stru_60CBC2E4, sub_606F1CE8, 0x346u, &v0, &stru_60B09480, 2);
}
