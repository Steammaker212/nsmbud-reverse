/* registerProfile_Quicksand_ctor_5AB160
 * address: 0x605AB160   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Quicksand_ctor_5AB160()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD22A5;
  Profile__ctor(&stru_60CB0160, Quicksand_ctor, 0x57u, &v1, &stru_60B04FC8, 0);
  dword_60CB017C = ++CurrentStateID;
  dword_60CB0180 = 224;
  dword_60CB0184 = 1;
  dword_60CB0188 = 228;
  dword_60CB018C = 1;
  dword_60CB0190 = 232;
  dword_60CB0194 = 1;
  dword_60CB0178 = (int)&off_60C08874;
  dword_60CB0198 = (int)&dword_60CB002C;
  return &dword_60CB0178;
}
