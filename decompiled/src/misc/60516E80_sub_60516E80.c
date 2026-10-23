/* sub_60516E80
 * address: 0x60516E80   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60516E80(int *a1)
{
  int v2; // r2
  int v3; // r5
  int (**v5)(); // [sp+0h] [bp-20h] BYREF
  const char *v6; // [sp+4h] [bp-1Ch]

  v2 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v2 = dword_60C99DEC + 16;
  v3 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(v2, 564))[18];
  v5 = &sead__SafeStringBase__vtable;
  v6 = "PreGameChallengeTime_Text_00";
  sub_6047E0EC(&v5, a1[917], 1, v3);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "PreGameChallengeTime_Text_00";
  sub_6047E0EC(&v5, a1[916], 1, v3);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "PreGameChallengeTime_Gold_00";
  sub_6047E0EC(&v5, a1[911], 1, v3);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "PreGameChallengeTime_Silver_00";
  sub_6047E0EC(&v5, a1[912], 1, v3);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "PreGameChallengeTime_Bronze_00";
  sub_6047E0EC(&v5, a1[913], 1, v3);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "PreGameChallengeTime_Title_00";
  sub_6047E0EC(&v5, a1[915], 1, v3);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "PreGameChallengeTime_Title_00";
  return sub_6047E0EC(&v5, a1[914], 1, v3);
}
