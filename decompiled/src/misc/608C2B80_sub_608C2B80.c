/* sub_608C2B80
 * address: 0x608C2B80   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C2B80(int a1, int a2)
{
  int v4; // r6
  void (*v5)(void); // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD *v9; // r2
  int result; // r0
  _DWORD *v11; // [sp+4h] [bp+0h] BYREF

  v4 = a1 + 192;
  do
  {
    if ( !nn__os__TryReceiveMessageQueue(&v11, v4) )
    {
      v5 = *(void (**)(void))(a1 + 8);
      if ( v5 )
        v5();
      nn__os__ReceiveMessageQueue(&v11, v4);
    }
    v6 = v11;
    v7 = v11;
    FIELD_U32(a1, 392) = v11[2];
    v8 = FIELD_U32(a1, 416) - 1;
    do
    {
      FIELD_U32(a1, 416) = v8;
      v9 = v7;
      --v8;
      v7 = (_DWORD *)*v7;
    }
    while ( v7 );
    FIELD_U32(a1, 408) = v9[3];
    FIELD_U8(a1, 412) = 0;
    result = v6[2];
  }
  while ( result != a2 );
  return result;
}
