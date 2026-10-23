/* registerProfile_supinrotate_kinoko_child_665ECC
 * address: 0x60665ECC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_supinrotate_kinoko_child_665ECC()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5BC4;
  Profile__ctor(&stru_60CB6B94, Actor_supinrotate_kinoko_child_build, 0xC6u, &v1, &stru_60B0792C, 2);
  dword_60CB6BB0 = ++CurrentStateID;
  dword_60CB6BAC = (int)&off_60C14EDC;
  dword_60CB6BB4 = (int)nullsub_5080;
  dword_60CB6BB8 = 0;
  dword_60CB6BBC = (int)sub_606656FC;
  dword_60CB6BC0 = 0;
  dword_60CB6BC4 = (int)nullsub_5081;
  dword_60CB6BC8 = 0;
  return &dword_60CB6BAC;
}
