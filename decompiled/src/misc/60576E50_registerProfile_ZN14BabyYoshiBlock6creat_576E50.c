/* registerProfile_ZN14BabyYoshiBlock6creat_576E50
 * address: 0x60576E50   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ZN14BabyYoshiBlock6creat_576E50()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CAEBE0 = 0;
  dword_60CAEBE4 = 0;
  dword_60CAEBE8 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "子ヨッシー用ブロック";
  Profile__ctor(&stru_60CAEBEC, BabyYoshiBlock__create, 0x13Cu, &v0, &stru_60B04694, 4098);
}
