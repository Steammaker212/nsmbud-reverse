/* togezo_ref_3BE040
 * address: 0x603BE040   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall togezo_ref_3BE040(int a1)
{
  int v2; // r5
  int Resource; // r0
  _DWORD v5[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = **(_DWORD **)(FIELD_U32(a1, 6824) + 12);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "togezo";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "walk";
  SkeletalAnim_play(v2, Resource, (int)v5);
  return ShellEnemy__vf328((StateActor *)a1);
}
