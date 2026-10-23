/* registerProfile_akutaburokuRDash_567408
 * address: 0x60567408   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutaburokuRDash_567408()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD1426;
  Profile__ctor(&stru_60CAE410, Actor_akutaburokuRDash_build, 0x126u, v1, &stru_60B041FC, 4098);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD1445;
  Profile__ctor(&stru_60CAE428, Actor_akutaburokuRDash_build, 0x127u, v1, &stru_60B041FC, 4098);
  dword_60CAE444 = ++CurrentStateID;
  dword_60CAE448 = 404;
  dword_60CAE44C = 1;
  dword_60CAE450 = 408;
  dword_60CAE454 = 1;
  dword_60CAE458 = 412;
  dword_60CAE45C = 1;
  dword_60CAE440 = (int)&off_60C019EC;
  dword_60CAE460 = (int)&dword_60CAE2F8;
  return &dword_60CAE440;
}
