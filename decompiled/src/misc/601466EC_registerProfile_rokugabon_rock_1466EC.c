/* registerProfile_rokugabon_rock_1466EC
 * address: 0x601466EC   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_rokugabon_rock_1466EC())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C880B0 = 0;
  dword_60C880B4 = 0;
  dword_60C880B8 = 0;
  dword_60C880A0 = (int)(float)((float)(2147500000.0 * 4.5) / 180.0);
  dword_60C880A4 = (int)(float)((float)(2147500000.0 * 0.7) / 180.0);
  *(_DWORD *)algn_60C880A8 = (int)(float)((float)(2147500000.0 * 1.4) / 180.0);
  *(_DWORD *)&algn_60C880A8[4] = (int)(float)((float)(2147500000.0 * 0.9) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEDFC;
  Profile__ctor(&stru_60C88034, Actor_rokugabon_rock_build, 0x284u, &v1, &stru_60AF6A40, 160);
  dword_60C88050 = CurrentStateID + 1;
  dword_60C8804C = (int)&off_60BD3ED8;
  dword_60C88054 = (int)sub_60145D7C;
  dword_60C88058 = 0;
  dword_60C8805C = (int)SE_OBJ_ROCK_LAND_ref_2;
  dword_60C88060 = 0;
  dword_60C88064 = (int)nullsub_2874;
  dword_60C88068 = 0;
  CurrentStateID += 2;
  dword_60C88070 = CurrentStateID;
  dword_60C8806C = (int)&off_60BD3ED8;
  dword_60C88074 = (int)SE_OBJ_CMN_SPLASH_ref_145F6C;
  dword_60C88078 = 0;
  dword_60C8807C = (int)&loc_60145FEC;
  dword_60C88080 = 0;
  dword_60C88084 = (int)nullsub_2875;
  dword_60C88088 = 0;
  return nullsub_2875;
}
