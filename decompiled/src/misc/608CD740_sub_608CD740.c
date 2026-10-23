/* sub_608CD740
 * address: 0x608CD740   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CD740(int result)
{
  int *v1; // r7
  int *v2; // r8
  int v3; // r6
  int *v4; // r5
  int *v5; // r2

  v1 = *(int **)(result + 32);
  v2 = (int *)(result + 28);
  if ( v1 != (int *)(result + 28) )
  {
    v3 = result + 20;
    do
    {
      v4 = (int *)v1[1];
      result = sub_608D9C7C(v1 - 196);
      if ( result != 1 )
      {
        sub_608D9BFC(v1 - 196);
        if ( v1 == v2 )
        {
          result = *v2;
        }
        else
        {
          v5 = (int *)v1[1];
          result = *v5;
          *(_DWORD *)(*v1 + 4) = v5;
          *v5 = *v1;
          FIELD_U32(result, 4) = v1;
          *v1 = result;
        }
        *v1 = *(_DWORD *)v3;
        FIELD_U32(result, 4) = v3;
        *(_DWORD *)(*(_DWORD *)v3 + 4) = v1;
        *(_DWORD *)v3 = result;
      }
      v1 = v4;
    }
    while ( v4 != v2 );
  }
  return result;
}
