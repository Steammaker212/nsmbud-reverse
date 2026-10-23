/* sub_603798EC
 * address: 0x603798EC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603798EC(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1

  *a1 = off_60BF144C;
  if ( *((_BYTE *)a1 + 32) )
  {
    v1 = a1[4];
    if ( v1 )
    {
      if ( *(_DWORD **)(v1 + 40) == a1 )
      {
        FIELD_U32(v1, 16) = FIELD_U32(v1, 28);
        FIELD_U32(v1, 20) = FIELD_U32(v1, 32);
        FIELD_U8(v1, 24) = FIELD_U8(v1, 36);
        FIELD_U32(v1, 40) = 0;
      }
      a1[4] = 0;
    }
    v2 = a1[5];
    if ( v2 )
    {
      if ( *(_DWORD **)(v2 + 40) == a1 )
      {
        FIELD_U32(v2, 16) = FIELD_U32(v2, 28);
        FIELD_U32(v2, 20) = FIELD_U32(v2, 32);
        FIELD_U8(v2, 24) = FIELD_U8(v2, 36);
        FIELD_U32(v2, 40) = 0;
      }
      a1[5] = 0;
    }
    *((_BYTE *)a1 + 32) = 0;
  }
  return sead__IDisposer__dtor(a1);
}
