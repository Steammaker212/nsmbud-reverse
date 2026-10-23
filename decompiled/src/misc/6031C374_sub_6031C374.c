/* sub_6031C374
 * address: 0x6031C374   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031C374(int a1)
{
  int result; // r0
  int *v3; // r5

  nullsub_7();
  v3 = (int *)(a1 + 9352);
  result = FIELD_U32(a1, 9352);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( FIELD_S8(a1, 9464) < 0 )
    {
      SE_EMY_DOWN_ref_2A7624(a1);
      result = *v3;
    }
  }
  if ( (result & 0x10400) == 0x400 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( (FIELD_U8(a1, 9464) & 0x40) != 0 )
    {
      SE_EMY_DOWN_ref_2A7624(a1);
      result = *v3;
    }
  }
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 )
  {
    FIELD_U32(a1, 120) = 0;
    if ( (FIELD_U8(a1, 9464) & 0x10) != 0 )
    {
      SE_EMY_DOWN_ref_2A7624(a1);
      result = *v3;
    }
  }
  if ( (result & 0x880000) != 0 )
  {
    result &= 0x20000000u;
    if ( !result )
    {
      FIELD_U32(a1, 120) = 0;
      result = FIELD_U8(a1, 9464);
      if ( (result & 0x20) != 0 )
        return SE_EMY_DOWN_ref_2A7624(a1);
    }
  }
  return result;
}
