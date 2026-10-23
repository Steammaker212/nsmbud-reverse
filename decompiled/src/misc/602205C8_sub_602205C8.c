/* sub_602205C8
 * address: 0x602205C8   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_602205C8()
{
  int v0; // r0
  int i; // r4
  int v2; // r0
  int v3; // r6
  _DWORD **v4; // r5
  char v5; // r12
  int j; // r0
  _DWORD *v7; // r7
  int v9; // [sp+18h] [bp-30h] BYREF
  int v10; // [sp+1Ch] [bp-2Ch]
  int v11; // [sp+20h] [bp-28h]

  v0 = sub_601CF9C0(dword_60C8AEF0);
  v9 = -1;
  v10 = -1;
  v11 = -1;
  sub_6019EC34(&v9, (_DWORD *)(v0 + 1032));
  for ( i = 0; i < 5; ++i )
  {
    v2 = sub_6021EE50(v9, i);
    v3 = v2;
    if ( v2 != -1 )
    {
      v4 = (_DWORD **)sub_601693A0(v2);
      for ( j = ActorMgr__instance; v4 != *(_DWORD ***)(j + 27180); j = ActorMgr__instance )
      {
        v7 = *v4;
        if ( ((unsigned int)&dword_60C88AA8 & ~(1612842688 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
        {
          dword_60C88AA4 = (int)&off_60BD4BA4;
          _cxa_guard_release(&dword_60C88AA8);
        }
        if ( !v7 || (*(int (__fastcall **)(_DWORD *, int *))*v7)(v7, &dword_60C88AA4) != 1 )
          break;
        if ( v7[60] == v9 && v7[61] == v10 && (*(int (__fastcall **)(_DWORD *))(*v7 + 88))(v7) )
          return 0;
        v4 = (_DWORD **)sub_60008598(ActorMgr__instance, v3, (int)(v4 + 1));
      }
    }
  }
  return 1;
}
