/* registerProfile_ZN8SpikeTopC3EPK14ActorB_3BB37C
 * address: 0x603BB37C   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ZN8SpikeTopC3EPK14ActorB_3BB37C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  int v2; // r3
  sead__SafeString v4[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C98150 = 0;
  dword_60C98154 = 0;
  dword_60C98158 = 0;
  v4[0].vtable = &sead__SafeStringBase__vtable;
  v4[0].cstr = (char *)&unk_60AC5BA6;
  Profile__ctor(&stru_60C9815C, SpikeTop__ctor, 0x2A5u, v4, &stru_60B00C58, 18);
  v4[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BF59E0;
  v4[0].cstr = (char *)&unk_60AC5BB6;
  Profile__ctor(&stru_60C98174, SpikeTop__ctor, 0x2A6u, v4, &stru_60B00C7C, 18);
  *v1 = &off_60BF59EC;
  dword_60C98190 = CurrentStateID + 1;
  dword_60C9818C = (int)&off_60BF5CCC;
  dword_60C98194 = (int)sub_603B6328;
  dword_60C98198 = 0;
  dword_60C9819C = (int)sub_603B64E0;
  dword_60C981A0 = 0;
  dword_60C981A4 = (int)nullsub_3553;
  dword_60C981A8 = 0;
  dword_60C981AC = (int)&off_60BF5CCC;
  unk_60C981B0 = CurrentStateID + 2;
  dword_60C981B4 = (int)nullsub_3554;
  dword_60C981B8 = 0;
  dword_60C981BC = (int)sub_603B6648;
  dword_60C981C0 = 0;
  dword_60C981C4 = (int)sub_603B67AC;
  dword_60C981C8 = 0;
  dword_60C981CC = (int)&off_60BF5CCC;
  unk_60C981D0 = CurrentStateID + 3;
  dword_60C981D4 = (int)sub_603B67F8;
  dword_60C981D8 = 0;
  dword_60C981DC = (int)sub_603B6820;
  dword_60C981E0 = 0;
  dword_60C981E4 = (int)sub_603B6964;
  dword_60C981E8 = 0;
  dword_60C981EC = (int)&off_60BF5CCC;
  unk_60C981F0 = CurrentStateID + 4;
  dword_60C981F4 = (int)sub_603B6980;
  dword_60C981F8 = 0;
  dword_60C981FC = (int)&loc_603B6A60;
  dword_60C98200 = 0;
  dword_60C98204 = (int)nullsub_3555;
  dword_60C98208 = 0;
  dword_60C9820C = (int)&off_60BF5CCC;
  unk_60C98210 = CurrentStateID + 5;
  dword_60C98214 = (int)nullsub_3556;
  dword_60C98218 = 0;
  dword_60C9821C = (int)sub_603B6B94;
  dword_60C98220 = 0;
  dword_60C98224 = (int)sub_603B6C6C;
  dword_60C98228 = 0;
  unk_60C9822C = &off_60BF5CCC;
  unk_60C98230 = CurrentStateID + 6;
  dword_60C98234 = (int)nullsub_3557;
  dword_60C98238 = 0;
  dword_60C9823C = (int)sub_603B6C80;
  dword_60C98240 = 0;
  dword_60C98244 = (int)nullsub_3558;
  dword_60C98248 = 0;
  v2 = CurrentStateID + 7;
  CurrentStateID += 8;
  dword_60C98250 = v2;
  dword_60C98254 = 612;
  dword_60C98258 = 1;
  dword_60C9825C = 616;
  dword_60C98260 = 1;
  dword_60C98264 = 620;
  dword_60C98268 = 1;
  dword_60C9824C = (int)&off_60BF5CE0;
  dword_60C9826C = (int)&Enemy_StateId_Frozen;
  unk_60C98274 = CurrentStateID;
  unk_60C98278 = 456;
  unk_60C9827C = 1;
  unk_60C98280 = 460;
  dword_60C98284 = 1;
  dword_60C98288 = 464;
  dword_60C9828C = 1;
  dword_60C98270 = (int)&off_60BF5CE0;
  dword_60C98290 = (int)&stru_60C90710;
  return &dword_60C98270;
}
