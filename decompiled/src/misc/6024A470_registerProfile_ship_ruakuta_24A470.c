/* registerProfile_ship_ruakuta_24A470
 * address: 0x6024A470   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_ship_ruakuta_24A470()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8DC68 = 0;
  dword_60C8DC6C = 0;
  dword_60C8DC70 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC26B1;
  Profile__ctor(&stru_60C8DC74, Actor_ship_ruakuta_build, 0x1D2u, &v1, &stru_60AFD700, 18);
  dword_60C8DC90 = CurrentStateID + 1;
  dword_60C8DC8C = (int)&off_60BD9F38;
  dword_60C8DC94 = (int)sub_60248F30;
  dword_60C8DC98 = 0;
  dword_60C8DC9C = (int)SE_OBJ_BALLOON_BREAK_ref;
  dword_60C8DCA0 = 0;
  dword_60C8DCA4 = (int)nullsub_3084;
  dword_60C8DCA8 = 0;
  dword_60C8DCB0 = CurrentStateID + 2;
  dword_60C8DCAC = (int)&off_60BD9F38;
  dword_60C8DCB4 = (int)SE_OBJ_BALLOON_BREAK_ref_24919C;
  dword_60C8DCB8 = 0;
  dword_60C8DCBC = (int)sub_60249288;
  dword_60C8DCC0 = 0;
  dword_60C8DCC4 = (int)nullsub_3085;
  dword_60C8DCC8 = 0;
  CurrentStateID += 3;
  dword_60C8DCD0 = CurrentStateID;
  dword_60C8DCD4 = 456;
  dword_60C8DCD8 = 1;
  dword_60C8DCDC = 460;
  dword_60C8DCE0 = 1;
  dword_60C8DCE4 = 464;
  dword_60C8DCE8 = 1;
  dword_60C8DCCC = (int)&off_60BD9F4C;
  dword_60C8DCEC = (int)&stru_60C90710;
  return &stru_60C90710;
}
