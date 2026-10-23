/* SE_SYS_CE_ref_3_helper_6EB468
 * address: 0x606EB468   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CE_ref_3_helper_6EB468(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // r0

  FIELD_U8(a1, 2715) = 0;
  result = (StateMethodExecuter *)dword_60C9CF0C;
  if ( FIELD_U8(dword_60C9CF0C, 5124) || (v3 = 1, FIELD_S32(a1, 2700) >= 4) )
  {
    FIELD_U8(a1, 2715) = 1;
    v3 = 0;
  }
  switch ( FIELD_U32(a1, 2692) )
  {
    case 0:
      if ( !v3 )
      {
        FIELD_U32(a1, 2692) = 1;
        result = sub_60455184((int)result);
      }
      break;
    case 1:
      result = (StateMethodExecuter *)sub_6045519C((int)result);
      if ( result == (StateMethodExecuter *)1 )
      {
        if ( FIELD_U16(AreaTask_intance, 1873) )
        {
          FIELD_U32(a1, 2708) = 16;
          FIELD_U32(a1, 2692) = 4;
          result = (StateMethodExecuter *)4;
        }
        else
        {
          result = (StateMethodExecuter *)(FIELD_U32(a1, 2692) + 1);
          FIELD_U32(a1, 2692) = result;
        }
      }
      break;
    case 2:
      if ( v3 == 1 )
      {
        FIELD_U32(a1, 2692) = 3;
        result = (StateMethodExecuter *)sub_60455178((int)result);
      }
      break;
    case 3:
      result = (StateMethodExecuter *)sub_60455190((int)result);
      if ( result == (StateMethodExecuter *)1 )
      {
        FIELD_U32(a1, 2692) = 0;
        result = 0;
      }
      break;
    case 4:
      result = (StateMethodExecuter *)(FIELD_U8(AreaTask_intance, 1874)
                                     | FIELD_U8(AreaTask_intance, 1873));
      if ( !FIELD_U16(AreaTask_intance, 1873) )
      {
        v4 = FIELD_U32(a1, 2708);
        if ( v4 )
        {
          result = (StateMethodExecuter *)(v4 - 1);
          FIELD_U32(a1, 2708) = result;
        }
        else
        {
          FIELD_U32(a1, 2692) = 2;
          result = (StateMethodExecuter *)2;
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
