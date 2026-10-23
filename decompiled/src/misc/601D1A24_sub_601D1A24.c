/* sub_601D1A24
 * address: 0x601D1A24   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601D1A24()
{
  _DWORD **v0; // r6
  char v1; // r12
  _DWORD **v2; // r10
  int v3; // r4
  _DWORD *v4; // r9
  _DWORD *v5; // r7
  int v6; // r0
  unsigned int v7; // r0
  _DWORD v9[3]; // [sp+24h] [bp-84h] BYREF
  _DWORD v10[30]; // [sp+30h] [bp-78h] BYREF

  v10[0] = 0;
  memset(&v10[2], 0, 72);
  sub_601905DC(v10);
  v10[0] = 84;
  v10[1] = sub_601916C8(dword_60C8996C, 84);
  v0 = (_DWORD **)sub_60008598(ActorMgr__instance, 895, FIELD_U32(ActorMgr__instance, 27172));
  v2 = *(_DWORD ***)(ActorMgr__instance + 27180);
  if ( v0 != v2 )
  {
    v3 = 0;
    do
    {
      v4 = *v0;
      if ( ((unsigned int)&dword_60C8AF48 & ~(1612520228 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF48) )
      {
        dword_60C8AF44 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8AF48);
      }
      if ( v4 )
      {
        v5 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v4)(v4, &dword_60C8AF44);
        if ( v5 )
          v5 = v4;
      }
      else
      {
        v5 = 0;
      }
      v6 = v5[62];
      v9[0] = 6;
      v9[1] = 0;
      v9[2] = v6;
      if ( v5[69] != 1 || sub_6081F070(dword_60CC6D78, v9) >= 0 && sub_6081F058(dword_60CC6D78) == 1 )
      {
        v7 = v3 + 2;
        ++v3;
        if ( v7 >= 0x12 )
          v7 = 0;
        v10[v7 + 2] = v5[2];
      }
      v0 = (_DWORD **)sub_60008598(ActorMgr__instance, 895, (int)(v0 + 1));
    }
    while ( v0 != v2 );
  }
  return sub_60191160((_DWORD *)dword_60C8996C, v10);
}
