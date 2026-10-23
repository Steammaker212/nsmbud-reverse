/* sub_60689684
 * address: 0x60689684   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60689684(int a1, int a2)
{
  char v2; // r12
  int v3; // r5
  int v4; // r4
  unsigned int v5; // r1
  _DWORD *v6; // r0
  _DWORD *v7; // r3

  v3 = FIELD_U32(a1, 64);
  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CB849C & ~(1617467040 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB849C) )
  {
    dword_60CB8498 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CB849C);
  }
  if ( v3
    && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB8498) == 1
    && FIELD_F32(v4, 112) > (float)(FIELD_F32(v3, 112) + 0.1)
    && fabsf(FIELD_F32(v4, 108) - FIELD_F32(v3, 108)) <= FIELD_F32(v3, 6448)
    && ((unsigned __int8)(FIELD_U8(v4, 533) - 1) > 1u || FIELD_F32(v4, 124) <= 0.0)
    && (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224) & 1) == 0 )
  {
    v5 = v3 + 6436;
    v6 = (_DWORD *)(v3 + 6304);
    v7 = (_DWORD *)(v3 + 6304);
    while ( *v7 != FIELD_U32(v4, 8) )
    {
      v7 += 3;
      if ( (unsigned int)v7 > v5 )
      {
        do
        {
          if ( !*v6 )
            JUMPOUT(0x60688F88);
          v6 += 3;
        }
        while ( (unsigned int)v6 <= v5 );
        return;
      }
    }
  }
}
