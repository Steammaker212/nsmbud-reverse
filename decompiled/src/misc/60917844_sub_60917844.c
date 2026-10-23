/* sub_60917844
 * address: 0x60917844   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60917844(int a1, const void *a2, int a3, int a4, int a5)
{
  _BOOL4 v8; // r1
  int result; // r0
  int v10; // r1
  char v11; // r0
  char v12; // r1

  if ( a2 )
  {
    v8 = sub_6091671C();
    result = 0;
    if ( v8 )
      return result;
    v10 = FIELD_U32(a1, 192);
    if ( v10 != -1 && sub_60916A94(dword_60CCFC8C, v10) == 1 && (FIELD_U8(a1, 196) & 1) != 0 )
    {
      dword_60CC7568(a1);
      FIELD_U8(a1, 196) &= ~1u;
    }
    FIELD_U32(a1, 192) = -1;
    v11 = FIELD_U8(a1, 196);
    v12 = v11 & 0xFE;
    if ( a5 )
      v12 = v11 | 1;
    FIELD_U8(a1, 196) = v12;
    FIELD_U32(a1, 192) = sub_60916740(dword_60CCFC8C, (int)a2, a3);
    qmemcpy((void *)a1, a2, 0xC0u);
  }
  else
  {
    if ( !a3 )
      return 0;
    sub_60916A94(dword_60CCFC8C, FIELD_U32(a1, 192));
    FIELD_U32(a1, 192) = sub_60916740(dword_60CCFC8C, a1, a3);
  }
  return 1;
}
