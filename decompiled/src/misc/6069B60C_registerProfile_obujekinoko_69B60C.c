/* registerProfile_obujekinoko_69B60C
 * address: 0x6069B60C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_obujekinoko_69B60C()
{
  sead__SafeString v0; // [sp+10h] [bp-18h] BYREF

  dword_60CB9554[0] = 0;
  dword_60CB9558 = 0;
  dword_60CB955C = 16;
  dword_60CB9560 = 0x10000;
  dword_60CB9564 = 0x8000000;
  dword_60CB9568 = 0x200000;
  dword_60CB956C = 0x100000;
  dword_60CB9570 = 0x800000;
  dword_60CB9574 = 0;
  unk_60CB9578 = 0;
  unk_60CB957C = 16;
  unk_60CB9580 = 0x10000;
  dword_60CB9584 = 0x8000000;
  dword_60CB9588 = 0x80000;
  dword_60CB958C = 0x100000;
  dword_60CB9590 = 0x400000;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6C0E;
  Profile__ctor(&stru_60CB9594, Actor_obujekinoko_build, 0x50u, &v0, (ActorInfo *)dword_60B08058, 0);
}
