/* registerProfile_mameGoomba_253A94
 * address: 0x60253A94   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall *registerProfile_mameGoomba_253A94())(int a1)
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8DED0 = 0;
  dword_60C8DED4 = 0;
  dword_60C8DED8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC27AC;
  Profile__ctor(&stru_60C8DEDC, Actor_mameGoomba_build, 0x1D7u, &v1, &stru_60AFD7BC, 16);
  dword_60C8DEF8 = CurrentStateID + 1;
  dword_60C8DEF4 = (int)&off_60BDA810;
  dword_60C8DEFC = (int)&loc_602515A0;
  dword_60C8DF00 = 0;
  dword_60C8DF04 = (int)sub_602516B4;
  dword_60C8DF08 = 0;
  dword_60C8DF0C = (int)nullsub_3094;
  dword_60C8DF10 = 0;
  dword_60C8DF18 = CurrentStateID + 2;
  dword_60C8DF14 = (int)&off_60BDA810;
  dword_60C8DF1C = (int)sub_60251818;
  dword_60C8DF20 = 0;
  dword_60C8DF24 = (int)sub_60251838;
  dword_60C8DF28 = 0;
  dword_60C8DF2C = (int)nullsub_3095;
  dword_60C8DF30 = 0;
  dword_60C8DF38 = CurrentStateID + 3;
  dword_60C8DF34 = (int)&off_60BDA810;
  dword_60C8DF3C = (int)sub_602518C0;
  dword_60C8DF40 = 0;
  dword_60C8DF44 = (int)SE_EMY_MAMEKURIBO_CLING_ref;
  dword_60C8DF48 = 0;
  dword_60C8DF4C = (int)nullsub_3096;
  dword_60C8DF50 = 0;
  dword_60C8DF58 = CurrentStateID + 4;
  dword_60C8DF54 = (int)&off_60BDA810;
  dword_60C8DF5C = (int)sub_60251ECC;
  dword_60C8DF60 = 0;
  dword_60C8DF64 = (int)sub_60251F20;
  dword_60C8DF68 = 0;
  dword_60C8DF6C = (int)sub_602520F0;
  dword_60C8DF70 = 0;
  dword_60C8DF78 = CurrentStateID + 5;
  dword_60C8DF7C = 456;
  dword_60C8DF80 = 1;
  dword_60C8DF84 = 460;
  dword_60C8DF88 = 1;
  dword_60C8DF8C = 464;
  dword_60C8DF90 = 1;
  dword_60C8DF74 = (int)&off_60BDA824;
  dword_60C8DF94 = (int)&stru_60C90710;
  CurrentStateID += 6;
  dword_60C8DF9C = CurrentStateID;
  dword_60C8DF98 = (int)&off_60BDA810;
  dword_60C8DFA0 = (int)sub_60252114;
  dword_60C8DFA4 = 0;
  dword_60C8DFA8 = (int)nullsub_3097;
  dword_60C8DFAC = 0;
  dword_60C8DFB0 = (int)sub_60252184;
  dword_60C8DFB4 = 0;
  return sub_60252184;
}
