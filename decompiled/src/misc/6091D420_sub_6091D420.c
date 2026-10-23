/* sub_6091D420
 * address: 0x6091D420   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091D420(_DWORD *a1, unsigned int a2, int a3)
{
  int v6; // r1
  int result; // r0
  int v8; // r6
  int *v9; // r4
  int v10; // r1

  v6 = a1[155];
  if ( a1[154] > a2 )
    v6 += 12 * a2;
  sead__SafeStringBase__operator_assign(v6 + 4, a3);
  result = a1[1];
  v8 = FIELD_U32(result, 16);
  if ( v8 )
  {
    v9 = (int *)(FIELD_U32(result, 20) + 620);
    do
    {
      v10 = *v9;
      if ( *(v9 - 1) > a2 )
        v10 += 12 * a2;
      result = sead__SafeStringBase__operator_assign(v10 + 4, a3);
      v9 += 234;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
