/* registerProfile_BowserJr_fire_0D5FDC
 * address: 0x600D5FDC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_BowserJr_fire_0D5FDC())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C84334 = 0;
  dword_60C84338 = 0;
  dword_60C8433C = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABD22B;
  Profile__ctor(&stru_60C84340, Actor_BowserJr_fire_build, 0x333u, &v2, &stru_60AF5BF8, 2);
  *v0 = &off_60BCBA34;
  dword_60C8435C = CurrentStateID + 1;
  dword_60C84358 = (int)&off_60BCBB34;
  dword_60C84360 = (int)sub_600D51B4;
  dword_60C84364 = 0;
  dword_60C84368 = (int)sub_600D52E8;
  dword_60C8436C = 0;
  dword_60C84370 = (int)nullsub_2733;
  dword_60C84374 = 0;
  CurrentStateID += 2;
  dword_60C8437C = CurrentStateID;
  dword_60C84378 = (int)&off_60BCBB34;
  dword_60C84380 = (int)sub_600D5330;
  dword_60C84384 = 0;
  dword_60C84388 = (int)sub_600D538C;
  dword_60C8438C = 0;
  dword_60C84390 = (int)nullsub_138;
  dword_60C84394 = 0;
  return nullsub_138;
}
