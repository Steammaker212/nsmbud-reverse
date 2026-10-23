/* registerProfile_kishibakubaku_3CDB58
 * address: 0x603CDB58   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_kishibakubaku_3CDB58())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5E95;
  Profile__ctor(&stru_60C98B20, Actor_kishibakubaku_build, 0x2A1u, &v1, &stru_60B01068, 2);
  dword_60C98B3C = CurrentStateID + 1;
  dword_60C98B38 = (int)&off_60BF7774;
  dword_60C98B40 = (int)sub_603CD740;
  dword_60C98B44 = 0;
  dword_60C98B48 = (int)sub_603CD750;
  dword_60C98B4C = 0;
  dword_60C98B50 = (int)nullsub_3575;
  dword_60C98B54 = 0;
  CurrentStateID += 2;
  dword_60C98B5C = CurrentStateID;
  dword_60C98B58 = (int)&off_60BF7774;
  dword_60C98B60 = (int)sub_603CD7C8;
  dword_60C98B64 = 0;
  dword_60C98B68 = (int)sub_603CD7E8;
  dword_60C98B6C = 0;
  dword_60C98B70 = (int)nullsub_3576;
  dword_60C98B74 = 0;
  return nullsub_3576;
}
