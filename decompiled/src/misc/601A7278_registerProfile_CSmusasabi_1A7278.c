/* registerProfile_CSmusasabi_1A7278
 * address: 0x601A7278   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateBase *registerProfile_CSmusasabi_1A7278()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C8A260 = 0;
  dword_60C8A264 = 0;
  dword_60C8A268 = 0;
  dword_60C8A26C = 1103626240;
  dword_60C8A270 = 0;
  dword_60C8A274 = 1106247680;
  dword_60C8A278 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABFBC0;
  Profile__ctor(&stru_60C8A134, Actor_CSmusasabi_build, 0x37Du, &v2, 0, 0);
  *v0 = &off_60BD6008;
  dword_60C8A150 = CurrentStateID + 1;
  dword_60C8A14C = (int)&off_60BD60D8;
  dword_60C8A154 = (int)sub_601A5DA4;
  dword_60C8A158 = 0;
  dword_60C8A15C = (int)sub_601A5E30;
  dword_60C8A160 = 0;
  dword_60C8A164 = (int)nullsub_2938;
  dword_60C8A168 = 0;
  stru_60C8A16C.vtable = &off_60BD60D8;
  stru_60C8A16C.id = CurrentStateID + 2;
  dword_60C8A174 = (int)roll_tate_ref;
  dword_60C8A178 = 0;
  dword_60C8A17C = (int)sub_601A602C;
  dword_60C8A180 = 0;
  dword_60C8A184 = (int)sub_601A6328;
  dword_60C8A188 = 0;
  unk_60C8A18C = &off_60BD60D8;
  unk_60C8A190 = CurrentStateID + 3;
  dword_60C8A194 = (int)sub_601A6348;
  dword_60C8A198 = 0;
  dword_60C8A19C = (int)sub_601A639C;
  dword_60C8A1A0 = 0;
  dword_60C8A1A4 = (int)nullsub_2939;
  dword_60C8A1A8 = 0;
  stru_60C8A1AC.vtable = &off_60BD60D8;
  stru_60C8A1AC.id = CurrentStateID + 4;
  dword_60C8A1B4 = (int)nullsub_2940;
  dword_60C8A1B8 = 0;
  dword_60C8A1BC = (int)sub_601A63D0;
  dword_60C8A1C0 = 0;
  dword_60C8A1C4 = (int)nullsub_2941;
  dword_60C8A1C8 = 0;
  stru_60C8A1CC.vtable = &off_60BD60D8;
  stru_60C8A1CC.id = CurrentStateID + 5;
  dword_60C8A1D4 = (int)sub_601A655C;
  dword_60C8A1D8 = 0;
  dword_60C8A1DC = (int)sub_601A65B0;
  dword_60C8A1E0 = 0;
  dword_60C8A1E4 = (int)nullsub_2942;
  dword_60C8A1E8 = 0;
  stru_60C8A1EC.vtable = &off_60BD60D8;
  stru_60C8A1EC.id = CurrentStateID + 6;
  dword_60C8A1F4 = (int)sub_601A65EC;
  dword_60C8A1F8 = 0;
  dword_60C8A1FC = (int)nullsub_2943;
  dword_60C8A200 = 0;
  dword_60C8A204 = (int)nullsub_2944;
  dword_60C8A208 = 0;
  dword_60C8A20C = (int)&off_60BD60D8;
  unk_60C8A210 = CurrentStateID + 7;
  dword_60C8A214 = (int)sub_601A6644;
  dword_60C8A218 = 0;
  dword_60C8A21C = (int)sub_601A66DC;
  dword_60C8A220 = 0;
  dword_60C8A224 = (int)nullsub_2945;
  dword_60C8A228 = 0;
  CurrentStateID += 8;
  dword_60C8A230 = CurrentStateID;
  dword_60C8A234 = 160;
  dword_60C8A238 = 1;
  dword_60C8A23C = 164;
  dword_60C8A240 = 1;
  dword_60C8A244 = 168;
  dword_60C8A248 = 1;
  dword_60C8A22C = (int)&off_60BD60EC;
  dword_60C8A24C = (int)&NullState;
  return &NullState;
}
