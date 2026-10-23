/* sub_60859BAC
 * address: 0x60859BAC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60859BAC(int a1, int a2)
{
  unsigned int v4; // r8
  unsigned int v5; // r7
  int result; // r0
  int v7; // r1
  int v8; // r2

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  if ( v4 )
  {
    v5 = 0;
    do
    {
      result = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 44))(a1, v5);
      if ( result )
      {
        v7 = FIELD_U32(result, 28);
        v8 = 0;
        while ( *(unsigned __int8 *)(v7 + v8) == *(unsigned __int8 *)(a2 + v8) )
        {
          if ( *(_BYTE *)(v7 + v8) )
          {
            if ( ++v8 < 28 )
              continue;
          }
          return result;
        }
      }
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 0;
}
