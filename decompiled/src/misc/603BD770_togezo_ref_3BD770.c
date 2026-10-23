/* togezo_ref_3BD770
 * address: 0x603BD770   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall togezo_ref_3BD770(int a1)
{
  int v1; // r4
  int Resource; // r0
  _DWORD v4[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v5[6]; // [sp+8h] [bp-18h] BYREF

  v1 = **(_DWORD **)(FIELD_U32(a1, 6824) + 12);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "togezo";
  Resource = LoadResource(ResourceMgrRelated_instance, v5);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "walk";
  return SkeletalAnim_play(v1, Resource, (int)v4);
}
