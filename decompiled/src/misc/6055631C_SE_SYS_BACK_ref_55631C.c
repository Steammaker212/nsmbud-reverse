/* SE_SYS_BACK_ref_55631C
 * address: 0x6055631C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_55631C(int a1)
{
  int result; // r0
  int v3; // r1
  int *v4; // r1
  int v5; // r2

  v3 = a1 + 6848;
  result = FIELD_U32(a1, 6848);
  if ( !FIELD_U8(v3, 14) )
  {
    if ( FIELD_U8(a1, 6863) )
    {
      if ( result )
      {
        v4 = &dword_60CAD5A8;
      }
      else
      {
        FIELD_U32(a1, 40) = &dword_60CAD588;
        v4 = &dword_60CAD4E8;
      }
    }
    else
    {
      result = FIELD_U8(a1, 6866);
      if ( FIELD_U8(a1, 6866) )
        return result;
      v5 = FIELD_U32(a1, 18812);
      result = v3 - 1028;
      if ( (v5 & 0x4000) != 0 )
      {
        sub_60502548(result);
        FIELD_U16(a1, 6872) = 0;
        sub_6047EABC((_DWORD *)(a1 + 5860));
        FIELD_U32(a1, 40) = &dword_60CAD588;
        StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAD4E8);
        return sub_60478680((int)"SE_SYS_BACK", 15);
      }
      if ( (v5 & 0x80) != 0 )
      {
        *(_DWORD *)v3 = 1;
        return 1;
      }
      if ( (v5 & 0x40) != 0 )
      {
        *(_DWORD *)v3 = 0;
        return 0;
      }
      if ( (v5 & 0x2000) == 0 )
        return result;
      sub_60502694(result);
      v4 = &dword_60CAD5A8;
    }
    return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
  }
  return result;
}
