/* sub_605FFBFC
 * address: 0x605FFBFC   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FFBFC(int a1)
{
  char v1; // r12
  ColliderBase *v2; // r4
  ColliderMgr *v3; // r5

  if ( FIELD_U8(a1, 6878) )
  {
    if ( FIELD_U32(a1, 6824) )
      return 1;
    v2 = (ColliderBase *)(a1 + 6168);
    v3 = ColliderMgr_instance;
    if ( ((unsigned int)&dword_60C803D0 & ~(1616903236 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
    {
      dword_60C803CC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C803D0);
    }
  }
  else
  {
    v2 = (ColliderBase *)(a1 + 6168);
    v3 = ColliderMgr_instance;
    if ( ((unsigned int)&dword_60C803D0 & ~(1616903352 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
    {
      dword_60C803CC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C803D0);
    }
  }
  if ( !(*(int (__fastcall **)(ColliderBase *, int *))(FIELD_U32(v2, 0x0).vtable + 8))(v2, &dword_60C803CC) )
    v2 = 0;
  ColliderMgr_removeRelated1(v3, v2);
  return 1;
}
