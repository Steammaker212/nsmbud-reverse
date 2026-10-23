/* registerProfile_akutakoinshawajanpu_58C378
 * address: 0x6058C378   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_akutakoinshawajanpu_58C378())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1E6B;
  Profile__ctor(&stru_60CAF3BC, Actor_akutakoinshawajanpu_build, 0x194u, &v1, &stru_60B04B4C, 8198);
  dword_60CAF3D8 = CurrentStateID + 1;
  dword_60CAF3D4 = (int)&off_60C06948;
  dword_60CAF3DC = (int)sub_6058BA48;
  dword_60CAF3E0 = 0;
  dword_60CAF3E4 = (int)sub_6058BC4C;
  dword_60CAF3E8 = 0;
  dword_60CAF3EC = (int)nullsub_238;
  dword_60CAF3F0 = 0;
  CurrentStateID += 2;
  dword_60CAF3F8 = CurrentStateID;
  dword_60CAF3F4 = (int)&off_60C06948;
  dword_60CAF3FC = (int)sub_6058BD10;
  dword_60CAF400 = 0;
  dword_60CAF404 = (int)SE_OBJ_GET_COIN_SHOWER_ref;
  dword_60CAF408 = 0;
  dword_60CAF40C = (int)nullsub_4670;
  dword_60CAF410 = 0;
  return nullsub_4670;
}
