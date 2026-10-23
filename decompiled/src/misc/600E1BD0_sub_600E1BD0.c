/* sub_600E1BD0
 * address: 0x600E1BD0   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E1BD0(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r0
  bool v5; // zf

  v3 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C84B44 & ~(1611537388 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
  {
    dword_60C84B40 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84B44);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B40) == 1 )
    v4 = FIELD_U32(v3, 80);
  else
    v4 = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1) == 0;
  v5 = v4 == 1;
  FIELD_U32(a1, 80) = v4;
  if ( v4 == 1 )
    v4 = -1090519040;
  FIELD_U32(a1, 120) = 1056964608;
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U32(a1, 128) = 0;
  if ( v5 )
    FIELD_U32(a1, 120) = v4;
  FIELD_U32(a1, 100) = -1102263091;
  FIELD_U32(a1, 136) = -1061158912;
  FIELD_U32(a1, 116) = 1167867904;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  FIELD_U8(a1, 6552) = 0;
  return 6552;
}
