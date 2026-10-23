/* registerProfile_faiaba2_6027F4
 * address: 0x606027F4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_faiaba2_6027F4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3345;
  Profile__ctor(&stru_60CB2848, Actor_faiaba2_build, 0x179u, &v1, &stru_60B061D4, 2);
  dword_60CB2864 = ++CurrentStateID;
  dword_60CB2868 = 196;
  dword_60CB286C = 1;
  dword_60CB2870 = 200;
  dword_60CB2874 = 1;
  dword_60CB2878 = 204;
  dword_60CB287C = 1;
  dword_60CB2860 = (int)&off_60C0EBA0;
  dword_60CB2880 = (int)&dword_60CB28AC;
  dword_60CB2884[0] = -1056964608;
  dword_60CB2884[1] = 1090519040;
  dword_60CB288C = 1090519040;
  dword_60CB2890 = -1056964608;
  dword_60CB2894 = -1048576000;
  dword_60CB2898 = 1098907648;
  dword_60CB289C = 1098907648;
  dword_60CB28A0 = -1048576000;
  return dword_60CB2884;
}
