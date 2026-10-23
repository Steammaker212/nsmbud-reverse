/* sub_602D5DF0
 * address: 0x602D5DF0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602D5DF0(int a1)
{
  int v2; // r5
  char v3; // r12
  unsigned int v4; // r0

  if ( FIELD_U8(a1, 6673) )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6852));
    if ( ((unsigned int)&dword_60C88030 & ~(1613585980 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
    {
      dword_60C8802C = (int)&off_60BD20C4;
      _cxa_guard_release(&dword_60C88030);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C8802C) == 1 && !FIELD_U8(v2, 6480) )
    {
      v4 = FIELD_U32(v2, 80);
      if ( v4 >= 2 )
        v4 = 0;
      sub_60145684(v2, (int *)(a1 + 48 * v4 + 6756));
    }
  }
}
