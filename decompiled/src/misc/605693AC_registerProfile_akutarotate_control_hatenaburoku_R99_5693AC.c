/* registerProfile_akutarotate_control_hatenaburoku_R99_5693AC
 * address: 0x605693AC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutarotate_control_hatenaburoku_R99_5693AC()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD1537;
  Profile__ctor(&stru_60CAE58C, Actor_akutarotate_control_hatenaburoku_R99_build, 0x12Cu, v0, &stru_60B0428C, 6);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD1565;
  Profile__ctor(&stru_60CAE5A4, Actor_akutarotate_control_hatenaburoku_R99_build, 0x12Du, v0, &stru_60B0428C, 6);
}
