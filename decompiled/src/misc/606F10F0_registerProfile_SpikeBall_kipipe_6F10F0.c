/* registerProfile_SpikeBall_kipipe_6F10F0
 * address: 0x606F10F0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_SpikeBall_kipipe_6F10F0()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60CBC1F4 = 0;
  dword_60CBC1F8 = 0;
  dword_60CBC1FC = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD83DB;
  Profile__ctor(&stru_60CBC200, Actor_SpikeBall_kipipe_build, 0xC1u, &v2, &stru_60B0936C, 0);
  *v0 = &off_60C2009C;
  dword_60CBC21C = ++CurrentStateID;
  dword_60CBC220 = 192;
  dword_60CBC224 = 1;
  dword_60CBC228 = 196;
  dword_60CBC22C = 1;
  dword_60CBC230 = 200;
  dword_60CBC234 = 1;
  dword_60CBC218 = (int)&off_60C2017C;
  dword_60CBC238 = (int)&NullState;
  return &dword_60CBC218;
}
