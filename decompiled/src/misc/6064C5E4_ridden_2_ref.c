/* ridden_2_ref
 * address: 0x6064C5E4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float ridden_2_ref()
{
  _DWORD *v0; // r0
  sead__SafeString v2[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB608C = 0;
  dword_60CB6090 = 0;
  dword_60CB6094 = 0;
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AD55BF;
  Profile__ctor(&stru_60CB6098, Actor_rimokonLift_RDash_build, 0x168u, v2, &stru_60B0754C, 2);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60C13BD0;
  v2[0].cstr = (char *)&unk_60AD55E1;
  Profile__ctor(&stru_60CB60B0, Actor_rimokonLift_RDash_build, 0x169u, v2, &stru_60B0754C, 2);
  dword_60CB60C8 = (int)&sead__SafeStringBase__vtable;
  unk_60CB60CC = "ridden";
  unk_60CB60D0 = &sead__SafeStringBase__vtable;
  dword_60CB60D4 = (int)"ridden_2";
  sub_60000288();
  dword_60CB60D8 = 1051092582;
  dword_60CB60DC = -1096391066;
  unk_60CB60E0 = 0.325 * 1.5;
  unk_60CB60E4 = -0.325 * 1.5;
  return -0.325 * 1.5;
}
