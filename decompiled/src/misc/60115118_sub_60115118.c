/* sub_60115118
 * address: 0x60115118   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60115118()
{
  int *i; // r6
  char v1; // r12
  int v2; // r5
  _BYTE *v3; // r5
  int v4; // t1
  int *v6; // r6
  char v7; // r12
  int v8; // r4
  int v9; // r5

  for ( i = (int *)sub_60008598(ActorMgr__instance, 816, FIELD_U32(ActorMgr__instance, 27172));
        ;
        i = (int *)sub_60008598(ActorMgr__instance, 816, (int)(i + 1)) )
  {
    v2 = *i;
    if ( ((unsigned int)&dword_60C86B38 & ~(1611747772 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B38) )
    {
      dword_60C86B34 = (int)&off_60BD0CA4;
      _cxa_guard_release(&dword_60C86B38);
    }
    if ( !v2 || (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C86B34) != 1 )
      break;
    v4 = FIELD_U8(v2, 6692);
    v3 = (_BYTE *)(v2 + 6692);
    if ( v4 )
    {
      *v3 = 0;
      return 1;
    }
  }
  v6 = (int *)sub_60008598(ActorMgr__instance, 818, FIELD_U32(ActorMgr__instance, 27172));
  v8 = 0;
  while ( 1 )
  {
    v9 = *v6;
    if ( ((unsigned int)&dword_60C86B48 & ~(1611748036 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
    {
      dword_60C86B44 = (int)&off_60BD0CA4;
      _cxa_guard_release(&dword_60C86B48);
    }
    if ( !v9 || (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C86B44) != 1 )
      break;
    if ( FIELD_U8(v9, 6692) )
      return 1;
    v6 = (int *)sub_60008598(ActorMgr__instance, 818, (int)(v6 + 1));
  }
  return v8;
}
