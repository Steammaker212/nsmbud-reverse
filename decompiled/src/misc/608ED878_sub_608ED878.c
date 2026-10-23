/* sub_608ED878
 * address: 0x608ED878   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ED878(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  int *v5; // r1
  int v6; // r7
  void (__fastcall ***v7)(_DWORD, int); // r0

  result = FIELD_U8(a1, 4);
  if ( result )
  {
    v3 = FIELD_U32(a1, 20);
    if ( v3 != a1 + 16 )
    {
      v4 = FIELD_U32(a1, 8);
      v5 = (int *)(v3 + 4);
      do
      {
        v6 = *v5;
        v7 = *(void (__fastcall ****)(_DWORD, int))(FIELD_U32(v3, 8) + 32);
        if ( v7 )
          (**v7)(v7, v4);
        v5 = (int *)(v6 + 4);
        v3 = v6;
      }
      while ( v6 != a1 + 16 );
    }
    sub_608F1120(FIELD_U32(a1, 28));
    FIELD_U8(a1, 4) = 0;
    FIELD_U32(a1, 8) = 0;
    return 0;
  }
  return result;
}
