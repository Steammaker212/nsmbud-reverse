/* registerProfile_akutakoinHOPjanpu_5801F8
 * address: 0x605801F8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutakoinHOPjanpu_5801F8()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクターコインＨＯＰジャンプ";
  Profile__ctor(&stru_60CAEFC4, Actor_akutakoinHOPjanpu_build, 0x190u, &v1, &stru_60B04914, 2);
  dword_60CAEFE0 = ++CurrentStateID;
  dword_60CAEFDC = (int)&off_60C05660;
  dword_60CAEFE4 = (int)nullsub_4652;
  dword_60CAEFE8 = 0;
  dword_60CAEFEC = (int)sub_6057FEC4;
  dword_60CAEFF0 = 0;
  dword_60CAEFF4 = (int)nullsub_4653;
  dword_60CAEFF8 = 0;
  return &dword_60CAEFDC;
}
