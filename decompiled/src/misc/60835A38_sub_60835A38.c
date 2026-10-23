/* sub_60835A38
 * address: 0x60835A38   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835A38(int a1, int *a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r6

  v4 = *((unsigned __int8 *)a2 + 37);
  v5 = FIELD_U32(a1, 184);
  if ( *((_BYTE *)a2 + 37) )
  {
    v6 = *a2;
    do
    {
      dword_60CC77F8(v5, v6);
      v5 = FIELD_U32(a1, 184);
      --v4;
      v6 += 8;
    }
    while ( v4 );
  }
  dword_60CC77FC(v5, a2 + 3);
  dword_60CC7800(FIELD_U32(a1, 184), a2 + 2);
  return dword_60CC78F0(FIELD_U32(a1, 184), a2 + 4);
}
