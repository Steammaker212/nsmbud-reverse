/* sub_605492C4
 * address: 0x605492C4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605492C4(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  StateMgr *v4; // r0
  int *v5; // r1

  v3 = (_DWORD *)(a1 + 4728);
  result = FIELD_U32(a1, 4728);
  switch ( result )
  {
    case 0:
      sub_60502548(a1 + 3700);
      FIELD_U16(a1, 4752) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3740));
      FIELD_U8(a1, 4743) = 0;
      FIELD_U8(a1, 4740) = 1;
      FIELD_U8(a1, 4744) = 1;
      *v3 = 3;
      result = 3;
      break;
    case 1:
      v4 = (StateMgr *)(a1 + 24);
      if ( FIELD_U32(a1, 18464) )
        v5 = &dword_60CAC5A0;
      else
        v5 = &dword_60CAC580;
      goto LABEL_5;
    case 2:
      v4 = (StateMgr *)(a1 + 24);
      if ( FIELD_U32(a1, 18464) )
        v5 = &dword_60CAC560;
      else
        v5 = &dword_60CAC540;
LABEL_5:
      result = (int)StateMgr__changeState(v4, (StateBase *)v5);
      break;
    case 3:
      FIELD_U32(dword_60C9CFB8, 16) = FIELD_U32(a1, 18464) != 0;
      result = (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAC480);
      break;
    default:
      return result;
  }
  return result;
}
