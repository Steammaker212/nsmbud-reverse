/* registerProfile_musasabiPlayer_Tag_60D9E4
 * address: 0x6060D9E4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_musasabiPlayer_Tag_60D9E4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD383A;
  Profile__ctor(&stru_60CB2EA4, Actor_musasabiPlayer_Tag_build, 0x347u, &v1, &stru_60B06458, 0);
  dword_60CB2EC0 = ++CurrentStateID;
  dword_60CB2EBC = (int)&off_60C0FB60;
  dword_60CB2EC4 = (int)nullsub_4878;
  dword_60CB2EC8 = 0;
  dword_60CB2ECC = (int)sub_6060D628;
  dword_60CB2ED0 = 0;
  dword_60CB2ED4 = (int)nullsub_4879;
  dword_60CB2ED8 = 0;
  return &dword_60CB2EBC;
}
