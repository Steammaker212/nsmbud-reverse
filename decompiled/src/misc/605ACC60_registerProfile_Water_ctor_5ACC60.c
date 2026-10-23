/* registerProfile_Water_ctor_5ACC60
 * address: 0x605ACC60   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Water_ctor_5ACC60()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  unk_60CB01D0 = 0;
  unk_60CB01D4 = -1082130432;
  unk_60CB01D8 = -1098907648;
  dword_60CB01DC = -119304647;
  dword_60CB01E0 = 0;
  dword_60CB01E4 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD22ED;
  Profile__ctor(&stru_60CB01A4, Water_ctor, 0x54u, &v0, &stru_60B04FEC, 0);
}
