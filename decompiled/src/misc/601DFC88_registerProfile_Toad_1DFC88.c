/* registerProfile_Toad_1DFC88
 * address: 0x601DFC88   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_Toad_1DFC88()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8AFA4 = 0;
  dword_60C8AFA8 = 0;
  dword_60C8AFAC = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC0006;
  Profile__ctor(&stru_60C8AFB0, Actor_Toad_build, 0x377u, &v2, 0, 0);
  *v0 = &off_60BD6B70;
  dword_60C8AFCC = CurrentStateID + 1;
  dword_60C8AFD0 = 92;
  dword_60C8AFD4 = 1;
  dword_60C8AFD8 = 96;
  dword_60C8AFDC = 1;
  dword_60C8AFE0 = 100;
  dword_60C8AFE4 = 1;
  dword_60C8AFC8 = (int)&off_60BD6C04;
  dword_60C8AFE8 = (int)&NullState;
  dword_60C8AFF8 = 1;
  dword_60C8AFFC = 108;
  dword_60C8B000 = 1;
  dword_60C8B004 = 112;
  dword_60C8B008 = 1;
  stru_60C8AFEC.vtable = &off_60BD6C04;
  stru_60C8AFEC.id = CurrentStateID + 2;
  unk_60C8AFF4 = 104;
  dword_60C8B00C = (int)&NullState;
  CurrentStateID += 3;
  stru_60C8B010.id = CurrentStateID;
  unk_60C8B018 = 116;
  dword_60C8B01C = 1;
  dword_60C8B020 = 120;
  dword_60C8B024 = 1;
  dword_60C8B028 = 124;
  dword_60C8B02C = 1;
  stru_60C8B010.vtable = &off_60BD6C04;
  dword_60C8B030 = (int)&NullState;
  return 1;
}
