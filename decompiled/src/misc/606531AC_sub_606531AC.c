/* sub_606531AC
 * address: 0x606531AC   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606531AC(int a1)
{
  int v1; // r10
  char v2; // r12
  int v3; // r5
  _DWORD *v4; // r6
  unsigned int v5; // r11
  bool v6; // zf
  int v7; // r0
  int v8; // r0
  __guard *v9; // r4
  int v10; // r11
  int v11; // r7
  int v12; // r0
  int v13; // r0
  int v14; // r0

  v3 = 0;
  v4 = *(_DWORD **)(a1 + 6360);
  if ( v4 )
  {
    v5 = (unsigned int)&dword_60C7B374;
    do
    {
      v6 = *v4 == 0;
      if ( *v4 )
      {
        v1 = *(_DWORD *)(*v4 + 2196);
        v6 = v1 == 0;
      }
      if ( !v6 )
      {
        v7 = FIELD_U8(v1, 533);
        if ( (unsigned int)(v7 - 1) <= 1 )
        {
          if ( v7 == 1 )
          {
            v8 = v5 & ~(1617244896 << v2) & 1;
            if ( FIELD_U8(dword_60CC6D8C, 17) )
            {
              v9 = (__guard *)v5;
              if ( !v8 && _cxa_guard_acquire(&dword_60C7B374) )
              {
                dword_60C7B370 = (int)&off_60BC00B0;
                _cxa_guard_release(&dword_60C7B374);
              }
              v10 = (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B370);
              if ( v10 )
                v10 = v1;
              v11 = sub_6079D894(v10);
              if ( !sub_607B7028(v10) )
              {
                v12 = 2;
                if ( !v11 )
                  v12 = 1;
                v3 += v12;
              }
              v5 = (unsigned int)v9;
            }
            else
            {
              if ( !v8 && _cxa_guard_acquire(&dword_60C7B374) )
              {
                dword_60C7B370 = (int)&off_60BC00B0;
                _cxa_guard_release(&dword_60C7B374);
              }
              v13 = (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B370);
              if ( v13 )
                v13 = v1;
              v6 = sub_6079D894(v13) == 0;
              v14 = 2;
              if ( v6 )
                v14 = 1;
              v3 += v14;
            }
          }
          else
          {
            if ( ((unsigned int)&dword_60C7B408 & ~(1617245048 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
            {
              dword_60C7B404 = (int)&off_60BC00B0;
              _cxa_guard_release(&dword_60C7B408);
            }
            if ( (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B404) == 1
              && FIELD_U32(v1, 11360)
              && *(unsigned __int8 *)(sub_607D6C28(v1) + 84) != 255 )
            {
              ++v3;
            }
          }
        }
      }
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 );
  }
  if ( v3 >= sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
    return sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) != 0;
  if ( v3 < 1 )
    return 0;
  return (FIELD_U8(a1, 23) & 0x10) != 0;
}
