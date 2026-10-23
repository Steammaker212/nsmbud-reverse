/* registerProfile_parentchild_obuje_child_6A8CA0
 * address: 0x606A8CA0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_parentchild_obuje_child_6A8CA0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB9D50 = 0;
  dword_60CB9D54 = 0;
  dword_60CB9D58 = 0;
  memset(algn_60CB9D5C, 0, sizeof(algn_60CB9D5C));
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD726F;
  Profile__ctor(&stru_60CB9D28, Actor_parentchild_obuje_child_build, 0x3Cu, &v0, &stru_60B08520, 0);
}
