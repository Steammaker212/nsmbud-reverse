/* registerProfile_BoomerangBro_ctor_263214
 * address: 0x60263214   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_BoomerangBro_ctor_263214()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C8E4D0 = 0;
  dword_60C8E4D4 = 0;
  dword_60C8E4D8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2A2A;
  Profile__ctor(&stru_60C8E4B4, BoomerangBro_ctor, 0x2F8u, &v1, &stru_60AFD978, 18);
  dword_60C8E4DC = 1092616192;
  dword_60C8E4E0 = 0;
  dword_60C8E4E4 = -1061158912;
  *(_DWORD *)algn_60C8E4E8 = -1054867456;
  *(_DWORD *)&algn_60C8E4E8[4] = 0;
  dword_60C8E4F0 = 1086324736;
  return &dword_60C8E4E4;
}
