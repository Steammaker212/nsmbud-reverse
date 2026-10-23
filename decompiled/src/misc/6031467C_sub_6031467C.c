/* sub_6031467C
 * address: 0x6031467C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6031467C(int a1, Vec3 *a2, int a3)
{
  int v6; // r9
  int v7; // r4
  int v8; // r5
  int v9; // r1
  Actor *v10; // r5
  char v11; // r12
  int v12; // r0
  ActorBuildInfo v13; // [sp+4h] [bp-4Ch] BYREF

  v6 = FIELD_U8(a1, 7664);
  v7 = FIELD_U32(a1, 160);
  v8 = FIELD_U16(a1, 7642);
  memset(&v13.settings2, 0, 40);
  v9 = v8 | (a3 << 12);
  if ( v7 < 1 )
    v9 |= 0x10u;
  if ( (unsigned int)v7 <= 0x2AA9FFFF )
    v9 = v8 | (a3 << 12);
  v13.settings1 = v9 | (v6 << 8);
  v13.parentId = FIELD_U32(a1, 8);
  v13.profile = Profile__get(0x288u);
  v13.position = *a2;
  v13.field_1C = FIELD_U32(a1, 160);
  v13.field_20 = 0;
  v10 = (Actor *)ActorMgr__create((void *)ActorMgr__instance, &v13, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613842252 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v10 && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v10, 0x0))(v10, &StageActor_RTTI) == 1 )
  {
    FIELD_U32(a1, 7676) = FIELD_U32(v10, 0x8);
    v12 = FIELD_U32(a1, 160);
    if ( (unsigned int)(v12 - 477218588) >= 0x638E38E5 )
    {
      if ( (unsigned int)(v12 + 0x7FFFFFFF) < 0x638E38E4 )
        v12 = -477218588;
    }
    else
    {
      v12 = 477218588;
    }
    v10[2].vtable = v12;
    Actor__removeChild((Actor *)a1, v10);
    FIELD_U8(a1, 7673) = 1;
  }
}
