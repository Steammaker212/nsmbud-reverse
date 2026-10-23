/* sub_6050A8AC
 * address: 0x6050A8AC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050A8AC(int a1)
{
  int v1; // r6
  int v2; // r12
  int result; // r0
  int v4; // r2
  int i; // r1

  v1 = dword_60CA7DDC;
  v2 = sub_6047482C(a1 + 48, 2u);
  result = 0;
  if ( v2 )
  {
    v4 = FIELD_U32(v2, 56);
    if ( v1 == v4 )
    {
      return FIELD_U8(v2, 51) & 1;
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(v1 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v1 + i - 1) )
          return FIELD_U8(v2, 51) & 1;
        if ( i > 0x80000 || *(unsigned __int8 *)(v1 + i) != *(unsigned __int8 *)(v4 + i) )
          break;
        if ( !*(_BYTE *)(v1 + i) )
          return FIELD_U8(v2, 51) & 1;
      }
    }
  }
  return result;
}
