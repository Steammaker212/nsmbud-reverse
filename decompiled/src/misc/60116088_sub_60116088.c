/* sub_60116088
 * address: 0x60116088   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60116088(int a1)
{
  float v2; // r5
  float v3; // r7
  int v4; // r5
  _BYTE *v5; // r6
  char v6; // r12
  ActorBuildInfo v8; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_F32(dword_60CC6484, 116);
  v3 = FIELD_F32(dword_60CC6484, 124);
  memset(&v8, 0, sizeof(v8));
  v8.profile = Profile__get(0x119u);
  v8.parentId = FIELD_U32(a1, 8);
  v8.position.x = v2;
  v4 = 0;
  v8.position.y = v3;
  memset(&v8.position.z, 0, 9);
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( ((unsigned int)&dword_60C80060 & ~(1611751704 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80060) )
  {
    dword_60C8005C = (int)&off_60BC2CE0;
    _cxa_guard_release(&dword_60C80060);
  }
  if ( v5 )
  {
    v4 = (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C8005C);
    if ( v4 )
      v4 = (int)v5;
  }
  FIELD_U32(a1, 7608) = v4;
  return 7608;
}
