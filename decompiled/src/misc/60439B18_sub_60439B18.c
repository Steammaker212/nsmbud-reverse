/* sub_60439B18
 * address: 0x60439B18   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60439B18(int result, int a2, int a3, int a4)
{
  int v7; // r1
  bool v8; // zf
  _DWORD v9[30]; // [sp+0h] [bp-78h] BYREF

  v7 = FIELD_U8(result, 4) & 7;
  if ( (unsigned int)(v7 - 2) >= 4 )
  {
    v8 = v7 == 1;
    if ( v7 != 1 )
      v8 = v7 == 0;
    if ( v8 )
      return sub_6090B4B0(result + 16, a2);
  }
  else
  {
    qmemcpy(v9, (const void *)(result + 16), 0x68u);
    if ( v9[1] )
      v9[1] = a4;
    nullsub_112(v9, a2);
    sub_6090BAA4(v9, a2);
    result = sub_6090BC28(v9, a2);
    if ( a3 == 1 )
      return sub_6090B8B4(v9, a2);
  }
  return result;
}
