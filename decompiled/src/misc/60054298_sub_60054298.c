/* sub_60054298
 * address: 0x60054298   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60054298(int a1)
{
  int result; // r0

  sub_60027734();
  result = dword_60C99DD4;
  switch ( FIELD_U32(a1, 6124) )
  {
    case 0:
      FIELD_U8(dword_60C99DD4, 849) = 1;
      break;
    case 1:
      FIELD_U8(dword_60C99DD4, 849) = 2;
      break;
    case 2:
      FIELD_U8(dword_60C99DD4, 849) = 3;
      break;
    case 3:
      FIELD_U8(dword_60C99DD4, 849) = 4;
      break;
    case 4:
      FIELD_U8(dword_60C99DD4, 849) = 5;
      break;
    case 5:
      FIELD_U8(dword_60C99DD4, 849) = 6;
      break;
    default:
      FIELD_U8(dword_60C99DD4, 849) = 0;
      break;
  }
  return result;
}
