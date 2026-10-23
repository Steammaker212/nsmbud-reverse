/* lift_trampoline_ref_6ED7CC
 * address: 0x606ED7CC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_trampoline_ref_6ED7CC(int a1)
{
  int result; // r0
  int v3; // r5
  int Resource; // r0
  int v5; // r0
  _DWORD v6[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v7[6]; // [sp+8h] [bp-18h] BYREF

  result = FIELD_U8(a1, 85);
  if ( !result )
  {
    v3 = FIELD_U32(a1, 4);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "lift_trampoline";
    Resource = LoadResource(ResourceMgrRelated_instance, v7);
    v6[0] = &sead__SafeStringBase__vtable;
    v6[1] = "paku";
    TexAnim_play(v3, Resource, v6);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 4) + 4), 0);
    v5 = FIELD_U32(a1, 4);
    FIELD_U32(v5, 20) = 0;
    FIELD_U32(v5, 28) |= 2u;
    result = FIELD_U32(a1, 4);
    FIELD_U32(result, 24) = 1065353216;
  }
  return result;
}
