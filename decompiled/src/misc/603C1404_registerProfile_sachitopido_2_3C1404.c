/* registerProfile_sachitopido_2_3C1404
 * address: 0x603C1404   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_sachitopido_2_3C1404()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  sead__SafeString v3[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C98544 = 0;
  dword_60C98548 = 0;
  dword_60C9854C = 0;
  v3[0].vtable = &sead__SafeStringBase__vtable;
  v3[0].cstr = (char *)&unk_60AC5C36;
  Profile__ctor(&stru_60C98550, Actor_sachitopido_2_build, 0x32Du, v3, &stru_60B00DD4, 2);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BF6764;
  v3[0].cstr = (char *)&unk_60AC5C4C;
  Profile__ctor(&stru_60C98568, Actor_sachitopido_2_build, 0x32Eu, v3, &stru_60B00DD4, 2);
  *v1 = &off_60BF6770;
  dword_60C98584 = CurrentStateID + 1;
  dword_60C98580 = (int)&off_60BF69F4;
  dword_60C98588 = (int)torpedobase_fire_l_ref;
  dword_60C9858C = 0;
  dword_60C98590 = (int)&loc_603C045C;
  dword_60C98594 = 0;
  dword_60C98598 = (int)nullsub_3561;
  dword_60C9859C = 0;
  unk_60C985A0 = &off_60BF69F4;
  unk_60C985A4 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C985C4 = CurrentStateID;
  dword_60C985A8 = (int)torpedobase_fire_ref;
  dword_60C985C0 = (int)&off_60BF69F4;
  dword_60C985AC = 0;
  dword_60C985C8 = (int)torpedobase_rtrn_ref;
  dword_60C985B0 = (int)sub_603C085C;
  dword_60C985CC = 0;
  dword_60C985B4 = 0;
  dword_60C985D0 = (int)sub_603C0944;
  dword_60C985B8 = (int)nullsub_3562;
  dword_60C985BC = 0;
  dword_60C985D4 = 0;
  dword_60C985D8 = (int)nullsub_3563;
  dword_60C985DC = 0;
  return &dword_60C985C0;
}
