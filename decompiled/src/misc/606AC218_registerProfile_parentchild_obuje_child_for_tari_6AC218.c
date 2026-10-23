/* registerProfile_parentchild_obuje_child_for_tari_6AC218
 * address: 0x606AC218   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_parentchild_obuje_child_for_tari_6AC218()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB9FC4 = 0;
  dword_60CB9FC8 = 0;
  dword_60CB9FCC = 0;
  dword_60CB9FD0 = 0;
  dword_60CB9FD4 = 167026505;
  dword_60CB9FD8 = 0x10000000;
  dword_60CB9FDC = 405635800;
  dword_60CB9FE0 = 0x20000000;
  dword_60CB9FE4 = -167026506;
  dword_60CB9FE8 = -268435456;
  dword_60CB9FEC = -405635801;
  dword_60CB9FF0 = -536870912;
  dword_60CBA004 = 0;
  dword_60CBA008 = 0;
  dword_60CBA00C = 0;
  dword_60CBA000 = 0;
  dword_60CB9FFC = 0;
  dword_60CB9FF8 = 0;
  dword_60CB9FF4 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD732F;
  Profile__ctor(&stru_60CB9EA0, Actor_parentchild_obuje_child_for_tari_build, 0x4Bu, &v0, &stru_60B0856C, 0);
}
