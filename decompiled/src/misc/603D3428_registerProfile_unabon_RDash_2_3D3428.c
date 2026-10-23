/* registerProfile_unabon_RDash_2_3D3428
 * address: 0x603D3428   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_unabon_RDash_2_3D3428()
{
  sead__SafeString v0[3]; // [sp+10h] [bp-18h] BYREF

  dword_60C98E44 = 0;
  dword_60C98E48 = 0;
  dword_60C98E4C = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC6056;
  Profile__ctor(&stru_60C98E50, Actor_unabon_RDash_2_build, 0x297u, v0, &stru_60B011E0, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC606B;
  Profile__ctor(&stru_60C98E68, Actor_unabon_RDash_2_build, 0x298u, v0, &stru_60B01204, 0);
}
