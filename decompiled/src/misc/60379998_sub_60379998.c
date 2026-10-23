/* sub_60379998
 * address: 0x60379998   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60379998(int a1)
{
  int v1; // r1
  int v2; // r1
  _DWORD *v3; // r0

  *(_DWORD *)a1 = off_60BF144C;
  if ( FIELD_U8(a1, 32) )
  {
    v1 = FIELD_U32(a1, 16);
    if ( v1 )
    {
      if ( FIELD_U32(v1, 40) == a1 )
      {
        FIELD_U32(v1, 16) = FIELD_U32(v1, 28);
        FIELD_U32(v1, 20) = FIELD_U32(v1, 32);
        FIELD_U8(v1, 24) = FIELD_U8(v1, 36);
        FIELD_U32(v1, 40) = 0;
      }
      FIELD_U32(a1, 16) = 0;
    }
    v2 = FIELD_U32(a1, 20);
    if ( v2 )
    {
      if ( FIELD_U32(v2, 40) == a1 )
      {
        FIELD_U32(v2, 16) = FIELD_U32(v2, 28);
        FIELD_U32(v2, 20) = FIELD_U32(v2, 32);
        FIELD_U8(v2, 24) = FIELD_U8(v2, 36);
        FIELD_U32(v2, 40) = 0;
      }
      FIELD_U32(a1, 20) = 0;
    }
    FIELD_U8(a1, 32) = 0;
  }
  v3 = sead__IDisposer__dtor((_DWORD *)a1);
  operator_delete(v3);
}
