/* SE_OBJ_GET_COIN_ref_2_helper
 * address: 0x6040A52C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GET_COIN_ref_2_helper(int a1, int a2)
{
  _BYTE *v2; // r7
  int result; // r0
  _BYTE *v6; // r6
  bool v7; // zf
  bool v8; // zf

  v6 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    v7 = a2 == 2;
    if ( a2 == 2 )
    {
      v2 = (_BYTE *)(a1 + 6538);
      v7 = FIELD_U8(a1, 6538) == 0;
    }
    if ( v7 )
    {
      FIELD_U32(a1, 6496) = ((int (__fastcall *)(int))loc_605840F8)(dword_60CAF15C);
      *v2 = 1;
    }
    result = FIELD_U8(a1, 6476);
    if ( result == 5 )
    {
      v8 = a2 == 2;
      if ( a2 == 2 )
      {
        result = FIELD_U8(a1, 6478);
        v8 = result == 10;
      }
      if ( v8 )
      {
        LOBYTE(result) = FIELD_U8(a1, 6480) + 1;
        FIELD_U8(a1, 6480) = result;
        result = (unsigned __int8)result;
        if ( (unsigned int)(unsigned __int8)result >= FIELD_U32(a1, 6496) )
        {
          *v6 = 2;
          FIELD_U8(a1, 6560) = 2;
          FIELD_U32(a1, 6504) = 0;
          return 6504;
        }
      }
    }
  }
  return result;
}
