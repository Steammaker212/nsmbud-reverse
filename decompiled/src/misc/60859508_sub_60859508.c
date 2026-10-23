/* sub_60859508
 * address: 0x60859508   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60859508(int a1, int a2, int a3)
{
  int result; // r0
  bool v7; // zf
  int v8; // r7
  int i; // r6
  int v10; // r6
  int v11; // t1

  result = FIELD_U8(a1, 64);
  if ( (result & 0x81) == 0x81 )
  {
    v7 = (FIELD_U8(a1, 68) & 0x10) == 0;
    if ( (FIELD_U8(a1, 68) & 0x10) != 0 )
      v7 = FIELD_U8(a1, 66) == 0;
    if ( !v7 )
    {
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 84))(a1, a2, a3);
      result = FIELD_U8(a1, 64);
    }
    if ( (result & 2) == 0 || (result = FIELD_U8(a1, 66), FIELD_U8(a1, 66)) )
    {
      v8 = a1 + 16;
      for ( i = FIELD_U32(a1, 20); i != v8; i = FIELD_U32(v10, 8) )
      {
        v11 = *(_DWORD *)(i - 4);
        v10 = i - 4;
        result = (*(int (__fastcall **)(int, int, int))(v11 + 80))(v10, a2, a3);
      }
    }
  }
  return result;
}
