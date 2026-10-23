/* registerProfile_ZN14BrickBlockHuge6creat_566978
 * address: 0x60566978   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_ZN14BrickBlockHuge6creat_566978())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD13D4;
  Profile__ctor(&stru_60CAE390, BrickBlockHuge__create, 0x13Du, &v1, &stru_60B041D8, 4098);
  dword_60CAE3AC = CurrentStateID + 1;
  dword_60CAE3A8 = (int)&off_60C01824;
  dword_60CAE3B0 = (int)nullsub_4615;
  dword_60CAE3B4 = 0;
  dword_60CAE3B8 = (int)sub_60565B0C;
  dword_60CAE3BC = 0;
  dword_60CAE3C0 = (int)nullsub_4616;
  dword_60CAE3C4 = 0;
  dword_60CAE3C8 = (int)&off_60C01824;
  *(_DWORD *)algn_60CAE3CC = CurrentStateID + 2;
  dword_60CAE3D0 = (int)nullsub_4617;
  dword_60CAE3D4 = 0;
  dword_60CAE3D8 = (int)sub_60565BF8;
  dword_60CAE3DC = 0;
  dword_60CAE3E0 = (int)nullsub_234;
  dword_60CAE3E4 = 0;
  CurrentStateID += 3;
  dword_60CAE3EC = CurrentStateID;
  dword_60CAE3E8 = (int)&off_60C01824;
  dword_60CAE3F0 = (int)sub_60565C28;
  dword_60CAE3F4 = 0;
  dword_60CAE3F8 = (int)sub_60565C5C;
  dword_60CAE3FC = 0;
  dword_60CAE400 = (int)nullsub_4618;
  dword_60CAE404 = 0;
  return nullsub_4618;
}
