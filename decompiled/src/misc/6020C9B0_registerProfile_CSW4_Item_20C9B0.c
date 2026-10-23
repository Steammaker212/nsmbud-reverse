/* registerProfile_CSW4_Item_20C9B0
 * address: 0x6020C9B0   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_CSW4_Item_20C9B0()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C8CD98 = 0;
  dword_60C8CD9C = 0;
  dword_60C8CDA0 = 0;
  dword_60C8CDA4 = 1103626240;
  dword_60C8CDA8 = 0;
  dword_60C8CDAC = 1101004800;
  dword_60C8CDB0 = 0;
  dword_60C8CD90 = (int)&sead__SafeStringBase__vtable;
  dword_60C8CD94 = (int)"wait2";
  dword_60C8CC2C = (int)&sead__SafeStringBase__vtable;
  dword_60C8CC30 = (int)"wait";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1EE6;
  Profile__ctor(&stru_60C8CC34, Actor_CSW4_Item_build, 0x382u, &v2, 0, 0);
  *v0 = &off_60BD8CDC;
  dword_60C8CC50 = CurrentStateID + 1;
  dword_60C8CC4C = (int)&off_60BD8D88;
  dword_60C8CC54 = (int)nullsub_3039;
  dword_60C8CC58 = 0;
  dword_60C8CC5C = (int)sub_6020CE80;
  dword_60C8CC60 = 0;
  dword_60C8CC64 = (int)nullsub_3040;
  dword_60C8CC68 = 0;
  unk_60C8CC6C = &off_60BD8D88;
  unk_60C8CC70 = CurrentStateID + 2;
  dword_60C8CC74 = (int)sub_6020CEAC;
  dword_60C8CC78 = 0;
  dword_60C8CC7C = (int)sub_6020CF24;
  dword_60C8CC80 = 0;
  dword_60C8CC84 = (int)nullsub_3041;
  dword_60C8CC88 = 0;
  unk_60C8CC8C = &off_60BD8D88;
  unk_60C8CC90 = CurrentStateID + 3;
  dword_60C8CC94 = (int)sub_6020CF60;
  dword_60C8CC98 = 0;
  dword_60C8CC9C = (int)sub_6020D000;
  dword_60C8CCA0 = 0;
  dword_60C8CCA4 = (int)nullsub_3042;
  dword_60C8CCA8 = 0;
  stru_60C8CCAC.vtable = &off_60BD8D88;
  stru_60C8CCAC.id = CurrentStateID + 4;
  dword_60C8CCB4 = (int)nullsub_3043;
  dword_60C8CCB8 = 0;
  dword_60C8CCBC = (int)nullsub_3044;
  dword_60C8CCC0 = 0;
  dword_60C8CCC4 = (int)nullsub_3045;
  dword_60C8CCC8 = 0;
  unk_60C8CCCC = &off_60BD8D88;
  unk_60C8CCD0 = CurrentStateID + 5;
  dword_60C8CCD4 = (int)nullsub_3046;
  dword_60C8CCD8 = 0;
  dword_60C8CCDC = (int)sub_6020D15C;
  dword_60C8CCE0 = 0;
  dword_60C8CCE4 = (int)nullsub_3047;
  dword_60C8CCE8 = 0;
  unk_60C8CCEC = &off_60BD8D88;
  unk_60C8CCF0 = CurrentStateID + 6;
  dword_60C8CCF4 = (int)nullsub_3048;
  dword_60C8CCF8 = 0;
  dword_60C8CCFC = (int)sub_6020D1A0;
  dword_60C8CD00 = 0;
  dword_60C8CD04 = (int)nullsub_3049;
  dword_60C8CD08 = 0;
  dword_60C8CD0C = (int)&off_60BD8D88;
  unk_60C8CD10 = CurrentStateID + 7;
  dword_60C8CD14 = (int)sub_6020D284;
  dword_60C8CD18 = 0;
  dword_60C8CD1C = (int)&loc_6020D2A8;
  dword_60C8CD20 = 0;
  dword_60C8CD24 = (int)sub_6020D4D0;
  dword_60C8CD28 = 0;
  dword_60C8CD2C = (int)&off_60BD8D88;
  unk_60C8CD30 = CurrentStateID + 8;
  dword_60C8CD34 = (int)sub_6020D4EC;
  dword_60C8CD38 = 0;
  dword_60C8CD3C = (int)sub_6020D5BC;
  dword_60C8CD40 = 0;
  dword_60C8CD44 = (int)nullsub_161;
  dword_60C8CD48 = 0;
  dword_60C8CD4C = (int)&off_60BD8D88;
  unk_60C8CD50 = CurrentStateID + 9;
  CurrentStateID += 10;
  dword_60C8CD70 = CurrentStateID;
  dword_60C8CD54 = (int)sub_6020D600;
  dword_60C8CD6C = (int)&off_60BD8D88;
  dword_60C8CD58 = 0;
  dword_60C8CD74 = (int)sub_6020D658;
  dword_60C8CD5C = (int)nullsub_3050;
  dword_60C8CD78 = 0;
  dword_60C8CD60 = 0;
  dword_60C8CD7C = (int)sub_6020D704;
  dword_60C8CD64 = (int)nullsub_3051;
  dword_60C8CD68 = 0;
  dword_60C8CD80 = 0;
  dword_60C8CD84 = (int)nullsub_3052;
  dword_60C8CD88 = 0;
  return &dword_60C8CD6C;
}
