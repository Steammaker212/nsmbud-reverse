/* registerProfile_gabon_RDash_2B9650
 * address: 0x602B9650   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gabon_RDash_2B9650()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C91068 = 0;
  dword_60C9106C = 0;
  dword_60C91070 = 0;
  dword_60C91060 = 0x20000000;
  *(_DWORD *)algn_60C91064 = (int)(float)((float)(2147500000.0 * 17.85) / 180.0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC39B9;
  Profile__ctor(&stru_60C9101C, Actor_gabon_RDash_build, 0x27Eu, v0, &stru_60AFE6B0, 18);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC39C3;
  Profile__ctor(&stru_60C91034, Actor_gabon_RDash_build, 0x27Fu, v0, &stru_60AFE6B0, 18);
}
