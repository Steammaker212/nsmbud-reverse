/* sub_604A8154
 * address: 0x604A8154   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604A8154(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r3
  int v4; // r3
  StateMethodExecuter *result; // r0

  if ( !FIELD_U32(a1, 60) )
  {
    v2 = 0;
    FIELD_U8(a1, 279700) = 0;
    FIELD_U8(a1, 279705) = 0;
    FIELD_U8(a1, 279704) = 0;
    FIELD_U8(a1, 279703) = 0;
    FIELD_U8(a1, 279702) = 0;
    FIELD_U8(a1, 279701) = 0;
    FIELD_U8(a1, 279706) = 0;
    FIELD_U32(a1, 3732) |= 0x10u;
    FIELD_U8(a1, 24274) = 0;
    FIELD_U32(a1, 24288) |= 0x10u;
    FIELD_U8(a1, 44830) = 0;
    FIELD_U32(a1, 44844) |= 0x10u;
    FIELD_U8(a1, 65386) = 0;
    FIELD_U32(a1, 65400) |= 0x10u;
    FIELD_U8(a1, 85942) = 0;
    if ( FIELD_S32(a1, 279736) >= 1 )
    {
      do
      {
        v3 = 0;
        if ( v2 < 4 )
          v3 = v2;
        ++v2;
        v4 = a1 + 20556 * v3;
        FIELD_U32(v4, 3732) |= 4u;
        FIELD_U8(v4, 24275) = 1;
      }
      while ( (signed int)v2 < FIELD_U32(a1, 279736) );
    }
  }
  result = (StateMethodExecuter *)sub_604AD320(a1);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U8(a1, 56) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA14D0);
  }
  return result;
}
