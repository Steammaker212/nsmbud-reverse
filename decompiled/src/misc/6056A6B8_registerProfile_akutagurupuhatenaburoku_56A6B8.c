/* registerProfile_akutagurupuhatenaburoku_56A6B8
 * address: 0x6056A6B8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutagurupuhatenaburoku_56A6B8()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD15DF;
  Profile__ctor(&stru_60CAE628, Actor_akutagurupuhatenaburoku_build, 0x128u, v0, &stru_60B042F8, 4098);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD160A;
  Profile__ctor(&stru_60CAE640, Actor_akutagurupuhatenaburoku_build, 0x12Au, v0, &stru_60B0431C, 4098);
}
