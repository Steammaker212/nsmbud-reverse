/* sub_601AB178
 * address: 0x601AB178   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AB178(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int v6; // r5
  _BOOL4 v7; // r0
  unsigned int *v8; // r6
  unsigned int v9; // r7
  unsigned int v10; // r0

  v3 = (_DWORD *)result;
  if ( a3 == 1 )
  {
    TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
    if ( TlsValue )
      CurrentCoreNumber = TlsValue - 1;
    else
      CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
    v6 = 0;
    v7 = CurrentCoreNumber != 0;
    if ( v3[4098] > (unsigned int)v7 )
      v6 = *(_DWORD *)(v3[4100] + 4 * v7);
    v8 = v3 + 4104;
    v9 = v3[4097];
    while ( 1 )
    {
      do
        v10 = __ldrex(v8);
      while ( __strex(v10 + 1, v8) );
      if ( v10 >= v9 )
        break;
      (**(void (__fastcall ***)(_DWORD))v3[v10 + 1])(v3[v10 + 1]);
    }
    return sub_6090804C(FIELD_U32(v6, 4));
  }
  return result;
}
