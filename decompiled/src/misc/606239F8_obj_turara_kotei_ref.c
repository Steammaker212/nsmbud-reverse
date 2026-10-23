/* obj_turara_kotei_ref
 * address: 0x606239F8   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *obj_turara_kotei_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-28h] BYREF

  dword_60CB3AF0[0] = 0;
  dword_60CB3AF4 = 0;
  dword_60CB3AF8 = 0;
  dword_60CB3AFC = (int)&sead__SafeStringBase__vtable;
  dword_60CB3B00 = (int)"obj_turara_kotei_S";
  dword_60CB3B04 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3B08 = (int)"obj_turara_kotei_L";
  sub_60000288();
  dword_60CB3B0C = (int)&sead__SafeStringBase__vtable;
  dword_60CB3B10 = (int)"obj_turara_kotei_S";
  dword_60CB3B14 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3B18 = (int)"obj_turara_kotei_L";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3ED5;
  Profile__ctor(&stru_60CB3AA4, FixedIcicle_ctor, 0x30Cu, &v1, &stru_60B068B8, 0);
  dword_60CB3AC0 = ++CurrentStateID;
  dword_60CB3ABC = (int)&off_60C11CD4;
  dword_60CB3AC4 = (int)nullsub_4934;
  dword_60CB3AC8 = 0;
  dword_60CB3ACC = (int)sub_60623BEC;
  dword_60CB3AD0 = 0;
  dword_60CB3AD4 = (int)nullsub_4935;
  dword_60CB3AD8 = 0;
  return &dword_60CB3ABC;
}
