/* sub_60376F6C
 * address: 0x60376F6C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60376F6C(_DWORD *a1)
{
  int v2; // r9
  int v3; // r7
  _DWORD *v4; // r5

  *a1 = off_60BF12D8;
  if ( (_DWORD *)dword_60C96474 == a1 )
  {
    dword_60C96474 = 0;
    v2 = dword_60C96478;
    v3 = FIELD_U32(dword_60C96478, 96);
    if ( v3 >= 1 )
    {
      if ( (unsigned int)v3 >= 0xA )
        v3 = 10;
      v4 = (_DWORD *)(dword_60C96478 + 20);
      do
      {
        if ( *v4 )
        {
          operator_delete_8DE3FC((void *)(*v4 - 8));
          *(v4 - 1) = 0;
          *v4 = 0;
        }
        v4 += 2;
        --v3;
      }
      while ( v3 );
      FIELD_U32(v2, 96) = 0;
    }
    sub_603E4284(v2 + 220);
    sub_603E4284(v2 + 128);
    dword_60C96478 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
