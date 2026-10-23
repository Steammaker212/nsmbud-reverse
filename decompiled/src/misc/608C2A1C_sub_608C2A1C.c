/* sub_608C2A1C
 * address: 0x608C2A1C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C2A1C(int a1)
{
  int result; // r0
  _DWORD *v3; // r1
  int v4; // r0
  _DWORD *v5; // r2
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  result = nn__os__TryReceiveMessageQueue(v6, a1 + 192);
  if ( result == 1 )
  {
    do
    {
      v3 = (_DWORD *)v6[0];
      FIELD_U32(a1, 392) = *(_DWORD *)(v6[0] + 8);
      v4 = FIELD_U32(a1, 416) - 1;
      do
      {
        FIELD_U32(a1, 416) = v4;
        v5 = v3;
        --v4;
        v3 = (_DWORD *)*v3;
      }
      while ( v3 );
      FIELD_U32(a1, 408) = v5[3];
      FIELD_U8(a1, 412) = 0;
      result = nn__os__TryReceiveMessageQueue(v6, a1 + 192);
    }
    while ( result );
  }
  return result;
}
