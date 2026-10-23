/* sub_604AA764
 * address: 0x604AA764   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AA764(int a1)
{
  StateMethodExecuter *result; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2

  result = (StateMethodExecuter *)sub_604AD320(a1);
  if ( result == (StateMethodExecuter *)1 )
  {
    if ( FIELD_S32(a1, 279736) >= 1 )
    {
      v3 = 0;
      do
      {
        v4 = 0;
        if ( v3 < 4 )
          v4 = v3;
        ++v3;
        *(_BYTE *)(a1 + 20556 * v4 + 24275) = 0;
      }
      while ( (signed int)v3 < FIELD_U32(a1, 279736) );
    }
    FIELD_U8(a1, 56) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60CA1470);
  }
  return result;
}
