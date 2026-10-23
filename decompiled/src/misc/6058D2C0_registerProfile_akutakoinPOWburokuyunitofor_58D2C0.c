/* registerProfile_akutakoinPOWburokuyunitofor_58D2C0
 * address: 0x6058D2C0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutakoinPOWburokuyunitofor_58D2C0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1EB5;
  Profile__ctor(&stru_60CAF44C, Actor_akutakoinPOWburokuyunitofor_build, 0x1A6u, &v1, &stru_60B04B94, 8194);
  dword_60CAF468 = ++CurrentStateID;
  dword_60CAF464 = (int)&off_60C06C74;
  dword_60CAF46C = (int)sub_6058CD08;
  dword_60CAF470 = 0;
  dword_60CAF474 = (int)sub_6058CDB0;
  dword_60CAF478 = 0;
  dword_60CAF47C = (int)nullsub_4671;
  dword_60CAF480 = 0;
  return &dword_60CAF464;
}
