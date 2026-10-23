/* sub_6021DAF8
 * address: 0x6021DAF8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021DAF8(int a1)
{
  int v2; // r4

  v2 = dword_60C8D4EC;
  if ( !dword_60C8D4EC )
  {
    v2 = operator_new_8DE2C8(0x40u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BD924C;
    dword_60C8D4E8 = v2;
    FIELD_U32(v2, 56) = 0;
    FIELD_U8(v2, 60) = 7;
    memset((void *)(v2 + 16), 0, 40);
    sub_60203F40(0);
    sub_60203FF0((signed int *)dword_60C8C5E4);
    sub_601B0AB8(0);
    sub_601B0B88(dword_60C8A8C0);
    dword_60C8D4EC = v2;
  }
  return v2;
}
