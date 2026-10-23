/* sub_60680EFC
 * address: 0x60680EFC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60680EFC(int a1)
{
  int result; // r0

  if ( !FIELD_U8(a1, 7517) )
    FIELD_U8(a1, 7516) = 1;
  FIELD_U32(a1, 7540) = 0;
  FIELD_U32(a1, 7544) = 0;
  FIELD_U32(a1, 7556) = 0;
  FIELD_F32(a1, 124) = -FIELD_F32(a1, 7468);
  result = FIELD_U32(a1, 7508);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1);
  }
  return result;
}
