/* sub_608C7D98
 * address: 0x608C7D98   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7D98(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r1
  void *v13; // r0
  int v14; // r0

  v8 = sub_608C7FF0(a1, a2);
  v9 = sub_608C8308(v8);
  if ( v9 )
  {
    FIELD_U8(v9, 178) = 1;
    v10 = sub_608CAEDC(1);
    v11 = sub_608CB104(v10, a1, a2, sub_608C7CE0, v9);
    if ( v11 )
    {
      FIELD_U32(v9, 364) = v11;
      sub_608C7210(v9, a3, a4);
    }
    else
    {
      v14 = sub_608C7FF0(0, v12);
      sub_608C825C(v14, v9);
      return 0;
    }
  }
  else
  {
    v13 = sub_608AB0D4();
    v9 = 0;
    sub_608C6F98((int)v13, 0, 0, 0);
  }
  return v9;
}
