/* registerProfile_PlayerFireball_ctor_13B948
 * address: 0x6013B948   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_PlayerFireball_ctor_13B948()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABEC46;
  Profile__ctor(&stru_60C87B30, PlayerFireball_ctor, 0x1DCu, &v2, &stru_60AF67B0, 130);
  *v0 = &off_60BD2A40;
  dword_60C87B4C = ++CurrentStateID;
  dword_60C87B50 = 192;
  dword_60C87B54 = 1;
  dword_60C87B58 = 196;
  dword_60C87B5C = 1;
  dword_60C87B60 = 200;
  dword_60C87B64 = 1;
  dword_60C87B48 = (int)&off_60BD2BB0;
  dword_60C87B68 = (int)&stru_60C877D8;
  return &dword_60C87B48;
}
