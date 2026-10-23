/* sub_6061EA58
 * address: 0x6061EA58   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061EA58(_DWORD *a1)
{
  Actor *v1; // r5
  int result; // r0
  bool v4; // zf
  int v5; // r1
  _DWORD *v6; // r1
  char v7; // r12

  result = a1[10];
  if ( result >= 1 )
  {
    result = a1[9];
    v4 = result == 0;
    if ( result )
    {
      v5 = a1[11];
      v1 = (Actor *)(result - v5);
      v4 = result == v5;
    }
    if ( !v4 )
    {
      while ( Actor__getProfileId(v1) != 521 )
      {
        result = a1[11];
        v6 = *(_DWORD **)((char *)&FIELD_U32(v1, 0x4) + result);
        v1 = (Actor *)((char *)v6 - result);
        if ( v6 == a1 + 8 )
          v1 = 0;
        if ( !v1 )
          return result;
      }
      result = Actor__getProfileId(v1);
      if ( result == 521 )
      {
        if ( ((unsigned int)&dword_60C803F0 & ~(1617029860 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
        {
          dword_60C803EC = (int)&off_60BC321C;
          _cxa_guard_release(&dword_60C803F0);
        }
        result = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v1, 0x0))(v1, &dword_60C803EC);
        if ( v1 )
        {
          result ^= 1u;
          if ( !result )
          {
            SE_EMY_BH_BOMB_ref_2605EC((int)v1);
            JUMPOUT(0x6061EB7C);
          }
        }
      }
    }
  }
  return result;
}
