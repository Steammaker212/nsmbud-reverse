/* sub_60699180
 * address: 0x60699180   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60699180(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  unsigned int *v4; // r4
  unsigned int v5; // t1

  result = FIELD_U8(a1, 24);
  if ( result )
  {
    result = FIELD_U8(a1, 6141);
    if ( !FIELD_U8(a1, 6141) )
    {
      v3 = (_BYTE *)(a1 + 6140);
      if ( (FIELD_U8(a1, 6140) & 1) != 0
        && !FIELD_U32(a1, 6108)
        && sub_60585638(dword_60CAF15C, FIELD_U32(a1, 6136)) )
      {
        sub_605855E0(dword_60CAF15C, FIELD_U32(a1, 6136));
      }
      if ( (*v3 & 2) != 0 && !FIELD_U32(a1, 6112) && sub_60585654(dword_60CAF15C, FIELD_U32(a1, 6136)) )
        sub_605855E0(dword_60CAF15C, FIELD_U32(a1, 6136));
      result = (unsigned __int8)*v3;
      if ( (result & 4) != 0 )
      {
        result = FIELD_U32(a1, 6116);
        if ( !result )
        {
          v5 = FIELD_U32(a1, 6136);
          v4 = (unsigned int *)(a1 + 6136);
          result = sub_60585670(dword_60CAF15C, v5);
          if ( result )
            return sub_605855E0(dword_60CAF15C, *v4);
        }
      }
    }
  }
  return result;
}
