/* registerProfile_Poison_ctor_5AA67C
 * address: 0x605AA67C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Poison_ctor_5AA67C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD224F;
  Profile__ctor(&stru_60CB011C, Poison_ctor, 0x56u, &v1, &stru_60B04FA4, 0);
  dword_60CB0138 = ++CurrentStateID;
  dword_60CB013C = 224;
  dword_60CB0140 = 1;
  dword_60CB0144 = 228;
  dword_60CB0148 = 1;
  dword_60CB014C = 232;
  dword_60CB0150 = 1;
  dword_60CB0134 = (int)&off_60C0876C;
  dword_60CB0154 = (int)&dword_60CB002C;
  return &dword_60CB0134;
}
