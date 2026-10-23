/* sub_6052B15C
 * address: 0x6052B15C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052B15C(int a1)
{
  StateMethodExecuter *v2; // r10
  StateMethodExecuter *result; // r0
  unsigned int i; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r4
  int v7; // r0
  _DWORD *v8; // r7
  unsigned int v9; // r4

  v2 = 0;
  result = *(StateMethodExecuter **)(a1 + 3088);
  if ( (int)result >= 1 )
  {
    for ( i = 0; (int)i < (int)result; ++i )
    {
      v5 = 0;
      if ( i < 4 )
        v5 = i;
      v6 = (_DWORD *)(a1 + 4 * v5);
      if ( v6[777] )
      {
        v8 = v6 + 793;
        v7 = v6[793];
        if ( v7 )
        {
          *v8 = v7 - 1;
        }
        else if ( sub_6052BEBC(a1, i) == 1 )
        {
          --v6[777];
          if ( FIELD_U32(a1, 3084) )
          {
            *v8 = 10;
          }
          else
          {
            v9 = v6[797];
            *v8 = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)v9) >> 32;
          }
        }
      }
      else
      {
        v2 = (StateMethodExecuter *)((char *)v2 + 1);
      }
      result = *(StateMethodExecuter **)(a1 + 3088);
    }
  }
  if ( v2 == result )
    return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60CAA494);
  return result;
}
