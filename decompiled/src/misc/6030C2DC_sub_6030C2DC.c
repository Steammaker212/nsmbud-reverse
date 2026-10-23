/* sub_6030C2DC
 * address: 0x6030C2DC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030C2DC(int result, unsigned int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r4
  char v4; // r1

  v2 = a2;
  if ( a2 >= 8 )
    v2 = 0;
  v3 = result + v2;
  if ( *(unsigned __int8 *)(result + v2 + 7592) != 255 )
  {
    if ( *(_BYTE *)(result + v2 + 7592) )
    {
      return sub_6030D498();
    }
    else
    {
      *(_DWORD *)(result + 4 * v2 + 7536) = dword_60AF1EC0[(unsigned __int8)((FIELD_U32(result, 80) & (1 << a2)) >> a2)];
      if ( !((FIELD_U8(result, 7604) & (unsigned int)(1 << a2)) >> a2) )
      {
        v4 = FIELD_U8(result, 23);
        LOBYTE(result) = 32;
        if ( (v4 & 0x10) != 0 )
          result = (32 * (((6 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) & 7))
                 | 0x10;
        FIELD_U8(v3, 7568) = result;
      }
      FIELD_U8(v3, 7576) = 64;
      return 7576;
    }
  }
  return result;
}
