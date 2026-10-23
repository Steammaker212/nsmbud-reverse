/* registerProfile_rokugabon_37B0B4
 * address: 0x6037B0B4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rokugabon_37B0B4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C96678 = 119304647;
  dword_60C9667C = 0;
  dword_60C96680 = 0;
  dword_60C96684 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC556C;
  Profile__ctor(&stru_60C96658, Actor_rokugabon_build, 0x282u, &v0, &stru_60B00658, 18);
}
