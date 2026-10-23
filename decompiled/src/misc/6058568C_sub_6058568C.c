/* sub_6058568C
 * address: 0x6058568C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058568C(int a1, int a2, int a3)
{
  int v3; // lr
  int v4; // r12
  int v5; // r3
  int result; // r0
  bool v7; // zf

  v3 = a1 + 27664;
  v4 = FIELD_U8(LevelInfo_instance, 18);
  v5 = 0;
  while ( 1 )
  {
    result = FIELD_U8(v3, 22);
    if ( FIELD_U8(v3, 22) )
    {
      result = FIELD_U8(v3, 21);
      v7 = result == v4;
      if ( result == v4 )
      {
        result = FIELD_U32(v3, 12);
        v7 = result == a2;
      }
      if ( v7 )
        break;
    }
    ++v5;
    v3 += 24;
    if ( v5 >= 256 )
      return result;
  }
  result = v3 + 8;
  if ( a3 == 2 )
    result = v3 + 4;
  if ( a3 == 1 )
    result = v3;
  ++*(_DWORD *)result;
  return result;
}
