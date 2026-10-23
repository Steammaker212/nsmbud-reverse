/* boss_shutter_koopa_ref
 * address: 0x600D6CEC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *boss_shutter_koopa_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABD25A;
  Profile__ctor(&stru_60C843A0, BowserShutter__ctor, 0x109u, &v1, &stru_60AF5C1C, 2);
  dword_60C843BC = CurrentStateID + 1;
  dword_60C843B8 = (int)&off_60BCBBD4;
  dword_60C843C0 = (int)nullsub_2734;
  dword_60C843C4 = 0;
  dword_60C843C8 = (int)SE_AMB_BROOM_W8_ref;
  dword_60C843CC = 0;
  dword_60C843D0 = (int)nullsub_2735;
  dword_60C843D4 = 0;
  dword_60C843D8 = (int)&off_60BCBBD4;
  *(_DWORD *)algn_60C843DC = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C843FC = CurrentStateID;
  dword_60C843F8 = (int)&off_60BCBBD4;
  dword_60C843E0 = (int)SE_OBJ_KROOM_SHUTTER_CLOSE_ref;
  dword_60C843E4 = 0;
  dword_60C84400 = (int)SE_OBJ_KROOM_SHUTTER_OPEN_ref;
  dword_60C84404 = 0;
  dword_60C843E8 = (int)sub_600D63B0;
  dword_60C843EC = 0;
  dword_60C84408 = (int)sub_600D64FC;
  dword_60C8440C = 0;
  dword_60C843F0 = (int)sub_600D645C;
  dword_60C843F4 = 0;
  dword_60C84410 = (int)nullsub_2736;
  dword_60C84414 = 0;
  dword_60C84420 = (int)&sead__SafeStringBase__vtable;
  unk_60C84424 = "boss_shutter_koopa";
  unk_60C84428 = &sead__SafeStringBase__vtable;
  dword_60C8442C = (int)"boss_shutter_koopa";
  dword_60C84430 = 1107296256;
  dword_60C84434 = 1119879168;
  return &dword_60C84420;
}
