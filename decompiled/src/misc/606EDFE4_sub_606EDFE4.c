/* sub_606EDFE4
 * address: 0x606EDFE4   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EDFE4(int a1, _BYTE *a2)
{
  int result; // r0
  int *i; // r6
  bool v6; // zf

  result = 6512;
  for ( i = *(int **)(a1 + 6512); i; i = (int *)i[1] )
  {
    result = *i;
    v6 = *i == 0;
    if ( *i )
    {
      result = FIELD_U32(result, 2196);
      v6 = result == 0;
    }
    if ( !v6 && FIELD_U8(result, 533) == 2 )
    {
      SE_OBJ_TRPLN_BOUND_ref(result, (float *)(a1 + 108), 5.2, 0.5);
      result = (unsigned __int8)*a2;
      if ( !*a2 )
      {
        lift_trampoline_ref(a1 + 6100);
        result = sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6532));
        *a2 = 1;
      }
    }
  }
  return result;
}
