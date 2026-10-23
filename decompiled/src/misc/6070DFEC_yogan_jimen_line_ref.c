/* yogan_jimen_line_ref
 * address: 0x6070DFEC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void yogan_jimen_line_ref()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CBCB7C = (int)&sead__SafeStringBase__vtable;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  dword_60CBCB80 = (int)"yogan_jimen_line";
  v0[0].cstr = (char *)&unk_60AD893D;
  Profile__ctor(&stru_60CBCB84, Actor_lava_level_RDash_build, 0xFCu, v0, &stru_60B09C98, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD894A;
  Profile__ctor(&stru_60CBCB9C, Actor_lava_level_RDash_build, 0xFDu, v0, &stru_60B09C98, 2);
}
