/* sub_608D801C
 * address: 0x608D801C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D801C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  _DWORD *v11; // r5
  char v12; // r10
  int v13; // r6
  int v14; // r0
  char v15; // r0

  result = FIELD_U8(a1, 745);
  if ( !result )
  {
    v11 = sub_608C3B98();
    v12 = 0;
    v13 = sub_608C2698((int)v11, 152);
    FIELD_U32(v13, 4) = 54;
    FIELD_U16(v13, 150) = FIELD_U16(a1, 52);
    if ( FIELD_U32(a1, 24) )
    {
      v14 = FIELD_U32(a1, 32);
      if ( v14 == 1 )
      {
        v15 = sub_608D891C(a1, v13, a2, a3, a4);
        goto LABEL_7;
      }
      if ( !v14 )
      {
        v15 = sub_608D8114(a1, v13, a2, a3, a4, a5, a6);
LABEL_7:
        v12 = v15;
      }
    }
    FIELD_U8(v13, 148) = v12;
    FIELD_U32(v13, 16) = FIELD_U32(a1, 20);
    sub_608C2C1C(v11, (_DWORD *)v13);
    return sub_608C2A9C(v11, 1);
  }
  return result;
}
