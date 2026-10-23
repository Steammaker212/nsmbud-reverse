/* registerProfile_rimokonshisoLift_64EEB0
 * address: 0x6064EEB0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_rimokonshisoLift_64EEB0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5674;
  Profile__ctor(&stru_60CB60F0, Actor_rimokonshisoLift_build, 0xF3u, &v1, &stru_60B07580, 2);
  dword_60CB6108 = 0x8000000;
  dword_60CB6110 = ++CurrentStateID;
  dword_60CB610C = (int)&off_60C13ECC;
  dword_60CB6114 = (int)sub_6064DF00;
  dword_60CB6118 = 0;
  dword_60CB611C = (int)SE_OBJ_RC_CONTROL_ON_ref_2;
  dword_60CB6120 = 0;
  dword_60CB6124 = (int)nullsub_5023;
  dword_60CB6128 = 0;
  return &dword_60CB610C;
}
