/* sub_60654B0C
 * address: 0x60654B0C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60654B0C(int a1, int a2)
{
  int v2; // r6
  unsigned int v3; // r7
  _BYTE *v4; // r4
  unsigned int result; // r0
  char v6; // r12
  unsigned int v7; // r5
  bool v8; // zf

  v4 = *(_BYTE **)(a1 + 144);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  v7 = result;
  if ( v4 )
  {
    v8 = result == 0;
    if ( result )
    {
      v2 = FIELD_S8(result, 84);
      v3 = (unsigned __int8)v2;
      v8 = (unsigned __int8)v2 == 255;
    }
    if ( !v8 )
    {
      result = (unsigned __int8)(FIELD_U8(result, 533) - 1);
      if ( result <= 1 )
      {
        if ( ((unsigned int)&dword_60CB6380 & ~(1617251188 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6380) )
        {
          dword_60CB637C = (int)&off_60C14188;
          _cxa_guard_release(&dword_60CB6380);
        }
        result = (**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &dword_60CB637C);
        if ( result == 1 )
        {
          if ( v3 >= 4 )
            v2 = 0;
          result = (unsigned int)&v4[4 * v2 + 6440];
          v4[v2 + 6580] = 1;
          FIELD_U32(result, 144) = FIELD_U32(v7, 108);
        }
      }
    }
  }
  return result;
}
