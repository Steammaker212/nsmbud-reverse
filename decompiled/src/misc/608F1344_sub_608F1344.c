/* sub_608F1344
 * address: 0x608F1344   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608F1344(char *a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r7
  int v5; // r4
  int v6; // r6

  v2 = a1 + 4;
  *(_DWORD *)a1 = &off_60C5C6EC;
  v3 = *((_DWORD *)a1 + 2);
  if ( (char *)v3 != v2 )
  {
    v4 = v3;
    do
    {
      v5 = FIELD_U32(v3, 8);
      v4 = FIELD_U32(v4, 4);
      if ( FIELD_U8(v5, 56) )
      {
        v6 = FIELD_U32(v5, 28);
        if ( v6 )
        {
          FIELD_U32(v5, 28) = 0;
          sead__ListNode__erase((_DWORD *)(v5 + 16));
          --FIELD_U32(v6, 8);
        }
        FIELD_U8(v5, 56) = 0;
      }
      v3 = v4;
    }
    while ( (char *)v4 != v2 );
  }
  operator_delete(a1);
}
