/* registerProfile_BanzaiBill_ctor_32AEF8
 * address: 0x6032AEF8   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_BanzaiBill_ctor_32AEF8()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C93C60 = 0;
  dword_60C93C64 = 0;
  dword_60C93C68 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC4A0D;
  Profile__ctor(&stru_60C93C6C, BanzaiBill_ctor, 0x276u, &v2, &stru_60AFF810, 18);
  *v0 = &off_60BEBA38;
  dword_60C93C88 = ++CurrentStateID;
  dword_60C93C84 = (int)&off_60BEBCD4;
  dword_60C93C8C = (int)sub_6032A770;
  dword_60C93C90 = 0;
  dword_60C93C94 = (int)SE_EMY_MG_KILLER_FLY_ref;
  dword_60C93C98 = 0;
  dword_60C93C9C = (int)nullsub_3350;
  dword_60C93CA0 = 0;
  return &dword_60C93C84;
}
