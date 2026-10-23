/* sub_607435D4
 * address: 0x607435D4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607435D4(int a1)
{
  int v2; // r1
  _BYTE *v3; // r10
  int v4; // r11
  int v5; // r8
  int v6; // r1
  unsigned int v7; // r1
  int v8; // r0
  int (__fastcall ***v9)(_DWORD, int *); // r6
  char v10; // r12
  int v12; // [sp+0h] [bp-40h]

  v2 = 0;
  do
  {
    v12 = v2;
    v3 = (_BYTE *)(a1 + v2 + 6180);
    if ( *v3 )
    {
      v4 = 0;
      v5 = 0;
      if ( (unsigned __int8)v2 < 3u )
        v4 = v2;
      do
      {
        v6 = (unsigned __int8)v5;
        if ( (unsigned __int8)v5 >= 4u )
          v6 = 0;
        v7 = *(_DWORD *)(a1 + 16 * v4 + 4 * v6 + 6132);
        v8 = 0;
        if ( v7 )
        {
          v9 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
          if ( ((unsigned int)&dword_60CBE26C & ~(1618228924 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
          {
            dword_60CBE268 = (int)&off_60BDBC48;
            _cxa_guard_release(&dword_60CBE26C);
          }
          v8 = 0;
          if ( v9 )
          {
            v8 = (**v9)(v9, &dword_60CBE268);
            if ( v8 )
              v8 = (int)v9;
          }
        }
        sub_605D79D0(v8, (StateBase *)&dword_60CBE0F0, 0);
        ++v5;
      }
      while ( v5 < (unsigned __int8)*v3 );
    }
    v2 = v12 + 1;
  }
  while ( v12 != 2 );
  return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBE3D0);
}
