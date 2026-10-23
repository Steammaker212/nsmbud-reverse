/* registerProfile_ZN5SpinyC3EPK14ActorBuil_3BBBB8
 * address: 0x603BBBB8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ZN5SpinyC3EPK14ActorBuil_3BBBB8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C982CC = 0;
  dword_60C982D0 = 0;
  dword_60C982D4 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5BF4;
  Profile__ctor(&stru_60C982D8, Spiny__ctor, 0x205u, &v0, &stru_60B00D34, 530);
}
