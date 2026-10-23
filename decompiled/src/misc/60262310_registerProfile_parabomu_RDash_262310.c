/* registerProfile_parabomu_RDash_262310
 * address: 0x60262310   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_parabomu_RDash_262310()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C8E410 = 0;
  dword_60C8E414 = 0;
  dword_60C8E418 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC29D3;
  Profile__ctor(&stru_60C8E41C, Actor_parabomu_RDash_build, 0x20Au, v1, &stru_60AFD930, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC29E3;
  Profile__ctor(&stru_60C8E434, Actor_parabomu_RDash_build, 0x20Bu, v1, &stru_60AFD954, 18);
  dword_60C8E450 = CurrentStateID + 1;
  dword_60C8E44C = (int)&off_60BDB544;
  dword_60C8E454 = (int)sub_602614F8;
  dword_60C8E458 = 0;
  dword_60C8E45C = (int)sub_602615B4;
  dword_60C8E460 = 0;
  dword_60C8E464 = (int)sub_60261664;
  dword_60C8E468 = 0;
  unk_60C8E46C = &off_60BDB544;
  unk_60C8E470 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C8E490 = CurrentStateID;
  dword_60C8E474 = (int)para_receive_ref;
  dword_60C8E48C = (int)&off_60BDB544;
  dword_60C8E478 = 0;
  dword_60C8E494 = (int)sub_602617AC;
  dword_60C8E47C = (int)sub_60261720;
  dword_60C8E498 = 0;
  dword_60C8E480 = 0;
  dword_60C8E49C = (int)sub_602617EC;
  dword_60C8E484 = (int)sub_6026179C;
  dword_60C8E488 = 0;
  dword_60C8E4A0 = 0;
  dword_60C8E4A4 = (int)sub_602617F0;
  dword_60C8E4A8 = 0;
  return &dword_60C8E48C;
}
