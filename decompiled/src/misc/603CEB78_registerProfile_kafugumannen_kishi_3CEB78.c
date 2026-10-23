/* registerProfile_kafugumannen_kishi_3CEB78
 * address: 0x603CEB78   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kafugumannen_kishi_3CEB78()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C98BD8 = 0;
  dword_60C98BDC = 0;
  dword_60C98BE0 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC5EAE;
  Profile__ctor(&stru_60C98BE4, Actor_kafugumannen_kishi_build, 0x227u, v0, &stru_60B010B0, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC5ECF;
  Profile__ctor(&stru_60C98BFC, Actor_kafugumannen_kishi_build, 0x228u, v0, &stru_60B010B0, 0);
}
