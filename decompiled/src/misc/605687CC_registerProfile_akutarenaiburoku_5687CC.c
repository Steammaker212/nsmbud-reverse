/* registerProfile_akutarenaiburoku_5687CC
 * address: 0x605687CC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutarenaiburoku_5687CC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CAE51C = 0;
  dword_60CAE518 = 0;
  dword_60CAE514 = 0;
  dword_60CAE510 = 0;
  dword_60CAE520 = -1056964608;
  dword_60CAE524 = 1090519040;
  dword_60CAE528 = 1090519040;
  dword_60CAE52C = -1056964608;
  dword_60CAE530 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD14B3;
  Profile__ctor(&stru_60CAE534, Actor_akutarenaiburoku_build, 0xF6u, &v0, &stru_60B04244, 4098);
}
