/* sub_602F3978
 * address: 0x602F3978   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602F3978(unsigned __int8 *a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r1
  __int16 v5; // r0
  int v6; // r4
  unsigned int v7; // r1
  int v8; // r0
  unsigned int v10; // r7
  unsigned int *v11; // r5
  int v12; // r6
  char v13; // r12

  v2 = a1[73];
  if ( v2 == 2 )
  {
    v6 = 1;
    a1[73] = 3;
    a1[68] = 0;
    *a1 = 0;
    do
    {
      v7 = *(_DWORD *)&a1[4 * v6];
      if ( v7 )
      {
        v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
        if ( v8 )
          FIELD_U8(v8, 19) = 1;
        *(_DWORD *)&a1[4 * v6] = 0;
      }
      ++v6;
    }
    while ( v6 != 13 );
    return 3;
  }
  else
  {
    if ( v2 == 1 )
    {
      v3 = 0;
      if ( --a1[76] != 0 )
        return v3;
      sub_602F3D20(a1);
      goto LABEL_33;
    }
    v3 = 3;
    if ( !v2 )
    {
      v4 = *((__int16 *)a1 + 32);
      if ( a1[69] )
      {
        v5 = *((_WORD *)a1 + 32);
        if ( v4 <= 0 )
          goto LABEL_32;
      }
      else
      {
        v5 = v4 - 1;
        *((_WORD *)a1 + 32) = v4 - 1;
        if ( v4 - 1 <= 0 )
        {
LABEL_32:
          SE_OBJ_PNGN_ICE_BREAK_ref_2F3BA0(a1);
LABEL_33:
          v3 = 1;
          a1[73] = 2;
          return v3;
        }
      }
      v3 = 0;
      if ( v5 < *(__int16 *)(*((_DWORD *)a1 + 14) + 2) )
      {
        v10 = *a1;
        if ( v10 >= 0xC )
          v10 = 12;
        if ( v10 )
        {
          v11 = (unsigned int *)(a1 + 4);
          do
          {
            if ( *v11 )
            {
              v12 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v11);
              if ( ((unsigned int)&dword_60C7B39C & ~(1613708028 << v13) & 1) == 0
                && _cxa_guard_acquire(&dword_60C7B39C) )
              {
                dword_60C7B398 = (int)&off_60BC00E0;
                _cxa_guard_release(&dword_60C7B39C);
              }
              if ( v12 && (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B398) == 1 )
                FIELD_U8(v12, 7524) = 1;
            }
            ++v11;
            --v10;
          }
          while ( v10 );
        }
      }
    }
  }
  return v3;
}
