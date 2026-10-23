/* registerProfile_akutakoinjugemu_580AEC
 * address: 0x60580AEC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_akutakoinjugemu_580AEC())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CAF004 = 0;
  dword_60CAF008 = 0;
  dword_60CAF00C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクターコインジュゲム";
  Profile__ctor(&stru_60CAF010, Actor_akutakoinjugemu_build, 0x19Au, &v1, &stru_60B04938, 8198);
  dword_60CAF02C = CurrentStateID + 1;
  dword_60CAF028 = (int)&off_60C05800;
  dword_60CAF030 = (int)nullsub_4654;
  dword_60CAF034 = 0;
  dword_60CAF038 = (int)sub_60580368;
  dword_60CAF03C = 0;
  dword_60CAF040 = (int)sub_60580390;
  dword_60CAF044 = 0;
  CurrentStateID += 2;
  dword_60CAF04C = CurrentStateID;
  dword_60CAF048 = (int)&off_60C05800;
  dword_60CAF050 = (int)sub_605803A0;
  dword_60CAF054 = 0;
  dword_60CAF058 = (int)sub_6058041C;
  dword_60CAF05C = 0;
  dword_60CAF060 = (int)nullsub_4655;
  dword_60CAF064 = 0;
  return nullsub_4655;
}
