/* sub_60443E70
 * address: 0x60443E70   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60443E70(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  int TlsValue; // r0
  unsigned int CurrentCoreNumber; // r0
  int v6; // r5
  unsigned int *v7; // r6
  unsigned int v8; // r7
  unsigned int v9; // r0

  v3 = (_DWORD *)result;
  if ( a3 == 1 )
  {
    TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
    if ( TlsValue )
      CurrentCoreNumber = TlsValue - 1;
    else
      CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
    v6 = 0;
    if ( v3[4098] > CurrentCoreNumber )
      v6 = *(_DWORD *)(v3[4100] + 4 * CurrentCoreNumber);
    v7 = v3 + 4104;
    v8 = v3[4097];
    while ( 1 )
    {
      do
        v9 = __ldrex(v7);
      while ( __strex(v9 + 1, v7) );
      if ( v9 >= v8 )
        break;
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3[v9 + 1] + 8))(v3[v9 + 1]);
    }
    return sub_6090804C(FIELD_U32(v6, 4));
  }
  return result;
}
