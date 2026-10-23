/* registerProfile_puropera_46D3EC
 * address: 0x6046D3EC   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float registerProfile_puropera_46D3EC()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC9954;
  Profile__ctor(&stru_60C9D56C, Actor_puropera_build, 0x253u, &v1, &stru_60B02818, 16406);
  dword_60C9D588 = CurrentStateID + 1;
  dword_60C9D584 = (int)&off_60BFC3D4;
  dword_60C9D58C = (int)&loc_6046BA50;
  dword_60C9D590 = 0;
  dword_60C9D594 = (int)sub_6046BB70;
  dword_60C9D598 = 0;
  dword_60C9D59C = (int)nullsub_203;
  dword_60C9D5A0 = 0;
  dword_60C9D5A8 = CurrentStateID + 2;
  dword_60C9D5AC = 260;
  dword_60C9D5B0 = 1;
  dword_60C9D5B4 = 264;
  dword_60C9D5B8 = 1;
  dword_60C9D5BC = 268;
  dword_60C9D5C0 = 1;
  dword_60C9D5A4 = (int)&off_60BFC3E8;
  dword_60C9D5C4 = (int)&dword_60C9D2F8;
  dword_60C9D5D4 = 1;
  dword_60C9D5D8 = 276;
  dword_60C9D5DC = 1;
  dword_60C9D5E0 = 280;
  dword_60C9D5E4 = 1;
  unk_60C9D5C8 = &off_60BFC3E8;
  unk_60C9D5CC = CurrentStateID + 3;
  unk_60C9D5D0 = 272;
  dword_60C9D5E8 = (int)&dword_60C9D31C;
  dword_60C9D5F4 = 284;
  dword_60C9D5F8 = 1;
  dword_60C9D5FC = 288;
  dword_60C9D600 = 1;
  dword_60C9D604 = 292;
  dword_60C9D608 = 1;
  unk_60C9D5EC = &off_60BFC3E8;
  unk_60C9D5F0 = CurrentStateID + 4;
  dword_60C9D60C = (int)&dword_60C9D340;
  dword_60C9D618 = 296;
  dword_60C9D61C = 1;
  dword_60C9D620 = 300;
  dword_60C9D624 = 1;
  dword_60C9D628 = 304;
  dword_60C9D62C = 1;
  unk_60C9D610 = &off_60BFC3E8;
  unk_60C9D614 = CurrentStateID + 5;
  dword_60C9D630 = (int)&dword_60C9D364;
  dword_60C9D63C = 308;
  dword_60C9D640 = 1;
  dword_60C9D644 = 312;
  dword_60C9D648 = 1;
  dword_60C9D64C = 316;
  dword_60C9D650 = 1;
  unk_60C9D634 = &off_60BFC3E8;
  unk_60C9D638 = CurrentStateID + 6;
  dword_60C9D654 = (int)&unk_60C9D388;
  CurrentStateID += 7;
  dword_60C9D65C = CurrentStateID;
  dword_60C9D660 = 320;
  dword_60C9D664 = 1;
  dword_60C9D668 = 324;
  dword_60C9D66C = 1;
  dword_60C9D670 = 328;
  dword_60C9D674 = 1;
  dword_60C9D658 = (int)&off_60BFC3E8;
  dword_60C9D678 = (int)&dword_60C9D3AC;
  *(float *)&dword_60C9D67C = -0.1875 * 0.5;
  return -0.1875 * 0.5;
}
